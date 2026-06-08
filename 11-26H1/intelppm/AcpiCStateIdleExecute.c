/*
 * XREFs of AcpiCStateIdleExecute @ 0x1400032B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcpiCStateIdleExecute(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(88LL * a3 + a1 + 80))(88LL * a3 + a1 + 88, a5);
}
