/*
 * XREFs of _PnpCtxRegEnumValue @ 0x1409531FC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x14059FF50 (PipUpdateDeviceProducts.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14072AF1C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14072C720 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140809E68 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14080A24C (_CmGetDevicesInBaseContainerList.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14080DF84 (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x1408116CC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140891064 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetMatchingFilteredDevices @ 0x140C10EE0 (PipResetMatchingFilteredDevices.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x14095324C (_RegRtlEnumValue.c)
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
