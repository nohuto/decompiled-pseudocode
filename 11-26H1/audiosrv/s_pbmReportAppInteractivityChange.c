/*
 * XREFs of s_pbmReportAppInteractivityChange @ 0x180072040
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 */

__int64 __fastcall s_pbmReportAppInteractivityChange(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _FILETIME v4; // rbx
  __int64 v6; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v11; // ebx
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+28h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-28h]
  const wchar_t *v16; // [rsp+40h] [rbp-20h]
  struct _FILETIME v17; // [rsp+48h] [rbp-18h]
  char v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+54h] [rbp-Ch]

  v4 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v17 = v4;
  CurrentThreadId = GetCurrentThreadId();
  v16 = L"s_pbmReportAppInteractivityChange";
  v18 = 0;
  v19 = 0LL;
  if ( (unsigned int)v6 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                             * v6
                                                                             * (__int128)0x5555555555555555LL) >> 64)
                                                        - 10000 * v6) >> 63)
                                    + ((__int64)(((unsigned __int128)(10000 * v6 * (__int128)0x5555555555555555LL) >> 64)
                                               - 10000 * v6) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v6 / 3, 0);
    }
  }
  if ( (unsigned int)IsPbmReportAppInteractivityChangeSupported() )
    v11 = PbmReportAppInteractivityChange(a1, a2, a3, a4);
  else
    v11 = 0;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v11;
}
