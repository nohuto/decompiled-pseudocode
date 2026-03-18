/*
 * XREFs of ?InitGlobalStorage@VIDMM_PROCESS_FENCE_STORAGE@@SAJXZ @ 0x1400A54C8
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x140125A90 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z @ 0x14011688C (--0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 VIDMM_PROCESS_FENCE_STORAGE::InitGlobalStorage(void)
{
  VIDMM_PROCESS_FENCE_STORAGE *v0; // rax
  __int64 v2; // rcx

  v0 = (VIDMM_PROCESS_FENCE_STORAGE *)operator new(136LL, 0x34346956u, 64LL);
  if ( v0 )
  {
    VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage = VIDMM_PROCESS_FENCE_STORAGE::VIDMM_PROCESS_FENCE_STORAGE(v0, 0LL);
    if ( VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage )
      return 0LL;
  }
  else
  {
    VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage = 0LL;
  }
  _InterlockedIncrement(&dword_14008A76C);
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 1151;
  DxgkLogInternalTriageEvent(v2, 262145LL);
  return 3221225495LL;
}
