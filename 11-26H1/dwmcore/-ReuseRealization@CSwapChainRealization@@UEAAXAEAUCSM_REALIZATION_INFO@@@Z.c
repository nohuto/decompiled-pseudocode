/*
 * XREFs of ?ReuseRealization@CSwapChainRealization@@UEAAXAEAUCSM_REALIZATION_INFO@@@Z @ 0x1802AE330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSwapChainRealization::ReuseRealization(CSwapChainRealization *this, struct CSM_REALIZATION_INFO *a2)
{
  *((_DWORD *)this + 57) = *((_DWORD *)a2 + 1);
}
