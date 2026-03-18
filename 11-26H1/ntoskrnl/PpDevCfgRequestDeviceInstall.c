/*
 * XREFs of PpDevCfgRequestDeviceInstall @ 0x14077A6E4
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1409DD808 (PiUEventNotifyUserMode.c)
 *     PpDevCfgInit @ 0x140CC642C (PpDevCfgInit.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 */

__int64 PpDevCfgRequestDeviceInstall()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( (PiDevCfgFlags & 2) != 0 )
    return (unsigned int)ZwUpdateWnfStateData((__int64)&WNF_PNPC_DEVICE_INSTALL_REQUESTED, 0LL);
  return v0;
}
