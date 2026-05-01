/*
 * XREFs of ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x180300F30
 * Callers:
 *     ?HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ @ 0x1802FDE70 (-HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ.c)
 *     ?HandleSplashScreenActivationCompleted@CImmersiveApp@@UEAAXXZ @ 0x1802FDF80 (-HandleSplashScreenActivationCompleted@CImmersiveApp@@UEAAXXZ.c)
 *     ?RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0004@@@Z @ 0x1802FF490 (-RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0004@@@Z.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x1802FF790 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 * Callees:
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005CB4C (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005CD2C (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005D1D0 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005E7B8 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     WPP_SF_Sd @ 0x1802090C8 (WPP_SF_Sd.c)
 *     ?CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1802FCC98 (-CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x180300CB4 (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 */

void __fastcall CImmersiveApp::_UpdatePresentedWindow(CImmersiveApp *this)
{
  CImmersiveApp::CImmersiveWindowCollection *v1; // rbx
  HWND v3; // rsi
  int v4; // r8d
  int v5; // edx
  int v6; // r8d
  int v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+20h] [rbp-18h]

  v1 = (CImmersiveApp *)((char *)this + 288);
  v3 = (HWND)*((_QWORD *)this + 52);
  if ( v3
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
    CImmersiveApp::_SetApplicationWindowSynch((__int64)this, v3, v4, *((_DWORD *)this + 106));
    CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged(v1);
  }
  else if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v1)
         && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(v1, v5, v6) )
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
    CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(v1);
  }
}
