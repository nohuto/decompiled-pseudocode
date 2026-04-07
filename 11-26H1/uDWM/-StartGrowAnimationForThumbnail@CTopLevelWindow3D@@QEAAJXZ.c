/*
 * XREFs of ?StartGrowAnimationForThumbnail@CTopLevelWindow3D@@QEAAJXZ @ 0x1800CC1E8
 * Callers:
 *     ?OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@I@Z @ 0x1800E1CD8 (-OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@I@Z.c)
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::StartGrowAnimationForThumbnail(CTopLevelWindow3D *this)
{
  int started; // eax
  unsigned int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 464)
    || (started = CTopLevelWindow3D::StartAnimation((__int64)this, 0x11u), v3 = started, started >= 0) )
  {
    *((_BYTE *)this + 464) = 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DC,
      (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)started);
    return v3;
  }
}
