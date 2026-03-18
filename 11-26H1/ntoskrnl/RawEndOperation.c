/*
 * XREFs of RawEndOperation @ 0x14025769C
 * Callers:
 *     RawCompletionRoutine @ 0x1402576D0 (RawCompletionRoutine.c)
 *     RawQueryFsDeviceInfo @ 0x140800000 (RawQueryFsDeviceInfo.c)
 *     RawSetInformation @ 0x140800084 (RawSetInformation.c)
 *     RawReadWriteDeviceControl @ 0x140A355B4 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x140A35D88 (RawQueryFsVolumeInfo.c)
 *     RawUserFsCtrl @ 0x140A367BC (RawUserFsCtrl.c)
 *     RawQueryInformation @ 0x140A36C34 (RawQueryInformation.c)
 *     RawQueryFsSizeInfo @ 0x140B25EA8 (RawQueryFsSizeInfo.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140257080 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 216);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 232), 1u);
}
