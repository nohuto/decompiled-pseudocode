/*
 * XREFs of AudioServerRequestSpatialDynamicObjects @ 0x1801165D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerRequestSpatialDynamicObjects(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v6; // edi
  struct AudioSrvTelemetryProvider *v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v9 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v9 + 1),
    v6,
    (struct _TP_TIMER *)L"AudioServerRequestSpatialDynamicObjects",
    pftDueTime);
  v10 = (*(__int64 (__fastcall **)(struct ISpatialAudioResourceManager *, __int64, _QWORD, _QWORD))(*(_QWORD *)g_SpatialAudioResourceManager
                                                                                                  + 48LL))(
          g_SpatialAudioResourceManager,
          a2,
          a3,
          a4);
  v11 = v10;
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerRequestSpatialDynamicObjects", 5239, v10);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v11;
}
