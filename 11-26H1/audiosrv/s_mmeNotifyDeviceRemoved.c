/*
 * XREFs of s_mmeNotifyDeviceRemoved @ 0x180106D50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x18006A430 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDeviceRemoved@@YAJPEBG@Z @ 0x1801069C8 (-MmeOnDeviceRemoved@@YAJPEBG@Z.c)
 */

__int64 __fastcall s_mmeNotifyDeviceRemoved(__int64 a1, const unsigned __int16 *a2)
{
  struct _TP_TIMER *pftDueTime; // rbx
  DWORD LastError; // esi
  unsigned int v4; // edi
  struct AudioSrvTelemetryProvider *v6; // rax
  void *v7; // rdx
  void *v8; // rcx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+90h] [rbp+18h] BYREF

  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  LastError = 0;
  v4 = g_AudioSrvWatchDogTimerInMs;
  v11 = 0;
  v6 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v6 + 1),
    v4,
    (struct _TP_TIMER *)L"s_mmeNotifyDeviceRemoved",
    pftDueTime);
  if ( (unsigned int)CheckRpcClientTokenMembershipsDisjunctive(v8, v7, &v11) )
  {
    if ( !v11 || (MmeOnDeviceRemoved(a2), !v11) )
      LastError = 5;
  }
  else
  {
    LastError = GetLastError();
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return LastError;
}
