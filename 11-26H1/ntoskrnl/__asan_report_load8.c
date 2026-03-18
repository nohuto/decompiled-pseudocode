/*
 * XREFs of __asan_report_load8 @ 0x1405DFBE0
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405DDA50 (KasaniReport.c)
 */

void __fastcall __noreturn _asan_report_load8(ULONG_PTR a1)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  KasaniReport(a1, 8uLL, 0, retaddr, 0x80u);
}
