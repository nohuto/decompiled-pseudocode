/*
 * XREFs of ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x180137E5C
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x1800411E0 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800D6F9C (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x180137B50 (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180137CCC (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 *     ?Ensure@CImmersiveApp@@UEAAXXZ @ 0x180301960 (-Ensure@CImmersiveApp@@UEAAXXZ.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180302540 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?Unensure@CImmersiveApp@@UEAAXXZ @ 0x180305170 (-Unensure@CImmersiveApp@@UEAAXXZ.c)
 * Callees:
 *     ?_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180089E4C (-_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1801380AC (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 */

void __fastcall CImmersiveApp::_UpdateAppStateAndSendNotifications(CImmersiveApp *this)
{
  int v2; // ecx
  __int64 v3; // r8
  bool IsApplicationWindowVisible; // al
  int v5; // edx
  int v6; // ecx
  char v7; // dl
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // ecx

  v2 = *((_DWORD *)this + 142);
  v3 = *((_QWORD *)this + 57);
  if ( (v3 != 0) != (v2 & 1) )
  {
    if ( v3 )
    {
      *((_DWORD *)this + 142) = v2 | 1;
      CImmersiveApp::_ScheduleApplicationNotification(this, 1, 0LL);
    }
    else
    {
      *((_DWORD *)this + 142) = v2 & 0xFFFFFFFE;
    }
  }
  IsApplicationWindowVisible = CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp *)((char *)this + 288));
  if ( IsApplicationWindowVisible != ((v5 & 4) != 0) )
  {
    v8 = v5;
    v9 = v5 | 4;
    v10 = v8 & 0xFFFFFFFB;
    if ( !IsApplicationWindowVisible )
      v9 = v10;
    *((_DWORD *)this + 142) = v9;
    CImmersiveApp::_ScheduleApplicationNotification(this, !IsApplicationWindowVisible + 4, 0LL);
  }
  v6 = *((_DWORD *)this + 142);
  v7 = *((_BYTE *)this + 588);
  if ( v7 != ((v6 & 8) != 0) )
  {
    if ( v7 )
      v11 = v6 | 8;
    else
      v11 = v6 & 0xFFFFFFF7;
    *((_DWORD *)this + 142) = v11;
  }
}
