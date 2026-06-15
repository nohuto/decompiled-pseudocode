/*
 * XREFs of AudioServerGetChannelCount @ 0x180027120
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetChannelCount@CVADServer@@UEAAJPEAI@Z @ 0x180027240 (-GetChannelCount@CVADServer@@UEAAJPEAI@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioServerGetChannelCount(CVADServer *this, unsigned int *a2)
{
  GUID v4; // xmm0
  struct _FILETIME pftDueTime; // rbx
  int ChannelCount; // eax
  unsigned int v7; // ebx
  _BYTE pv[56]; // [rsp+40h] [rbp-78h] BYREF
  GUID v10; // [rsp+78h] [rbp-40h]
  GUID v11; // [rsp+88h] [rbp-30h] BYREF

  if ( this )
    v4 = (GUID)*((_OWORD *)this + 16);
  else
    v4 = GUID_00000000_0000_0000_0000_000000000000;
  v10 = v4;
  v11 = v4;
  EtwEventActivityIdControl(4LL, &v11);
  pftDueTime = g_AudioHealthMonitor;
  AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  ChannelCount = CVADServer::GetChannelCount(this, a2);
  v7 = ChannelCount;
  if ( ChannelCount < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetChannelCount", 3183, ChannelCount);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v11);
  return v7;
}
