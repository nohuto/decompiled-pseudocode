/*
 * XREFs of ?ndisGetTimeInterval@@YA_KPEAT_LARGE_INTEGER@@@Z @ 0x140052710
 * Callers:
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x14016BB90 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x140178170 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 * Callees:
 *     <none>
 */

LONGLONG __fastcall ndisGetTimeInterval(union _LARGE_INTEGER *a1)
{
  return (MEMORY[0xFFFFF78000000014] - a1->QuadPart) / 10000;
}
