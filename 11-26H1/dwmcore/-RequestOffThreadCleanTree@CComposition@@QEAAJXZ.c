/*
 * XREFs of ?RequestOffThreadCleanTree@CComposition@@QEAAJXZ @ 0x180094C30
 * Callers:
 *     ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x180092E60 (-CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180093290 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801D47E0 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall CComposition::RequestOffThreadCleanTree(CComposition *this, void *a2)
{
  if ( *((_BYTE *)this + 6466) )
    return 2147500036LL;
  wil::details::ResetEvent(*((wil::details **)this + 800), a2);
  *((_BYTE *)this + 6408) = 1;
  CComposition::ScheduleCompositionPass(this, 0LL, 0x100000LL);
  return 0LL;
}
