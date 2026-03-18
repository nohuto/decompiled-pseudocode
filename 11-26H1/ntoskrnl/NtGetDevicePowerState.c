/*
 * XREFs of NtGetDevicePowerState @ 0x140B3EE50
 * Callers:
 *     DifNtGetDevicePowerStateWrapper @ 0x140678FD0 (DifNtGetDevicePowerStateWrapper.c)
 *     PfpVolumeOpenAndVerify @ 0x1409AF914 (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PopLockGetDoDevicePowerState @ 0x1404F2150 (PopLockGetDoDevicePowerState.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     IoGetRelatedTargetDevice @ 0x140AF2128 (IoGetRelatedTargetDevice.c)
 */

__int64 __fastcall NtGetDevicePowerState(HANDLE Handle, unsigned int *a2)
{
  char PreviousMode; // r14
  int ULongFromUser; // eax
  int RelatedTargetDevice; // ebx
  PVOID v7; // rsi
  int DoDevicePowerState; // eax
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  PVOID v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(a2);
    RtlWriteULongToUser(a2, ULongFromUser);
  }
  Object = 0LL;
  RelatedTargetDevice = ObReferenceObjectByHandle(
                          Handle,
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
        RtlWriteULongToUser(a2, DoDevicePowerState);
      else
        *a2 = DoDevicePowerState;
      ObfDereferenceObject(v7);
    }
  }
  return (unsigned int)RelatedTargetDevice;
}
