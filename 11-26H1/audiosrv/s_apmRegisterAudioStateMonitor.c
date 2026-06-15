/*
 * XREFs of s_apmRegisterAudioStateMonitor @ 0x18006D650
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall s_apmRegisterAudioStateMonitor(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _FILETIME v5; // rbx
  __int64 v7; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v12; // ebx
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+48h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+58h] [rbp-28h]
  const wchar_t *v17; // [rsp+60h] [rbp-20h]
  struct _FILETIME v18; // [rsp+68h] [rbp-18h]
  char v19; // [rsp+70h] [rbp-10h]
  __int64 v20; // [rsp+74h] [rbp-Ch]

  v5 = g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v18 = v5;
  CurrentThreadId = GetCurrentThreadId();
  v17 = L"s_apmRegisterAudioStateMonitor";
  v19 = 0;
  v20 = 0LL;
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
  v12 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)g_PolicyManager + 288LL))(
          g_PolicyManager,
          a1,
          a2,
          a3,
          a4,
          a5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v12;
}
