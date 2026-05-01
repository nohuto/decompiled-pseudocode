/*
 * XREFs of ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18008AF10
 * Callers:
 *     <none>
 * Callees:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x1800411E0 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180089E7C (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 */

__int64 __fastcall CImmersiveApp::HandleInitialViewCreation(
        CImmersiveApp *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct ITaskWindow *a3)
{
  CImmersiveApp *v3; // rdi
  int v4; // ebx
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  bool v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  v3 = (CImmersiveApp *)((char *)this - 112);
  v4 = CImmersiveApp::_ProcessNewView((__int64)this - 112, a2, 1, 0, a3, &v7);
  if ( v4 >= 0 && v7 )
  {
    v6[1] = 0LL;
    v6[0] = 11LL;
    CImmersiveApp::_ScheduleApplicationNotifications(v3, (const struct APP_CHANGE_INFO *const)v6, 1uLL);
  }
  return (unsigned int)v4;
}
