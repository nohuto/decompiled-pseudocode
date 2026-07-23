/*
 * XREFs of NtGetDevicePowerState @ 0x140B40E80
 * Callers:
 *     DifNtGetDevicePowerStateWrapper @ 0x14067CBB0 (DifNtGetDevicePowerStateWrapper.c)
 *     PfpVolumeOpenAndVerify @ 0x1409809C8 (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PopLockGetDoDevicePowerState @ 0x1404EB730 (PopLockGetDoDevicePowerState.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     IoGetRelatedTargetDevice @ 0x140AF49F8 (IoGetRelatedTargetDevice.c)
 */

NTSTATUS __cdecl NtGetDevicePowerState(HANDLE Device, PDEVICE_POWER_STATE State)
{
  char PreviousMode; // r14
  int ULongFromUser; // eax
  NTSTATUS RelatedTargetDevice; // ebx
  PVOID v7; // rsi
  __int32 DoDevicePowerState; // eax
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  PVOID v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser((unsigned int *)State);
    RtlWriteULongToUser(State, ULongFromUser);
  }
  Object = 0LL;
  RelatedTargetDevice = ObReferenceObjectByHandle(
                          Device,
                          0,
                          (POBJECT_TYPE)IoFileObjectType,
                          KeGetCurrentThread()->PreviousMode,
                          &Object,
                          0LL);
  if ( RelatedTargetDevice >= 0 )
  {
    RelatedTargetDevice = IoGetRelatedTargetDevice((struct _FILE_OBJECT *)Object, &v11);
    ObfDereferenceObject(Object);
    if ( RelatedTargetDevice >= 0 )
    {
      v7 = v11;
      DoDevicePowerState = PopLockGetDoDevicePowerState(*((_QWORD *)v11 + 39));
      if ( PreviousMode )
        RtlWriteULongToUser(State, DoDevicePowerState);
      else
        *State = DoDevicePowerState;
      ObfDereferenceObject(v7);
    }
  }
  return RelatedTargetDevice;
}
