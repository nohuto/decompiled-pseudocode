/*
 * XREFs of ?IsRangeValid@@YAE_K00@Z @ 0x1401085C8
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAUVIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x140107850 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 __fastcall IsRangeValid(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rcx

  if ( a2 <= a1 )
  {
    WdLogSingleEntry0(1LL);
    v4 = 25267LL;
  }
  else
  {
    if ( a2 <= a3 )
      return 1;
    WdLogSingleEntry0(1LL);
    v4 = 25272LL;
  }
  WdLogGlobalForLineNumber = v4;
  DxgkLogInternalTriageEvent(v4, 0x40000LL);
  return 0;
}
