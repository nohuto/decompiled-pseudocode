/*
 * XREFs of AudioVolumeSetMasterVolumeLevel @ 0x180075E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioVolumeSetMasterVolumeLevel(_QWORD *a1, __int128 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _FILETIME v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v11; // ebx
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-51h] BYREF
  _QWORD pv[2]; // [rsp+40h] [rbp-49h] BYREF
  DWORD CurrentThreadId; // [rsp+50h] [rbp-39h]
  const wchar_t *v16; // [rsp+58h] [rbp-31h]
  struct _FILETIME v17; // [rsp+60h] [rbp-29h]
  char v18; // [rsp+68h] [rbp-21h]
  __int64 v19; // [rsp+6Ch] [rbp-1Dh]
  __int128 v20; // [rsp+78h] [rbp-11h]
  __int128 v21; // [rsp+88h] [rbp-1h] BYREF

  v20 = *a2;
  v21 = v20;
  EtwEventActivityIdControl(4LL, &v21);
  v7 = g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v17 = v7;
  CurrentThreadId = GetCurrentThreadId();
  v16 = L"AudioVolumeSetMasterVolumeLevel";
  v18 = 0;
  v19 = 0LL;
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
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)*a1 + 56LL))(*a1, v9, a4, a5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v21);
  return v11;
}
