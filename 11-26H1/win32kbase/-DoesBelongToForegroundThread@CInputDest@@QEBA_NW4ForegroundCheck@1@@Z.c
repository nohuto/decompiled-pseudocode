/*
 * XREFs of ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x14018E8AC
 * Callers:
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x1400CC07C (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1400CE260 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ApiSetEditionGetCompositionInputWindowUIOwner @ 0x1401C025C (ApiSetEditionGetCompositionInputWindowUIOwner.c)
 */

bool __fastcall CInputDest::DoesBelongToForegroundThread(CInputDest *a1, int a2, int a3)
{
  __int64 v4; // rbx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v10; // r8
  struct tagWND *UserWindow; // rax
  __int64 CompositionInputWindowUIOwner; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d

  v4 = 0LL;
  if ( !*(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 18944) )
    return 0;
  if ( CInputDest::IsIndependentInputWindow(a1) )
  {
    UserWindow = CInputDest::GetUserWindow(a1);
    CompositionInputWindowUIOwner = ApiSetEditionGetCompositionInputWindowUIOwner(UserWindow);
    if ( CompositionInputWindowUIOwner )
      v4 = *(_QWORD *)(CompositionInputWindowUIOwner + 16);
    return v4 == *(_QWORD *)(W32GetUserSessionState(v15, v14, v16) + 18944);
  }
  else
  {
    W32GetUserSessionState(v7, v6, v8);
    ThreadInfo = CInputDest::GetThreadInfo(a1);
    return ThreadInfo == v10;
  }
}
