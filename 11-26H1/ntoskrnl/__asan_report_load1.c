/*
 * XREFs of __asan_report_load1 @ 0x1405E2490
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405E03C0 (KasaniReport.c)
 */

void __fastcall __noreturn _asan_report_load1(ULONG_PTR a1)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  KasaniReport(a1, 1uLL, 0, retaddr, 0x80u);
}
