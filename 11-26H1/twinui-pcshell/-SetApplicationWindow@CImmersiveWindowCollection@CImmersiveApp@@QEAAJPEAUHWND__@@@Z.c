/*
 * XREFs of ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x1802FF9FC
 * Callers:
 *     ?HideVisibleAppWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4PROCESS_HIDE_OPTION_HOW@2@@Z @ 0x18005C4CC (-HideVisibleAppWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4PROCESS_HIDE_OPTION_HOW@2.c)
 *     ?OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z @ 0x18005E638 (-OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1802FFF3C (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x180300CB4 (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 * Callees:
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x18005D7E4 (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180300B7C (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x180300C68 (-_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z.c)
 *     WPP_SF_Sdqd @ 0x1803015F4 (WPP_SF_Sdqd.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2)
{
  char v2; // si
  int v4; // r8d
  int v5; // edx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0LL;
  v2 = (char)a2;
  CImmersiveApp::CImmersiveWindowCollection::_FindWindow(this, a2, &v9);
  v5 = v9;
  v6 = 0;
  if ( v9 )
  {
    v7 = CImmersiveApp::CImmersiveWindowCollection::_SetApplicationWindow(this, v9);
    v6 = v7;
    if ( *((_QWORD *)this + 16) )
    {
      if ( v7 >= 0 )
        CImmersiveApp::CImmersiveWindowCollection::_CleanupPendingPresentedWindow(this);
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_Sdqd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      v5,
      v4,
      *(_QWORD *)(*((_QWORD *)this + 19) + 576LL),
      *(_DWORD *)(*((_QWORD *)this + 19) + 584LL),
      v2,
      v6);
  }
  return v6;
}
