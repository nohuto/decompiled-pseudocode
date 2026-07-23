/*
 * XREFs of RawBeginOperation @ 0x140218CC4
 * Callers:
 *     RawQueryFsDeviceInfo @ 0x140805A30 (RawQueryFsDeviceInfo.c)
 *     RawSetInformation @ 0x140805AB4 (RawSetInformation.c)
 *     RawQueryInformation @ 0x14091992C (RawQueryInformation.c)
 *     RawUserFsCtrl @ 0x140919C34 (RawUserFsCtrl.c)
 *     RawReadWriteDeviceControl @ 0x14091A2C4 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x14091AA98 (RawQueryFsVolumeInfo.c)
 *     RawQueryFsSizeInfo @ 0x140B28108 (RawQueryFsSizeInfo.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218430 (ExAcquireRundownProtectionCacheAwareEx.c)
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
