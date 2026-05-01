/*
 * XREFs of ??1Completer@?$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAA@XZ @ 0x1804723B4
 * Callers:
 *     ?get@?$static_lazy@VKeyboardButtonTelemetry@@@details@wil@@QEAAPEAVKeyboardButtonTelemetry@@P6AXXZ@Z @ 0x180472674 (-get@-$static_lazy@VKeyboardButtonTelemetry@@@details@wil@@QEAAPEAVKeyboardButtonTelemetry@@P6AX.c)
 *     ?get@?$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAAPEAVTaskbarPinningTelemetry@@P6AXXZ@Z @ 0x180673E5C (-get@-$static_lazy@VTaskbarPinningTelemetry@@@details@wil@@QEAAPEAVTaskbarPinningTelemetry@@P6AX.c)
 * Callees:
 *     ?Provider@TaskbarLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18016BA58 (-Provider@TaskbarLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOL __fastcall wil::details::static_lazy<TaskbarPinningTelemetry>::Completer::~Completer(__int64 a1)
{
  LPINIT_ONCE v2; // rbx
  union _RTL_RUN_ONCE v3; // rax

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    v2[2].Ptr = TaskbarLogging::Provider(a1);
    v3.Ptr = v2[1].Ptr;
    LOBYTE(v2[3].Ptr) = 0;
    HIDWORD(v2[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v3.Ptr + 1))(v2 + 1);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
