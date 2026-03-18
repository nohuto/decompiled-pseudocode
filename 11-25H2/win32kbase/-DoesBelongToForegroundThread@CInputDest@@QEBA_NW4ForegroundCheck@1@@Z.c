/*
 * XREFs of ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1400B7D80
 * Callers:
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x140207FFC (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400B7D64 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1400B9B10 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1400B9D78 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ApiSetEditionGetCompositionInputWindowUIOwner @ 0x1400B9EE4 (ApiSetEditionGetCompositionInputWindowUIOwner.c)
 */

bool __fastcall CInputDest::DoesBelongToForegroundThread(CInputDest *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v8; // rdx
  struct tagWND *UserWindow; // rax
  __int64 CompositionInputWindowUIOwner; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx

  v3 = 0LL;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18904) )
    return 0;
  if ( CInputDest::IsIndependentInputWindow(a1) )
  {
    UserWindow = CInputDest::GetUserWindow(a1);
    CompositionInputWindowUIOwner = ApiSetEditionGetCompositionInputWindowUIOwner(UserWindow);
    if ( CompositionInputWindowUIOwner )
      v3 = *(_QWORD *)(CompositionInputWindowUIOwner + 16);
    return v3 == *(_QWORD *)(W32GetUserSessionState(v13, v12) + 18904);
  }
  else
  {
    W32GetUserSessionState(v6, v5);
    ThreadInfo = CInputDest::GetThreadInfo(a1);
    return ThreadInfo == v8;
  }
}
