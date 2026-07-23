/*
 * XREFs of IoGetRelatedTargetDevice @ 0x140AF49F8
 * Callers:
 *     IoCheckPagefileDisableReservations @ 0x1407989CC (IoCheckPagefileDisableReservations.c)
 *     NtSetVolumeInformationFile @ 0x14079C810 (NtSetVolumeInformationFile.c)
 *     PiPagePathSetState @ 0x1407A6950 (PiPagePathSetState.c)
 *     NtGetDevicePowerState @ 0x140B40E80 (NtGetDevicePowerState.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x14049B114 (PnpGetRelatedTargetDevice.c)
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
