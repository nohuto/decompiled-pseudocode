/*
 * XREFs of ??1Completer@?$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ @ 0x1803A0D84
 * Callers:
 *     ?get@?$static_lazy@VAppLaunchTelemetry@PerfTrack@@@details@wil@@QEAAPEAVAppLaunchTelemetry@PerfTrack@@P6AXXZ@Z @ 0x1803A23BC (-get@-$static_lazy@VAppLaunchTelemetry@PerfTrack@@@details@wil@@QEAAPEAVAppLaunchTelemetry@PerfT.c)
 *     ?get@?$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAAPEAVAppSwitchTelemetry@PerfTrack@@P6AXXZ@Z @ 0x1804C553C (-get@-$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAAPEAVAppSwitchTelemetry@PerfT.c)
 * Callees:
 *     ?Provider@CAppLifeCycle_UILogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1803A1F08 (-Provider@CAppLifeCycle_UILogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOL __fastcall wil::details::static_lazy<PerfTrack::AppSwitchTelemetry>::Completer::~Completer(__int64 a1)
{
  LPINIT_ONCE v2; // rbx
  union _RTL_RUN_ONCE v3; // rax

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    v2[2].Ptr = CAppLifeCycle_UILogging::Provider();
    v3.Ptr = v2[1].Ptr;
    LOBYTE(v2[3].Ptr) = 0;
    HIDWORD(v2[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v3.Ptr + 1))(v2 + 1);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
