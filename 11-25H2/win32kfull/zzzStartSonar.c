/*
 * XREFs of zzzStartSonar @ 0x140287B4C
 * Callers:
 *     EditionHandleSonarKeyEvent @ 0x1401C7A00 (EditionHandleSonarKeyEvent.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _MonitorFromPoint @ 0x140091A70 (_MonitorFromPoint.c)
 *     zzzStartFade @ 0x1401E99CC (zzzStartFade.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401F46B0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x140241C3C (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     zzzAnimateFade @ 0x140242188 (zzzAnimateFade.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?SonarStart@Mouse@InputTraceLogging@@SAXAEBUtagPOINT@@I@Z @ 0x140287734 (-SonarStart@Mouse@InputTraceLogging@@SAXAEBUtagPOINT@@I@Z.c)
 *     StopSonar @ 0x140287A2C (StopSonar.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

HDC __fastcall zzzStartSonar(__int64 a1, __int64 a2)
{
  const struct tagPOINT *UserSessionState; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  const struct tagPOINT *v5; // rdi
  __int64 v6; // rcx
  INT v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  HDC result; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _BYTE v17[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h]
  struct tagRECT v19; // [rsp+40h] [rbp-28h] BYREF

  UserSessionState = (const struct tagPOINT *)W32GetUserSessionState(a1, a2);
  v5 = UserSessionState + 2041;
  v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 19872) + 4960LL);
  UserSessionState[2041] = (const struct tagPOINT)v6;
  v7 = *(unsigned __int16 *)(*(_QWORD *)(MonitorFromPoint(v6, 2u, 0x12u) + 40) + 60LL);
  UserSessionState[2042].x = v7;
  UserSessionState[2040].y = EngMulDiv(100, v7, 96);
  if ( *(_DWORD *)(W32GetUserSessionState(v9, v8) + 43032) )
    StopSonar();
  InputTraceLogging::Mouse::SonarStart(UserSessionState + 2041);
  v19.left = v5->x - UserSessionState[2040].y;
  v19.right = UserSessionState[2040].y + v5->x;
  v19.top = UserSessionState[2041].y - UserSessionState[2040].y;
  v19.bottom = UserSessionState[2041].y + UserSessionState[2040].y;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((unsigned int)v19.top);
  result = CreateFadeInternal(0LL, &v19, 1000, 192, CurrentThreadDpiAwarenessContext);
  if ( result )
  {
    DrawSonar(result);
    v18 = 0LL;
    v17[0] = 0;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v17, v12);
    zzzStartFade(v14, v13);
    zzzAnimateFade(v16, v15);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v17);
    return (HDC)1;
  }
  return result;
}
