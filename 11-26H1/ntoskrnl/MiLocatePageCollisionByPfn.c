/*
 * XREFs of MiLocatePageCollisionByPfn @ 0x14028A7B8
 * Callers:
 *     MiReplenishPageSlist @ 0x140289C70 (MiReplenishPageSlist.c)
 *     MiPageFreeToZero @ 0x14028B780 (MiPageFreeToZero.c)
 *     MiStopPageAccessor @ 0x140487B48 (MiStopPageAccessor.c)
 *     MiStopHugePageAccessor @ 0x140487CF4 (MiStopHugePageAccessor.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall MiLocatePageCollisionByPfn(__int64 a1, __int64 a2)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v3; // rcx

  result = (unsigned __int64 *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 24);
  if ( ((v3 >> 12) & 0x3FFFFFFFFFLL) != a2 || (v3 & 0x10) == 0 )
    return 0LL;
  *result = v3 & 0xFFFFFFFFFFFFFFEFuLL;
  return result;
}
