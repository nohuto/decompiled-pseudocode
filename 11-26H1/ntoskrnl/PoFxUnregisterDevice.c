/*
 * XREFs of PoFxUnregisterDevice @ 0x140B06270
 * Callers:
 *     DifPoFxUnregisterDeviceWrapper @ 0x1406941D0 (DifPoFxUnregisterDeviceWrapper.c)
 * Callees:
 *     PopFxDestroyDeviceDpm @ 0x1404EF894 (PopFxDestroyDeviceDpm.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140B06444 (PopFxUnregisterDeviceOrWait.c)
 *     PopFxUnregisterDevice @ 0x140B06628 (PopFxUnregisterDevice.c)
 */

__int64 __fastcall PoFxUnregisterDevice(ULONG_PTR a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
    PopFxUnregisterDeviceOrWait(*(_QWORD *)(a1 + 48));
  else
    PopFxUnregisterDevice(a1);
  return PopFxDestroyDeviceDpm(v1, a1);
}
