/*
 * XREFs of ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x180042060
 * Callers:
 *     <none>
 * Callees:
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180041708 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180089E7C (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x18008B2F4 (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 */

__int64 __fastcall CImmersiveApp::HandleDeactivation(__int64 a1)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  GetSystemTimeAsFileTime((LPFILETIME)(a1 + 572));
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176)) )
    CImmersiveApp::_SetApplicationForegroundPriority(a1 - 112, 1LL);
  *(_DWORD *)(a1 + 456) &= ~2u;
  v3[1] = 0LL;
  v3[0] = 3LL;
  CImmersiveApp::_ScheduleApplicationNotifications(
    (CImmersiveApp *)(a1 - 112),
    (const struct APP_CHANGE_INFO *const)v3,
    1uLL);
  return 0LL;
}
