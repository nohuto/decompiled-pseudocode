/*
 * XREFs of NtAlpcCreatePortSection @ 0x140AB69F0
 * Callers:
 *     DifNtAlpcCreatePortSectionWrapper @ 0x14066C360 (DifNtAlpcCreatePortSectionWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateSection @ 0x1409BB8D8 (AlpcpCreateSection.c)
 *     AlpcpDereferenceBlobEx @ 0x1409C0380 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x1409C1AB4 (AlpcpDeleteBlob.c)
 */

__int64 __fastcall NtAlpcCreatePortSection(HANDLE Handle, int a2, void *a3, void *a4, _QWORD *a5, _QWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  char v11; // di
  int v12; // ebx
  void *v13; // r9
  PVOID v14; // r14
  ULONG_PTR v15; // rdi
  __int64 ULong64FromUser; // rax
  __int64 v18; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-30h] BYREF
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF

  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a2 & 0xFFFBFFFF) != 0 )
    goto LABEL_19;
  if ( (a2 & 0x40000) == 0 )
  {
    v11 = 0;
    goto LABEL_5;
  }
  if ( a3 )
  {
LABEL_19:
    v12 = -1073741811;
    goto LABEL_17;
  }
  v11 = 1;
LABEL_5:
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a5);
    RtlWriteULong64ToUser(a5, ULong64FromUser);
    v18 = RtlReadULong64FromUser(a6);
    RtlWriteULong64ToUser(a6, v18);
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = a3;
    v14 = Object;
    v12 = AlpcpCreateSection((__int64)Object, v11, 1, v13, a4, &BugCheckParameter2);
    if ( v12 >= 0 )
    {
      v15 = BugCheckParameter2;
      if ( PreviousMode )
        RtlWriteULong64ToUser(a5, *(_QWORD *)(BugCheckParameter2 + 24));
      else
        *a5 = *(_QWORD *)(BugCheckParameter2 + 24);
      if ( PreviousMode )
        RtlWriteULong64ToUser(a6, *(_QWORD *)(v15 + 8));
      else
        *a6 = *(_QWORD *)(v15 + 8);
      AlpcpDereferenceBlobEx(v15, 1);
    }
    ObfDereferenceObject(v14);
  }
LABEL_17:
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
