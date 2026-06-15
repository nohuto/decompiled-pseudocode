/*
 * XREFs of AudioVolumeGetChannelVolumeLevel @ 0x180020450
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioVolumeGetChannelVolumeLevel(_QWORD *a1, unsigned int a2, __int64 a3)
{
  struct _FILETIME v3; // rbx
  __int64 v5; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v9; // ebx
  _QWORD pv[2]; // [rsp+20h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-30h]
  const wchar_t *v13; // [rsp+38h] [rbp-28h]
  struct _FILETIME v14; // [rsp+40h] [rbp-20h]
  char v15; // [rsp+48h] [rbp-18h]
  __int64 v16; // [rsp+4Ch] [rbp-14h]
  struct _FILETIME pftDueTime; // [rsp+80h] [rbp+20h] BYREF

  v3 = g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v14 = v3;
  CurrentThreadId = GetCurrentThreadId();
  v13 = L"AudioVolumeGetChannelVolumeLevel";
  v15 = 0;
  v16 = 0LL;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                             * v5
                                                                             * (__int128)0x5555555555555555LL) >> 64)
                                                        - 10000 * v5) >> 63)
                                    + ((__int64)(((unsigned __int128)(10000 * v5 * (__int128)0x5555555555555555LL) >> 64)
                                               - 10000 * v5) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a1 + 104LL))(*a1, a2, a3);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v9;
}
