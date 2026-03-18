/*
 * XREFs of _PnpCtxRegEnumValue @ 0x14091ACF0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405D7EE0 (PipUpdateDeviceProducts.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407B592C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407B7138 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140897798 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140897B7C (_CmGetDevicesInBaseContainerList.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14089B1BC (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x140A2D44C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140ACFC14 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetMatchingFilteredDevices @ 0x140CC3170 (PipResetMatchingFilteredDevices.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x14091AFB0 (_RegRtlEnumValue.c)
 */

__int64 __fastcall PnpCtxRegEnumValue(
        __int64 a1,
        void *a2,
        ULONG a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        __int64 a8)
{
  return RegRtlEnumValue(a2, a3, a4, a6, a7, a8);
}
