/*
 * XREFs of s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x1800261A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 */

__int64 __fastcall s_pbmSwitchSoftNonInteractiveAppsToHardNonInteractive(__int64 a1)
{
  struct _FILETIME pftDueTime; // rbx
  unsigned int v3; // ebx
  _BYTE pv[64]; // [rsp+30h] [rbp-48h] BYREF

  pftDueTime = g_AudioHealthMonitor;
  AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  if ( (unsigned int)IsPbmSwitchSoftNonToHardNonInteractiveSupported() )
    v3 = PbmSwitchSoftNonInteractiveAppsToHardNonInteractive(a1);
  else
    v3 = 0;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v3;
}
