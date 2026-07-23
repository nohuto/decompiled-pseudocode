/*
 * XREFs of RawEndOperation @ 0x140258E74
 * Callers:
 *     RawCompletionRoutine @ 0x140258EB0 (RawCompletionRoutine.c)
 *     RawQueryFsDeviceInfo @ 0x140805A30 (RawQueryFsDeviceInfo.c)
 *     RawSetInformation @ 0x140805AB4 (RawSetInformation.c)
 *     RawQueryInformation @ 0x14091992C (RawQueryInformation.c)
 *     RawUserFsCtrl @ 0x140919C34 (RawUserFsCtrl.c)
 *     RawReadWriteDeviceControl @ 0x14091A2C4 (RawReadWriteDeviceControl.c)
 *     RawQueryFsVolumeInfo @ 0x14091AA98 (RawQueryFsVolumeInfo.c)
 *     RawQueryFsSizeInfo @ 0x140B28108 (RawQueryFsSizeInfo.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

void __fastcall RawEndOperation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 216);
  if ( !v2 || a2 != v2 )
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 232), 1u);
}
