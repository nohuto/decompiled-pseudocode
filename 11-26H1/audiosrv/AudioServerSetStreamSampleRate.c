/*
 * XREFs of AudioServerSetStreamSampleRate @ 0x180116EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180025ED4 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x180114090 (-SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z.c)
 */

__int64 __fastcall AudioServerSetStreamSampleRate(CVADServer *this, __int64 a2, float a3)
{
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v6; // edi
  struct AudioSrvTelemetryProvider *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v12[16]; // [rsp+68h] [rbp-50h] BYREF
  _BYTE v13[16]; // [rsp+78h] [rbp-40h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v12, this);
  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v7 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v7 + 1),
    v6,
    (struct _TP_TIMER *)L"AudioServerSetStreamSampleRate",
    pftDueTime);
  v8 = CVADServer::SetStreamSampleRate(this, a2, a3);
  v9 = v8;
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerSetStreamSampleRate", 3524, v8);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, v13);
  return v9;
}
