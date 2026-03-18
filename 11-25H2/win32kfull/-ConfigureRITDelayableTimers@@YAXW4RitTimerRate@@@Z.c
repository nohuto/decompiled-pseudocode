/*
 * XREFs of ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1400D718C
 * Callers:
 *     SetTimerCoalescingTolerance @ 0x1400D7B20 (SetTimerCoalescingTolerance.c)
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 * Callees:
 *     InternalSetTimer @ 0x140019C44 (InternalSetTimer.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void (__fastcall **__fastcall ConfigureRITDelayableTimers(__int64 a1, __int64 a2))(struct BLTINFO *)
{
  int v2; // esi
  int v3; // ebx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  struct BLTINFO *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  void (__fastcall **v14)(struct BLTINFO *); // rbx
  void (__fastcall **result)(struct BLTINFO *); // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx

  v2 = a1;
  if ( (dword_14039C4F4 & 1) == 0 )
  {
    dword_14039C4F4 |= 1u;
    qword_14039BA10 = (__int64)LastWokenThread::OnDaemonTimer;
    qword_14039BA18 = (__int64)DoPowerStateAndMonitor;
    qword_14039BA20 = (__int64)OnHideAppStartCursor;
  }
  v3 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( v2 )
  {
    if ( *(_QWORD *)(UserSessionState + 62696) )
    {
      v7 = W32GetUserSessionState(v6, v5);
      if ( v2 == 1 )
      {
        v10 = 1000;
      }
      else
      {
        v3 = *(_DWORD *)(v7 + 62688);
        v19 = *(_DWORD *)(W32GetUserSessionState(v9, v8) + 62684);
        v7 = W32GetUserSessionState(v21, v20);
        v10 = v19;
      }
      v11 = InternalSetTimer(
              0LL,
              *(_QWORD *)(v7 + 62696),
              v10,
              (__int64)lambda_2bb7a2ff8864d6893c712a9e9ac801fb_::_lambda_invoker_cdecl_,
              v3,
              4);
      *(_QWORD *)(W32GetUserSessionState(v13, v12) + 62696) = v11;
    }
    v14 = (void (__fastcall **)(struct BLTINFO *))&off_14034BB28;
    do
    {
      LOBYTE(v6) = v2 == 1;
      (*v14)(v6);
      result = off_14034BB40;
      ++v14;
    }
    while ( v14 != off_14034BB40 );
  }
  else
  {
    v16 = InternalSetTimer(
            0LL,
            *(_QWORD *)(UserSessionState + 62696),
            0x3E8u,
            (__int64)lambda_2bb7a2ff8864d6893c712a9e9ac801fb_::_lambda_invoker_cdecl_,
            0,
            4);
    result = (void (__fastcall **)(struct BLTINFO *))W32GetUserSessionState(v18, v17);
    result[7837] = (void (__fastcall *)(struct BLTINFO *))v16;
  }
  return result;
}
