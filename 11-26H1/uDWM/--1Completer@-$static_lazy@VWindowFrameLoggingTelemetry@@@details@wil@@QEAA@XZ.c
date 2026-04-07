/*
 * XREFs of ??1Completer@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ @ 0x1800BB7EC
 * Callers:
 *     ?get@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemetry@@P6AXXZ@Z @ 0x1800BB8D8 (-get@-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemet.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18002460C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOL __fastcall wil::details::static_lazy<WindowFrameLoggingTelemetry>::Completer::~Completer(__int64 a1, __int64 a2)
{
  LPINIT_ONCE v3; // rbx
  union _RTL_RUN_ONCE v4; // rdx
  union _RTL_RUN_ONCE v5; // rax

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v3 = *(LPINIT_ONCE *)a1;
    v4.Ptr = *(PVOID *)((char *)wil::details::static_lazy<WindowFrameLogging>::get(a1, a2) + 8);
    v5.Ptr = v3[1].Ptr;
    v3[2].Ptr = v4.Ptr;
    LOBYTE(v3[3].Ptr) = 0;
    HIDWORD(v3[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v5.Ptr + 1))(v3 + 1);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
