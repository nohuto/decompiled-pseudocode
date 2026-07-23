/*
 * XREFs of NtSetInformationIoRing @ 0x14079BEF0
 * Callers:
 *     DifNtSetInformationIoRingWrapper @ 0x14068F850 (DifNtSetInformationIoRingWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IopExceptionFilter @ 0x1405CD104 (IopExceptionFilter.c)
 *     IopIoRingUpdateCompletionUserEvent @ 0x1405CE7D0 (IopIoRingUpdateCompletionUserEvent.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSetInformationIoRing(
        HANDLE IoRingHandle,
        ULONG IoRingInformationClass,
        ULONG IoRingInformationLength,
        PVOID IoRingInformation)
{
  KPROCESSOR_MODE PreviousMode; // r14
  PVOID v8; // rdi
  ULONG v9; // ecx
  int v10; // ebx
  NTSTATUS updated; // eax
  __int64 ULong64FromUser; // [rsp+38h] [rbp-20h] BYREF
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 0LL;
  Object = 0LL;
  if ( IoRingInformationClass > 1 )
    goto LABEL_15;
  v9 = *((_DWORD *)&IopIoRingSetOperationLength + (int)IoRingInformationClass);
  if ( !v9 )
    goto LABEL_15;
  if ( IoRingInformationLength < v9 )
  {
    v10 = -1073741820;
    goto LABEL_16;
  }
  if ( PreviousMode )
    ProbeForRead(IoRingInformation, IoRingInformationLength, 1u);
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(IoRingHandle, 0, IoRingObjectType, PreviousMode, &Object, 0LL);
  v8 = Object;
  if ( v10 >= 0 )
  {
    if ( IoRingInformationClass == 1 )
    {
      ULong64FromUser = 0LL;
      if ( PreviousMode )
        ULong64FromUser = RtlReadULong64FromUser(IoRingInformation);
      else
        RtlCopyVolatileMemory(&ULong64FromUser, IoRingInformation, 8uLL);
      updated = IopIoRingUpdateCompletionUserEvent((__int64)v8, (void **)&ULong64FromUser, PreviousMode);
      v10 = updated;
      if ( updated == -1073741816 || updated == -1073741788 )
        v10 = -1073741582;
      goto LABEL_16;
    }
LABEL_15:
    v10 = -1073741821;
  }
LABEL_16:
  if ( v8 )
    ObfDereferenceObject(v8);
  return v10;
}
