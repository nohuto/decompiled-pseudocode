/*
 * XREFs of NtAlpcCreatePortSection @ 0x140AB7DB0
 * Callers:
 *     DifNtAlpcCreatePortSectionWrapper @ 0x14066FF40 (DifNtAlpcCreatePortSectionWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateSection @ 0x14098C8B8 (AlpcpCreateSection.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x140992A94 (AlpcpDeleteBlob.c)
 */

NTSTATUS __cdecl NtAlpcCreatePortSection(
        HANDLE PortHandle,
        ULONG Flags,
        HANDLE SectionHandle,
        SIZE_T SectionSize,
        PALPC_HANDLE AlpcSectionHandle,
        PSIZE_T ActualSectionSize)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // si
  char v11; // di
  NTSTATUS v12; // ebx
  HANDLE v13; // r9
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
  if ( (Flags & 0xFFFBFFFF) != 0 )
    goto LABEL_19;
  if ( (Flags & 0x40000) == 0 )
  {
    v11 = 0;
    goto LABEL_5;
  }
  if ( SectionHandle )
  {
LABEL_19:
    v12 = -1073741811;
    goto LABEL_17;
  }
  v11 = 1;
LABEL_5:
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(AlpcSectionHandle);
    RtlWriteULong64ToUser(AlpcSectionHandle, ULong64FromUser);
    v18 = RtlReadULong64FromUser(ActualSectionSize);
    RtlWriteULong64ToUser(ActualSectionSize, v18);
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = SectionHandle;
    v14 = Object;
    v12 = AlpcpCreateSection((__int64)Object, v11, 1, v13, (PVOID)SectionSize, &BugCheckParameter2);
    if ( v12 >= 0 )
    {
      v15 = BugCheckParameter2;
      if ( PreviousMode )
        RtlWriteULong64ToUser(AlpcSectionHandle, *(_QWORD *)(BugCheckParameter2 + 24));
      else
        *AlpcSectionHandle = *(HANDLE *)(BugCheckParameter2 + 24);
      if ( PreviousMode )
        RtlWriteULong64ToUser(ActualSectionSize, *(_QWORD *)(v15 + 8));
      else
        *ActualSectionSize = *(_QWORD *)(v15 + 8);
      AlpcpDereferenceBlobEx(v15, 1);
    }
    ObfDereferenceObject(v14);
  }
LABEL_17:
  KeLeaveCriticalRegion();
  return v12;
}
