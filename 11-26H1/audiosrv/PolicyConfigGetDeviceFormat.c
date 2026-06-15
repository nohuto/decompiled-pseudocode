/*
 * XREFs of PolicyConfigGetDeviceFormat @ 0x1800311C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     MIDL_user_allocate @ 0x180031380 (MIDL_user_allocate.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PolicyConfigGetDeviceFormat(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  struct _FILETIME v4; // rbx
  __int64 v6; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v10; // ebx
  void *v12; // rax
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+38h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+48h] [rbp-28h]
  const wchar_t *v16; // [rsp+50h] [rbp-20h]
  struct _FILETIME v17; // [rsp+58h] [rbp-18h]
  char v18; // [rsp+60h] [rbp-10h]
  __int64 v19; // [rsp+64h] [rbp-Ch]
  LPVOID Src; // [rsp+A8h] [rbp+38h] BYREF

  v4 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  Src = 0LL;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v17 = v4;
  CurrentThreadId = GetCurrentThreadId();
  v16 = L"PolicyConfigGetDeviceFormat";
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
  *a4 = 0LL;
  v10 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, LPVOID *))(*(_QWORD *)g_PolicyConfig + 32LL))(
          g_PolicyConfig,
          a2,
          a3,
          &Src);
  if ( v10 >= 0 )
  {
    v12 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a4 = v12;
    if ( v12 )
      memcpy_0(v12, Src, *((unsigned __int16 *)Src + 8) + 18LL);
    else
      v10 = -2147024882;
  }
  if ( Src )
  {
    CoTaskMemFree(Src);
    Src = 0LL;
  }
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("PolicyConfigGetDeviceFormat", 2287, v10);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v10;
}
