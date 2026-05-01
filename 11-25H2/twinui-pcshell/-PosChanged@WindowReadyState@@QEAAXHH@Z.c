/*
 * XREFs of ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x180434CD8
 * Callers:
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180430D4C (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 * Callees:
 *     ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x180071244 (--$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogg.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18007440C (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1801CCA58 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x180434DA8 (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 */

void __fastcall WindowReadyState::PosChanged(WindowReadyState *this, unsigned int a2, unsigned int a3)
{
  char *v3; // rbp
  int *v5; // rsi
  char v8; // r12
  char IsReadyForPresentation; // al

  v3 = (char *)this + 8;
  v5 = (int *)((char *)this + 28);
  v8 = *((_DWORD *)this + 2) == 0;
  if ( a2 != *((_DWORD *)this + 7) || a3 != *((_DWORD *)this + 8) )
  {
    if ( *((_BYTE *)this + 24) )
      WindowReadyState::WaitFlags::Set((char *)this + 8, this, 2LL);
    BeginLayoutUpdate(*(_QWORD *)this);
    *(_QWORD *)v5 = __PAIR64__(a3, a2);
  }
  ++*((_QWORD *)this + 2);
  ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
    (__int64 *)this,
    (int *)this + 4,
    v5,
    (int *)this + 8);
  WindowReadyState::WaitFlags::Set(v3, this, 8LL);
  IsReadyForPresentation = WindowReadyState::IsReadyForPresentation(this);
  if ( v8 != IsReadyForPresentation )
    std::_Func_class<void,bool>::operator()((__int64)this + 40, IsReadyForPresentation);
}
