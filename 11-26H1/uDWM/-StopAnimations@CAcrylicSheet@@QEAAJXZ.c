/*
 * XREFs of ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18005E508
 * Callers:
 *     ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z @ 0x18004282C (-StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z.c)
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18005E048 (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18005E18C (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x1800956B8 (--1CAcrylicSheet@@EEAA@XZ.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z @ 0x180095A98 (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z.c)
 *     ?OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ @ 0x1800DE5CC (-OnWindowDestroyed@CWindowArrangementTransition@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x18005E5B8 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ?UnRegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x18005E680 (-UnRegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ.c)
 *     ?Hide@CAcrylicSheet@@QEAAXXZ @ 0x18009598C (-Hide@CAcrylicSheet@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAcrylicSheet::StopAnimations(CAcrylicSheet *this)
{
  CTimelineBase *v2; // rcx
  CTimelineBase *v3; // rcx

  v2 = (CTimelineBase *)*((_QWORD *)this + 53);
  if ( v2 )
  {
    CTimelineBase::Release(v2);
    *((_QWORD *)this + 53) = 0LL;
  }
  if ( *((_QWORD *)this + 55)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 109) - 0.0) & _xmm) <= 0.0000011920929 )
  {
    CAcrylicSheet::Hide(this);
  }
  v3 = (CTimelineBase *)*((_QWORD *)this + 55);
  if ( v3 )
  {
    CTimelineBase::Release(v3);
    *((_QWORD *)this + 55) = 0LL;
  }
  CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
    0);
  CAcrylicSheet::UnRegisterGlobalTimer(this);
  return 0LL;
}
