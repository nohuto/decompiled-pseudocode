/*
 * XREFs of ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x18005E160
 * Callers:
 *     <none>
 * Callees:
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005E7B8 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180064CB0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x1800AE53C (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 */

__int64 __fastcall CImmersiveApp::HandleDeactivation(__int64 a1)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  GetSystemTimeAsFileTime((LPFILETIME)(a1 + 572));
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176)) )
    CImmersiveApp::_SetApplicationForegroundPriority(a1 - 112, 1LL);
  *(_DWORD *)(a1 + 456) &= ~2u;
  v3[0] = 3LL;
  v3[1] = 0LL;
  CImmersiveApp::_ScheduleApplicationNotifications(
    (CImmersiveApp *)(a1 - 112),
    (const struct APP_CHANGE_INFO *const)v3,
    1uLL);
  return 0LL;
}
