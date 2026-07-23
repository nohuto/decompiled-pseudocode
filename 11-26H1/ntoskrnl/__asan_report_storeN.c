/*
 * XREFs of __asan_report_storeN @ 0x1405E2690
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 */

void __fastcall __noreturn _asan_report_storeN(ULONG_PTR a1, ULONG_PTR a2)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  KasaniReport(a1, a2, 1u, retaddr, 0x80u);
}
