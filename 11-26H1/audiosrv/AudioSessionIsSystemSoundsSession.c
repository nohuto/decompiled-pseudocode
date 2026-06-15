/*
 * XREFs of AudioSessionIsSystemSoundsSession @ 0x18006D250
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionIsSystemSoundsSession(__int64 *a1)
{
  __int64 v1; // rdi
  struct _FILETIME v2; // rbx
  __int64 v3; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v5; // eax
  unsigned int v6; // ebx
  _QWORD pv[2]; // [rsp+20h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-30h]
  const wchar_t *v10; // [rsp+38h] [rbp-28h]
  struct _FILETIME v11; // [rsp+40h] [rbp-20h]
  char v12; // [rsp+48h] [rbp-18h]
  __int64 v13; // [rsp+4Ch] [rbp-14h]
  struct _FILETIME pftDueTime; // [rsp+70h] [rbp+10h] BYREF

  v1 = *a1;
  v2 = g_AudioHealthMonitor;
  v3 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v11 = v2;
  CurrentThreadId = GetCurrentThreadId();
  v10 = L"AudioSessionIsSystemSoundsSession";
  v12 = 0;
  v13 = 0LL;
  if ( (unsigned int)v3 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                             * v3
                                                                             * (__int128)0x5555555555555555LL) >> 64)
                                                        - 10000 * v3) >> 63)
                                    + ((__int64)(((unsigned __int128)(10000 * v3 * (__int128)0x5555555555555555LL) >> 64)
                                               - 10000 * v3) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v3 / 3, 0);
    }
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 168LL))(v1);
  v6 = v5;
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionIsSystemSoundsSession", 1758, v5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v6;
}
