/*
 * XREFs of ReleaseVaRangeCb @ 0x140122DE8
 * Callers:
 *     ?FreeVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@@Z @ 0x140104E98 (-FreeVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ReleaseVaRangeCb(__int64 a1)
{
  VIDMM_MAPPED_VA_RANGE *v1; // rbx

  v1 = (VIDMM_MAPPED_VA_RANGE *)(a1 - 8);
  *(_DWORD *)(a1 - 8 + 72) &= ~0x4000u;
  Feature_3358814523__private_IsEnabledDeviceUsageNoInline();
  return VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v1);
}
