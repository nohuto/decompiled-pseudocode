/*
 * XREFs of AudioSessionSetDisplayName @ 0x18006CAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionSetDisplayName(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  struct _FILETIME v5; // rbx
  __int64 v7; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v9; // eax
  unsigned int v10; // ebx
  _QWORD pv[2]; // [rsp+20h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-30h]
  const wchar_t *v14; // [rsp+38h] [rbp-28h]
  struct _FILETIME v15; // [rsp+40h] [rbp-20h]
  char v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+4Ch] [rbp-14h]
  struct _FILETIME pftDueTime; // [rsp+80h] [rbp+20h] BYREF

  v3 = *a1;
  v5 = g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v15 = v5;
  CurrentThreadId = GetCurrentThreadId();
  v14 = L"AudioSessionSetDisplayName";
  v16 = 0;
  v17 = 0LL;
  if ( (unsigned int)v7 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                             * v7
                                                                             * (__int128)0x5555555555555555LL) >> 64)
                                                        - 10000 * v7) >> 63)
                                    + ((__int64)(((unsigned __int128)(10000 * v7 * (__int128)0x5555555555555555LL) >> 64)
                                               - 10000 * v7) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v7 / 3, 0);
    }
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 192LL))(v3, a2, a3);
  v10 = v9;
  if ( v9 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionSetDisplayName", 1857, v9);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v10;
}
