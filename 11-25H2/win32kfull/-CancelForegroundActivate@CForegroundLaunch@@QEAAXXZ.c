/*
 * XREFs of ?CancelForegroundActivate@CForegroundLaunch@@QEAAXXZ @ 0x1401DF528
 * Callers:
 *     ?CancelForegroundActivate@ForegroundLaunch@@YAXXZ @ 0x1401DF500 (-CancelForegroundActivate@ForegroundLaunch@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121A70 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121C48 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

void __fastcall CForegroundLaunch::CancelForegroundActivate(CForegroundLaunch *this)
{
  CForegroundLaunch *v1; // rbp
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // si
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  bool v9; // r15
  bool v10; // r12
  int v11; // ebx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  bool v17; // bl
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx

  v1 = this;
  W32AcquirePushLockExclusiveEx(this, 0);
  if ( (*(_DWORD *)(W32GetUserSessionState(v3, v2) + 66800) & 0x8000000) != 0 )
  {
    v6 = 1;
    v7 = (_QWORD *)*((_QWORD *)v1 + 53);
    if ( v7 != (_QWORD *)((char *)v1 + 424) )
    {
      do
      {
        v8 = *(v7 - 2);
        if ( !PsGetProcessDebugPort(*(_QWORD *)v8) )
        {
          *(_DWORD *)(v8 + 12) &= ~0x100u;
          v5 = *(_QWORD *)&WPP_GLOBAL_Control;
          v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
          v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v11 = *(_DWORD *)(v8 + 56);
            UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
            LOBYTE(v13) = v10;
            LOBYTE(v14) = v9;
            WPP_RECORDER_AND_TRACE_SF_d(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v14,
              v13,
              *(_QWORD *)(UserSessionState + 69160),
              4,
              2,
              44,
              (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
              v11);
          }
        }
        v7 = (_QWORD *)*v7;
      }
      while ( v7 != (_QWORD *)((char *)v1 + 424) );
      v1 = this;
    }
    v15 = W32GetUserSessionState(v5, v4);
    *(_DWORD *)(v15 + 66800) &= ~0x8000000u;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v6 = 0;
    }
    v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v20,
        v19,
        *(_QWORD *)(v18 + 69160),
        4,
        2,
        45,
        (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
    }
  }
  W32ReleasePushLockExclusiveEx(v1, 0LL);
}
