/*
 * XREFs of AudioVolumeStepDown @ 0x18006CC60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioVolumeStepDown(_QWORD *a1, __int128 *a2, __int64 a3, __int64 a4)
{
  struct _FILETIME v7; // rbx
  __int64 v8; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v10; // ebx
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-39h] BYREF
  _QWORD pv[2]; // [rsp+28h] [rbp-31h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-21h]
  const wchar_t *v15; // [rsp+40h] [rbp-19h]
  struct _FILETIME v16; // [rsp+48h] [rbp-11h]
  char v17; // [rsp+50h] [rbp-9h]
  __int64 v18; // [rsp+54h] [rbp-5h]
  __int128 v19; // [rsp+60h] [rbp+7h]
  __int128 v20; // [rsp+70h] [rbp+17h] BYREF

  v19 = *a2;
  v20 = v19;
  EtwEventActivityIdControl(4LL, &v20);
  v7 = g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v16 = v7;
  CurrentThreadId = GetCurrentThreadId();
  v15 = L"AudioVolumeStepDown";
  v17 = 0;
  v18 = 0LL;
  if ( (unsigned int)v8 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                             * v8
                                                                             * (__int128)0x5555555555555555LL) >> 64)
                                                        - 10000 * v8) >> 63)
                                    + ((__int64)(((unsigned __int128)(10000 * v8 * (__int128)0x5555555555555555LL) >> 64)
                                               - 10000 * v8) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v8 / 3, 0);
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a1 + 136LL))(*a1, a3, a4);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v20);
  return v10;
}
