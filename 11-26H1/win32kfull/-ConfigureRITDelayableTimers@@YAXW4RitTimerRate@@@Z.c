/*
 * XREFs of ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x14019B840
 * Callers:
 *     ?StartScreenSaver@@YAXH@Z @ 0x14019B2E4 (-StartScreenSaver@@YAXH@Z.c)
 *     SetTimerCoalescingTolerance @ 0x14019B750 (SetTimerCoalescingTolerance.c)
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 * Callees:
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall ConfigureRITDelayableTimers(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v3; // ebx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  void (**v14)(ForegroundLaunch *__hidden, bool); // rbx
  _QWORD *result; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx

  v2 = a1;
  if ( (dword_1403AB284 & 1) == 0 )
  {
    dword_1403AB284 |= 1u;
    qword_1403AA888 = (__int64)LastWokenThread::OnDaemonTimer;
    qword_1403AA890 = (__int64)DoPowerStateAndMonitor;
    qword_1403AA898 = (__int64)OnHideAppStartCursor;
  }
  v3 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( v2 )
  {
    if ( *(_QWORD *)(UserSessionState + 62688) )
    {
      v7 = W32GetUserSessionState(v6, v5);
      if ( v2 == 1 )
      {
        v10 = 1000;
      }
      else
      {
        v3 = *(_DWORD *)(v7 + 62680);
        v19 = *(_DWORD *)(W32GetUserSessionState(v9, v8) + 62676);
        v7 = W32GetUserSessionState(v21, v20);
        v10 = v19;
      }
      v11 = InternalSetTimer(
              0LL,
              *(_QWORD *)(v7 + 62688),
              v10,
              (__int64)lambda_2bb7a2ff8864d6893c712a9e9ac801fb_::_lambda_invoker_cdecl_,
              v3,
              4);
      *(_QWORD *)(W32GetUserSessionState(v13, v12) + 62688) = v11;
    }
    v14 = &off_140359140;
    do
    {
      LOBYTE(v6) = v2 == 1;
      ((void (__fastcall *)(__int64))*v14)(v6);
      result = &unk_140359158;
      ++v14;
    }
    while ( v14 != (void (**)(ForegroundLaunch *__hidden, bool))&unk_140359158 );
  }
  else
  {
    v16 = InternalSetTimer(
            0LL,
            *(_QWORD *)(UserSessionState + 62688),
            0x3E8u,
            (__int64)lambda_2bb7a2ff8864d6893c712a9e9ac801fb_::_lambda_invoker_cdecl_,
            0,
            4);
    result = (_QWORD *)W32GetUserSessionState(v18, v17);
    result[7836] = v16;
  }
  return result;
}
