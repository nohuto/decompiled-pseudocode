/*
 * XREFs of __asan_report_store2 @ 0x1405DFC90
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405DDA50 (KasaniReport.c)
 */

void __fastcall __noreturn _asan_report_store2(ULONG_PTR a1)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  KasaniReport(a1, 2uLL, 1u, retaddr, 0x80u);
}
