/*
 * XREFs of AudioSessionPropertyStoreCommit @ 0x1800D0C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionPropertyStoreCommit(__int64 *a1)
{
  __int64 v1; // rsi
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v3; // edi
  struct AudioSrvTelemetryProvider *v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *a1;
  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v3 = g_AudioSrvWatchDogTimerInMs;
  v4 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v4 + 1),
    v3,
    (struct _TP_TIMER *)L"AudioSessionPropertyStoreCommit",
    pftDueTime);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 72) + 400LL))(*(_QWORD *)(v1 + 72));
  v6 = v5;
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionPropertyStoreCommit", 2490, v5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v6;
}
