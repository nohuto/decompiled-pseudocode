/*
 * XREFs of s_mmeNotifyDefaultDeviceChanged @ 0x18006A2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x18006A430 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x18007FD34 (-MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_i.c)
 */

__int64 __fastcall s_mmeNotifyDefaultDeviceChanged(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  struct _FILETIME v4; // rbx
  DWORD LastError; // edi
  __int64 v6; // rsi
  void *v10; // rdx
  void *v11; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v14; // [rsp+20h] [rbp-50h] BYREF
  struct _FILETIME pftDueTime; // [rsp+28h] [rbp-48h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-30h]
  const wchar_t *v18; // [rsp+48h] [rbp-28h]
  struct _FILETIME v19; // [rsp+50h] [rbp-20h]
  char v20; // [rsp+58h] [rbp-18h]
  __int64 v21; // [rsp+5Ch] [rbp-14h]

  v4 = g_AudioHealthMonitor;
  LastError = 0;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v14 = 0;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v19 = v4;
  CurrentThreadId = GetCurrentThreadId();
  v18 = L"s_mmeNotifyDefaultDeviceChanged";
  v20 = 0;
  v21 = 0LL;
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
  if ( CheckRpcClientTokenMembershipsDisjunctive(v11, v10, &v14) )
  {
    if ( !v14 || (MmeOnDefaultDeviceChanged(a2, a3, a4), !v14) )
      LastError = 5;
  }
  else
  {
    LastError = GetLastError();
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return LastError;
}
