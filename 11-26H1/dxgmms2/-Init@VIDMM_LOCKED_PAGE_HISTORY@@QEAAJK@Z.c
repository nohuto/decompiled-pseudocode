/*
 * XREFs of ?Init@VIDMM_LOCKED_PAGE_HISTORY@@QEAAJK@Z @ 0x14009F1B0
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x14009E770 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall VIDMM_LOCKED_PAGE_HISTORY::Init(VIDMM_LOCKED_PAGE_HISTORY *this, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx

  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = 0;
  if ( !a2 )
    return 0LL;
  v3 = 16LL * a2;
  if ( !is_mul_ok(a2, 0x10uLL) )
    v3 = -1LL;
  v4 = operator new[](v3, 0x36336956u, 256LL);
  *((_QWORD *)this + 1) = v4;
  if ( v4 )
    return 0LL;
  *(_DWORD *)this = 0;
  _InterlockedIncrement(dword_14008A7EC);
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 29959;
  DxgkLogInternalTriageEvent(v5, 262145LL);
  return 3221225495LL;
}
