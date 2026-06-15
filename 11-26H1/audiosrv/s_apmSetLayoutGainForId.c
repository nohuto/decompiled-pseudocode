/*
 * XREFs of s_apmSetLayoutGainForId @ 0x18010A170
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall s_apmSetLayoutGainForId(__int64 a1, unsigned int a2)
{
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v4; // edi
  struct AudioSrvTelemetryProvider *v5; // rax
  unsigned int v6; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-58h] BYREF

  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  v5 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v5 + 1),
    v4,
    (struct _TP_TIMER *)L"s_apmSetLayoutGainForId",
    pftDueTime);
  if ( (unsigned int)IsApmLayoutGainForIdSupported() )
    v6 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 144LL))(
           g_PolicyManager,
           a2);
  else
    v6 = -2147467263;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v6;
}
