/*
 * XREFs of NtAlpcCreateSectionView @ 0x140AAF390
 * Callers:
 *     DifNtAlpcCreateSectionViewWrapper @ 0x140670400 (DifNtAlpcCreateSectionViewWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     AlpcpCreateSectionView @ 0x1408F1878 (AlpcpCreateSectionView.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcReferenceBlobByHandle @ 0x14098FD60 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteView @ 0x140992A34 (AlpcpDeleteView.c)
 */

NTSTATUS __cdecl NtAlpcCreateSectionView(HANDLE PortHandle, ULONG Flags, PALPC_DATA_VIEW_ATTR ViewAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  NTSTATUS v7; // ebx
  struct _KLOCK_ENTRIES *v8; // r9
  PVOID v9; // r13
  void *v10; // r12
  ULONG_PTR v12; // r14
  PVOID *p_ViewBase; // rcx
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
  if ( Flags )
    goto LABEL_22;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(ViewAttributes, 0x20uLL, 4u);
    RtlCopyFromUser(&v15, ViewAttributes, 0x20uLL);
  }
  else
  {
    RtlCopyVolatileMemory(&v15, ViewAttributes, 0x20uLL);
  }
  if ( (_DWORD)v15 || !v17 || v16 )
  {
LABEL_22:
    v7 = -1073741811;
  }
  else
  {
    Object[0] = 0LL;
    v7 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, Object, 0LL);
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
          p_ViewBase = &ViewAttributes->ViewBase;
          if ( PreviousMode )
            RtlWriteULong64ToUser(p_ViewBase, *(_QWORD *)(BugCheckParameter2 + 40));
          else
            *p_ViewBase = *(PVOID *)(BugCheckParameter2 + 40);
          if ( PreviousMode )
            RtlWriteULong64ToUser(&ViewAttributes->ViewSize, *(_QWORD *)(v12 + 48));
          else
            ViewAttributes->ViewSize = *(_QWORD *)(v12 + 48);
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
  return v7;
}
