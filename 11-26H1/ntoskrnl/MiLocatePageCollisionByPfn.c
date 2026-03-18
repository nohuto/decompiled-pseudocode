/*
 * XREFs of MiLocatePageCollisionByPfn @ 0x14028B258
 * Callers:
 *     MiReplenishPageSlist @ 0x14028A710 (MiReplenishPageSlist.c)
 *     MiPageFreeToZero @ 0x14028C220 (MiPageFreeToZero.c)
 *     MiStopPageAccessor @ 0x14048E008 (MiStopPageAccessor.c)
 *     MiStopHugePageAccessor @ 0x14048E1B4 (MiStopHugePageAccessor.c)
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
