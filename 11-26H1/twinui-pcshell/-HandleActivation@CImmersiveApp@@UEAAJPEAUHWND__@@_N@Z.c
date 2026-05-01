/*
 * XREFs of ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x18005E360
 * Callers:
 *     <none>
 * Callees:
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800585E4 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18005C3F8 (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005CD2C (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005E7B8 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180064CB0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x1800AE53C (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x1802FE9F4 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::HandleActivation(CImmersiveApp *this, HWND a2)
{
  bool v3; // si
  __int64 v4; // rcx
  int v6; // r14d
  int v7; // ebp
  bool v8; // r8
  int v9; // eax
  _DWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  HWND v12; // [rsp+28h] [rbp-20h]
  bool v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *((_QWORD *)this + 40);
  v13 = 0;
  v6 = 0;
  v7 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 192LL))(v4) )
  {
    v6 = CImmersiveApp::CImmersiveWindowCollection::ProcessActivation(
           (CImmersiveApp *)((char *)this + 176),
           a2,
           v8,
           &v13);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v3 = v13;
  }
  v9 = *((_DWORD *)this + 114);
  if ( (v9 & 2) == 0 )
  {
    *((_DWORD *)this + 114) = v9 | 2;
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 564));
    v7 = 2;
  }
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp *)((char *)this + 176)) )
  {
    CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((__int64)this + 176, 1);
    if ( (*((_BYTE *)this + 380) & 2) == 0 )
      CImmersiveApp::CImmersiveWindowCollection::_OnDeferredGhostBitsClear((CImmersiveApp *)((char *)this + 176));
    *((_BYTE *)this + 680) = 1;
    *((_DWORD *)this + 171) = 1;
  }
  if ( v3 )
  {
    CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp *)((char *)this + 176));
  }
  else if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp *)((char *)this + 176)) )
  {
    CImmersiveApp::_SetApplicationForegroundPriority((char *)this - 112, 0LL);
  }
  if ( v7 )
  {
    v11[0] = v7;
    v11[1] = 0;
    v12 = a2;
    CImmersiveApp::_ScheduleApplicationNotifications(
      (CImmersiveApp *)((char *)this - 112),
      (const struct APP_CHANGE_INFO *const)v11,
      1uLL);
  }
  return (unsigned int)v6;
}
