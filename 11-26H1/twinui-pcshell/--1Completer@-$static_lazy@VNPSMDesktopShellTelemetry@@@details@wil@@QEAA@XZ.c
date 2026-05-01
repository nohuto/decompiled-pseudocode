/*
 * XREFs of ??1Completer@?$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAA@XZ @ 0x1802C15BC
 * Callers:
 *     ?get@?$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAAPEAVNPSMDesktopShellTelemetry@@P6AXXZ@Z @ 0x180138000 (-get@-$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAAPEAVNPSMDesktopShellTelemetry@@.c)
 * Callees:
 *     ?get@?$static_lazy@VNPSMDesktopShellLogging@@@details@wil@@QEAAPEAVNPSMDesktopShellLogging@@P6AXXZ@Z @ 0x180138238 (-get@-$static_lazy@VNPSMDesktopShellLogging@@@details@wil@@QEAAPEAVNPSMDesktopShellLogging@@P6AX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOL __fastcall wil::details::static_lazy<NPSMDesktopShellTelemetry>::Completer::~Completer(__int64 a1)
{
  LPINIT_ONCE v2; // rbx
  __int64 v3; // rdx
  union _RTL_RUN_ONCE v4; // rax

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    v3 = wil::details::static_lazy<NPSMDesktopShellLogging>::get(
           a1,
           (void (__cdecl *)())_lambda_a200443fcc2186113617defd521f394c_::_lambda_invoker_cdecl_)[1];
    v4.Ptr = v2[1].Ptr;
    v2[2].Ptr = (PVOID)v3;
    LOBYTE(v2[3].Ptr) = 0;
    HIDWORD(v2[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v4.Ptr + 1))(v2 + 1);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
