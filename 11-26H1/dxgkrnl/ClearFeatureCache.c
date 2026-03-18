/*
 * XREFs of ClearFeatureCache @ 0x140288BD4
 * Callers:
 *     ?DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_FLAGS@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x1403EC9D0 (-DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall ClearFeatureCache(__int64 a1, unsigned int a2)
{
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  memset(*(void **)(a1 + 16LL * a2 + 8), 0, 6LL * *(unsigned int *)(a1 + 16LL * a2 + 16));
  return ExReleasePushLockExclusiveEx(a1, 0LL);
}
