/*
 * XREFs of PortGetDeviceType @ 0x1401B5A5C
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x1400A7264 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetDeviceId @ 0x1400A7910 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetHardwareIds @ 0x1400A7A78 (RaidUnitGetHardwareIds.c)
 *     RaidUnitRegisterInterfaces @ 0x1400A8BDC (RaidUnitRegisterInterfaces.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1401898F0 (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1401B4F4C (RaUnitQueryCapabilitiesIrp.c)
 * Callees:
 *     <none>
 */

char **__fastcall PortGetDeviceType(unsigned int a1)
{
  __int64 v1; // rax

  v1 = 21LL;
  if ( a1 < 0x16 )
    v1 = a1;
  return &PortScsiDeviceTypes[4 * v1];
}
