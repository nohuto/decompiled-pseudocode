/*
 * XREFs of ?WorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAKPEAXPEAUHWND__@@@Z @ 0x180357498
 * Callers:
 *     ?StaticWorkerWindowMessageThread@GamingOverlayExperienceManager@@CAKPEAX@Z @ 0x180354D70 (-StaticWorkerWindowMessageThread@GamingOverlayExperienceManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::WorkerWindowMessageThread(
        GamingOverlayExperienceManager *this,
        void *a2,
        HWND a3)
{
  DWORD v4; // eax
  DWORD v5; // eax
  DWORD v6; // eax
  const char *v7; // r9
  const char *v8; // r9
  HANDLE pHandles; // [rsp+30h] [rbp-48h] BYREF
  MSG Msg; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  pHandles = a2;
  while ( 1 )
  {
    v4 = MsgWaitForMultipleObjectsEx(1u, &pHandles, 0xFFFFFFFF, 0x1CFFu, 6u);
    if ( !v4 )
      break;
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 191;
      if ( v6 && v6 != 66 )
        break;
    }
    else
    {
      memset(&Msg, 0, sizeof(Msg));
      while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
      {
        TranslateMessage(&Msg);
        DispatchMessageW(&Msg);
      }
    }
  }
  if ( !CloseHandle(pHandles) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x371,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      v7);
  if ( !DestroyWindow(a3) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x372,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      v8);
  return 0LL;
}
