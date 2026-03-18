/*
 * XREFs of DeviceSlot_D0EntryCleanupState @ 0x14001C248
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x140037790 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1400071EC (WPP_RECORDER_SF_qd.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x14001C2EC (DeviceSlot_DisableAllDeviceSlots.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x140047040 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall DeviceSlot_D0EntryCleanupState(__int64 a1, int a2)
{
  __int64 *i; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      0xAu,
      0xEu,
      (__int64)&WPP_89cd3fece2b53994e2caa5355f1e1bb0_Traceguids,
      a1,
      a2);
  if ( *(_BYTE *)(a1 + 80) )
  {
    XilDeviceSlot_InitializeSecureScratchpadBuffers(a1 + 16);
  }
  else
  {
    for ( i = *(__int64 **)(a1 + 56); i != (__int64 *)(a1 + 56); i = (__int64 *)*i )
      memset((void *)i[2], 0, *((unsigned int *)i + 10));
  }
  return DeviceSlot_DisableAllDeviceSlots(a1);
}
