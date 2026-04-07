/*
 * XREFs of ?GetMonitorInternalInfo@CDWMDisplay@@QEBAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x180058414
 * Callers:
 *     ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x180058324 (-IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

LONG __fastcall CDWMDisplay::GetMonitorInternalInfo(
        CDWMDisplay *this,
        LUID a2,
        UINT32 a3,
        DISPLAYCONFIG_DEVICE_INFO_HEADER *a4)
{
  memset_0(&a4[1], 0, 0x39CuLL);
  a4->type = -7;
  a4->size = 944;
  a4->adapterId = a2;
  a4->id = a3;
  return DisplayConfigGetDeviceInfo(a4);
}
