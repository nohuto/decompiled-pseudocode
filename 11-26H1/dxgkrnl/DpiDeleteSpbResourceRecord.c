/*
 * XREFs of DpiDeleteSpbResourceRecord @ 0x1402545F0
 * Callers:
 *     DpiCheckSpbResourceLeakage @ 0x140093730 (DpiCheckSpbResourceLeakage.c)
 *     DpCloseSpbResource @ 0x140254240 (DpCloseSpbResource.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DpiDeleteSpbResourceRecord(__int64 a1, void ***a2)
{
  void **v2; // rcx
  void **v4; // rax
  void **v5; // rcx

  v2 = *a2;
  if ( (*a2)[1] != a2 || (v4 = a2[1], *v4 != a2) )
    __fastfail(3u);
  *v4 = v2;
  v2[1] = v4;
  v5 = a2[7];
  a2[4] = 0LL;
  ZwClose(v5);
  ZwClose(a2[5]);
  memset(a2, 0, 0x48uLL);
  ExFreePoolWithTag(a2, 0);
  return 0LL;
}
