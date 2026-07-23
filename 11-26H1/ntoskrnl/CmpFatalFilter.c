/*
 * XREFs of CmpFatalFilter @ 0x14085F69C
 * Callers:
 *     CmpQueryKeyName @ 0x140A80FE0 (CmpQueryKeyName.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpFatalFilter(int **a1)
{
  KeBugCheckEx(0x51u, 0x21uLL, **a1, (ULONG_PTR)a1[1], 0LL);
}
