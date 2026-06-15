/*
 * XREFs of AudioSessionSetGroupingParam @ 0x1800D1090
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionSetGroupingParam(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v7; // edi
  struct AudioSrvTelemetryProvider *v8; // rax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *a1;
  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v8 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v8 + 1),
    v7,
    (struct _TP_TIMER *)L"AudioSessionSetGroupingParam",
    pftDueTime);
  LODWORD(pftDueTime) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 224LL))(v3, a2, a3);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)pftDueTime;
}
