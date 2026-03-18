/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x14091B2F8
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405D7EE0 (PipUpdateDeviceProducts.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14077CB10 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407B592C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407B7138 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140897B7C (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemovePanelDeviceWorker @ 0x14089AE68 (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14089B1BC (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x14089DDB8 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     PiCMEnumerateSubKeys @ 0x140919E14 (PiCMEnumerateSubKeys.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x14091AD40 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A2D44C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140ACFC14 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140B1D980 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140B227E8 (_CmGetDeviceCompoundFiltersWorker.c)
 *     PipMigrateCleanService @ 0x140CC2540 (PipMigrateCleanService.c)
 *     PipResetMatchingFilteredDevices @ 0x140CC3170 (PipResetMatchingFilteredDevices.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryKey @ 0x1407236B0 (ZwQueryKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(
        __int64 a1,
        void *a2,
        _DWORD *a3,
        unsigned int *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  NTSTATUS v9; // edx
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  __int128 KeyInformation; // [rsp+38h] [rbp-38h] BYREF
  __int128 v13; // [rsp+48h] [rbp-28h]
  __int64 v14; // [rsp+58h] [rbp-18h]

  v14 = 0LL;
  ResultLength = 0;
  KeyInformation = 0LL;
  v13 = 0LL;
  v9 = ZwQueryKey(a2, KeyCachedInformation, &KeyInformation, 0x28u, &ResultLength);
  if ( v9 >= 0 )
  {
    if ( a3 )
      *a3 = HIDWORD(KeyInformation);
    if ( a4 )
      *a4 = (unsigned int)v13 >> 1;
    if ( a5 )
      *a5 = DWORD1(v13);
    if ( a6 )
      *a6 = DWORD2(v13) >> 1;
    if ( a7 )
      *a7 = HIDWORD(v13);
  }
  return (unsigned int)v9;
}
