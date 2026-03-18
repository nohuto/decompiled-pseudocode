/*
 * XREFs of RawBeginOperation @ 0x140218994
 * Callers:
 *     RawQueryFsDeviceInfo @ 0x140800000 (RawQueryFsDeviceInfo.c)
 *     RawSetInformation @ 0x140800084 (RawSetInformation.c)
 *     RawReadWriteDeviceControl @ 0x140A355B4 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x140A35D88 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x140A367BC (RawUserFsCtrl.c)
 *     RawQueryInformation @ 0x140A36C34 (RawQueryInformation.c)
 *     RawQueryFsSizeInfo @ 0x140B25EA8 (RawQueryFsSizeInfo.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218100 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

BOOLEAN __fastcall RawBeginOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  BOOLEAN result; // al

  v2 = *(_QWORD *)(a1 + 216);
  result = 1;
  if ( !v2 || a2 != v2 )
    return ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 232), 1u);
  return result;
}
