/*
 * XREFs of MUIBugCheck @ 0x1406D3894
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x140AE5010 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
