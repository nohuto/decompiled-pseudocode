/*
 * XREFs of MUIBugCheck @ 0x1406D78C4
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x140AE2DD0 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
