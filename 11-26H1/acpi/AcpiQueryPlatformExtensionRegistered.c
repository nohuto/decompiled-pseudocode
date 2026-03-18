/*
 * XREFs of AcpiQueryPlatformExtensionRegistered @ 0x140035754
 * Callers:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x140034DD0 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1400661C8 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 AcpiQueryPlatformExtensionRegistered()
{
  return (*((__int64 (**)(void))&xmmword_14008FAB0 + 1))();
}
