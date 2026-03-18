/*
 * XREFs of __asan_report_load8 @ 0x1405A8AD0
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A6720 (KasaniReport.c)
 */

struct _KTHREAD *__fastcall _asan_report_load8(ULONG_PTR a1)
{
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  return KasaniReport(a1, 8uLL, 0, retaddr, 0x80u);
}
