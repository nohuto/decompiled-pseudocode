/*
 * XREFs of PolicyConfigGetPropertyValue @ 0x180020DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PolicyConfigGetPropertyValue(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  struct _FILETIME v5; // rbx
  __int64 v7; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v11; // ebx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+38h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+48h] [rbp-28h]
  const wchar_t *v16; // [rsp+50h] [rbp-20h]
  struct _FILETIME v17; // [rsp+58h] [rbp-18h]
  char v18; // [rsp+60h] [rbp-10h]
  __int64 v19; // [rsp+64h] [rbp-Ch]

  v5 = g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v17 = v5;
  CurrentThreadId = GetCurrentThreadId();
  v16 = L"PolicyConfigGetPropertyValue";
  v18 = 0;
  v19 = 0LL;
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
  v11 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, __int64, __int64))(*(_QWORD *)g_PolicyConfig + 88LL))(
          g_PolicyConfig,
          a2,
          a3,
          a4,
          a5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v11;
}
