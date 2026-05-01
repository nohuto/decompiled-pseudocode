/*
 * XREFs of ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x1803055CC
 * Callers:
 *     ?HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ @ 0x180302720 (-HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ.c)
 *     ?HandleSplashScreenActivationCompleted@CImmersiveApp@@UEAAXXZ @ 0x180302820 (-HandleSplashScreenActivationCompleted@CImmersiveApp@@UEAAXXZ.c)
 *     ?RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0004@@@Z @ 0x180303B60 (-RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0004@@@Z.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180303E60 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 * Callees:
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180041708 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18017A670 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180182C4C (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180182E2C (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     WPP_SF_Sd @ 0x1801832D8 (WPP_SF_Sd.c)
 *     ?CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180301578 (-CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x18030535C (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 */

void __fastcall CImmersiveApp::_UpdatePresentedWindow(CImmersiveApp *this)
{
  HWND v1; // rsi
  CImmersiveApp::CImmersiveWindowCollection *v2; // rdi
  int v4; // r8d
  int v5; // edx
  int v6; // r8d
  int v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+20h] [rbp-18h]

  v1 = (HWND)*((_QWORD *)this + 52);
  v2 = (CImmersiveApp *)((char *)this + 288);
  if ( v1
    && CImmersiveApp::CImmersiveWindowCollection::CanShowPendingApplicationWindow((CImmersiveApp *)((char *)this + 288)) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      v7 = *((_DWORD *)this + 146);
      WPP_SF_Sd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0xEu,
        &WPP_9b7d568634ab3ac73462613a22000263_Traceguids,
        *((const wchar_t **)this + 72),
        v7);
    }
    CImmersiveApp::_SetApplicationWindowSynch((__int64)this, v1, v4, *((_DWORD *)this + 106));
    CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged(v2);
  }
  else if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v2)
         && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(v2, v5, v6) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      v8 = *((_DWORD *)this + 146);
      WPP_SF_Sd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0xFu,
        &WPP_9b7d568634ab3ac73462613a22000263_Traceguids,
        *((const wchar_t **)this + 72),
        v8);
    }
    CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(v2);
  }
}
