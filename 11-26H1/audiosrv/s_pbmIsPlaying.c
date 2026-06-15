/*
 * XREFs of s_pbmIsPlaying @ 0x18010A7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 */

__int64 __fastcall s_pbmIsPlaying(__int64 a1, __int64 a2)
{
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v4; // edi
  struct AudioSrvTelemetryProvider *v6; // rax
  unsigned int IsPlaying; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  v6 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v6 + 1),
    v4,
    (struct _TP_TIMER *)L"s_pbmIsPlaying",
    pftDueTime);
  if ( (unsigned int)IsPbmPlayingSupported() )
    IsPlaying = PbmIsPlaying(a1, a2);
  else
    IsPlaying = 0;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return IsPlaying;
}
