/*
 * XREFs of __asan_report_load16 @ 0x1405DFB50
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405DDA50 (KasaniReport.c)
 */

void __fastcall __noreturn _asan_report_load16(ULONG_PTR a1)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  KasaniReport(a1, 0x10uLL, 0, retaddr, 0x80u);
}
