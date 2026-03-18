/*
 * XREFs of NVMeControllerIdentifyWorkItem @ 0x14001D390
 * Callers:
 *     <none>
 * Callees:
 *     NVMeGetFeatureIdentifiersSupportedLog @ 0x140005F30 (NVMeGetFeatureIdentifiersSupportedLog.c)
 *     NVMeGetSupportedLogPagesLog @ 0x1400060D0 (NVMeGetSupportedLogPagesLog.c)
 *     NVMeGetCommandEffectsLog @ 0x14000DE30 (NVMeGetCommandEffectsLog.c)
 *     NVMeControllerIdentify @ 0x140024388 (NVMeControllerIdentify.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x1400260A4 (NVMeGetControllerIoCommandSetIdentify.c)
 */

__int64 __fastcall NVMeControllerIdentifyWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9

  NVMeControllerIdentify(a1);
  NVMeGetControllerIoCommandSetIdentify(a1);
  NVMeGetCommandEffectsLog(a1, 1);
  NVMeGetSupportedLogPagesLog(a1, 1u);
  NVMeGetFeatureIdentifiersSupportedLog(a1, 1u);
  return StorPortExtendedFunction(31LL, a1, a3, v5);
}
