/*
 * XREFs of _lambda_0ed677524a6dc3cf61a74a5bf9087e56_::operator() @ 0x1801F95BC
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__&_::Invoke @ 0x1801F95A0 (CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__-_--Invoke.c)
 * Callees:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180089E7C (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18008B574 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_0ed677524a6dc3cf61a74a5bf9087e56_::operator()(CImmersiveApp **a1)
{
  CImmersiveApp::CImmersiveWindowCollection *v2; // rcx
  CImmersiveApp *v3; // rbx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)*a1 + 14) + 408LL))((__int64)*a1 + 112) )
  {
    v2 = a1[1];
    v3 = *a1;
    v5[0] = 8LL;
    v5[1] = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow(v2);
    CImmersiveApp::_ScheduleApplicationNotifications(v3, (const struct APP_CHANGE_INFO *const)v5, 1uLL);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
