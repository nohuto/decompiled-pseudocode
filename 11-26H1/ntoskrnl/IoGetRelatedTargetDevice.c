/*
 * XREFs of IoGetRelatedTargetDevice @ 0x140AF2128
 * Callers:
 *     IoCheckPagefileDisableReservations @ 0x140795E9C (IoCheckPagefileDisableReservations.c)
 *     NtSetVolumeInformationFile @ 0x140799CE0 (NtSetVolumeInformationFile.c)
 *     PiPagePathSetState @ 0x1407A3E10 (PiPagePathSetState.c)
 *     NtGetDevicePowerState @ 0x140B3EE50 (NtGetDevicePowerState.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x1404A15E4 (PnpGetRelatedTargetDevice.c)
 */

__int64 __fastcall IoGetRelatedTargetDevice(struct _FILE_OBJECT *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  result = PnpGetRelatedTargetDevice(a1, &v4);
  if ( (int)result >= 0 )
  {
    if ( v4 )
      *a2 = *(_QWORD *)(v4 + 32);
  }
  return result;
}
