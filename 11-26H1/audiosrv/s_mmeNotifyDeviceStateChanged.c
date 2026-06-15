/*
 * XREFs of s_mmeNotifyDeviceStateChanged @ 0x18006A170
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x18006A430 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDeviceStateChanged@@YAJPEBGK@Z @ 0x18006A4C8 (-MmeOnDeviceStateChanged@@YAJPEBGK@Z.c)
 *     ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x18006A558 (-OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z.c)
 */

__int64 __fastcall s_mmeNotifyDeviceStateChanged(__int64 a1, const unsigned __int16 *a2, unsigned int a3)
{
  struct _FILETIME v3; // rbx
  DWORD LastError; // edi
  __int64 v5; // r15
  void *v8; // rdx
  void *v9; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  DynamicAudioEndpointManager *v12; // rcx
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+28h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-28h]
  const wchar_t *v16; // [rsp+40h] [rbp-20h]
  struct _FILETIME v17; // [rsp+48h] [rbp-18h]
  char v18; // [rsp+50h] [rbp-10h]
  __int64 v19; // [rsp+54h] [rbp-Ch]
  int v20; // [rsp+98h] [rbp+38h] BYREF

  v3 = g_AudioHealthMonitor;
  LastError = 0;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v20 = 0;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v17 = v3;
  CurrentThreadId = GetCurrentThreadId();
  v16 = L"s_mmeNotifyDeviceStateChanged";
  v18 = 0;
  v19 = 0LL;
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
  if ( CheckRpcClientTokenMembershipsDisjunctive(v9, v8, &v20) )
  {
    if ( !v20 || (MmeOnDeviceStateChanged(a2, a3), DynamicAudioEndpointManager::OnDeviceStateChanged(v12, a2, a3), !v20) )
      LastError = 5;
  }
  else
  {
    LastError = GetLastError();
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return LastError;
}
