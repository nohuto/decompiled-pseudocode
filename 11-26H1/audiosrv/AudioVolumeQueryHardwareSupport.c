/*
 * XREFs of AudioVolumeQueryHardwareSupport @ 0x18006C180
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioVolumeQueryHardwareSupport(_QWORD *a1, __int64 a2)
{
  struct _FILETIME v2; // rbx
  __int64 v4; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v7; // ebx
  _QWORD pv[2]; // [rsp+20h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-30h]
  const wchar_t *v11; // [rsp+38h] [rbp-28h]
  struct _FILETIME v12; // [rsp+40h] [rbp-20h]
  char v13; // [rsp+48h] [rbp-18h]
  __int64 v14; // [rsp+4Ch] [rbp-14h]
  struct _FILETIME pftDueTime; // [rsp+80h] [rbp+20h] BYREF

  v2 = g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v12 = v2;
  CurrentThreadId = GetCurrentThreadId();
  v11 = L"AudioVolumeQueryHardwareSupport";
  v13 = 0;
  v14 = 0LL;
  if ( (unsigned int)v4 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                             * v4
                                                                             * (__int128)0x5555555555555555LL) >> 64)
                                                        - 10000 * v4) >> 63)
                                    + ((__int64)(((unsigned __int128)(10000 * v4 * (__int128)0x5555555555555555LL) >> 64)
                                               - 10000 * v4) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v4 / 3, 0);
    }
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 192LL))(*a1, a2);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v7;
}
