/*
 * XREFs of NtAlpcCreateSectionView @ 0x140AB13A0
 * Callers:
 *     DifNtAlpcCreateSectionViewWrapper @ 0x14066C820 (DifNtAlpcCreateSectionViewWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     AlpcpCreateSectionView @ 0x1408EB2B8 (AlpcpCreateSectionView.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     AlpcReferenceBlobByHandle @ 0x1409BED80 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x1409C0380 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteView @ 0x1409C1A54 (AlpcpDeleteView.c)
 */

__int64 __fastcall NtAlpcCreateSectionView(HANDLE Handle, int a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  int v7; // ebx
  struct _KLOCK_ENTRIES *v8; // r9
  PVOID v9; // r13
  void *v10; // r12
  ULONG_PTR v12; // r14
  _QWORD *v13; // rcx
  PVOID Object[2]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v15; // [rsp+48h] [rbp-50h] BYREF
  __int64 v16; // [rsp+58h] [rbp-40h]
  __int64 v17; // [rsp+60h] [rbp-38h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  LODWORD(v17) = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
    goto LABEL_22;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(a3, 0x20uLL, 4u);
    RtlCopyFromUser(&v15, a3, 0x20uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&v15, a3, 0x20uLL);
  }
  if ( (_DWORD)v15 || !v17 || v16 )
  {
LABEL_22:
    v7 = -1073741811;
  }
  else
  {
    Object[0] = 0LL;
    v7 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, Object, 0LL);
    if ( v7 >= 0 )
    {
      v9 = Object[0];
      v10 = (void *)AlpcReferenceBlobByHandle(
                      (_QWORD *)(*((_QWORD *)Object[0] + 2) + 40LL),
                      SDWORD2(v15),
                      AlpcSectionType,
                      v8);
      Object[1] = v10;
      if ( v10 )
      {
        v7 = AlpcpCreateSectionView((ULONG_PTR)v10, (__int64)v9, 0LL, v17, &BugCheckParameter2);
        if ( v7 >= 0 )
        {
          v12 = BugCheckParameter2;
          v13 = a3 + 2;
          if ( PreviousMode )
            RtlWriteULong64ToUser(v13, *(_QWORD *)(BugCheckParameter2 + 40));
          else
            *v13 = *(_QWORD *)(BugCheckParameter2 + 40);
          if ( PreviousMode )
            RtlWriteULong64ToUser(a3 + 3, *(_QWORD *)(v12 + 48));
          else
            a3[3] = *(_QWORD *)(v12 + 48);
          AlpcpDereferenceBlobEx(v12, 1);
        }
        AlpcpDereferenceBlobEx((ULONG_PTR)v10, 1);
      }
      else
      {
        v7 = -1073741816;
      }
      ObfDereferenceObject(v9);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
