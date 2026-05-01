/*
 * XREFs of ??1Completer@?$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAA@XZ @ 0x1803E2010
 * Callers:
 *     ?get@?$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAAPEAVPenWorkspaceBrokerTelemetry@@P6AXXZ@Z @ 0x1803E4794 (-get@-$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAAPEAVPenWorkspaceBrokerTelemet.c)
 * Callees:
 *     ?Provider@PenWorkspaceBrokerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1803E380C (-Provider@PenWorkspaceBrokerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

BOOL __fastcall wil::details::static_lazy<PenWorkspaceBrokerTelemetry>::Completer::~Completer(__int64 a1)
{
  LPINIT_ONCE v2; // rbx
  union _RTL_RUN_ONCE v3; // rax

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    v2[2].Ptr = PenWorkspaceBrokerLogging::Provider();
    v3.Ptr = v2[1].Ptr;
    LOBYTE(v2[3].Ptr) = 0;
    HIDWORD(v2[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v3.Ptr + 1))(v2 + 1);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
