/*
 * XREFs of FreeObjectFast @ 0x1401C54CC
 * Callers:
 *     FreeObject @ 0x14014C950 (FreeObject.c)
 *     HmgFreeFast @ 0x1401C56C0 (HmgFreeFast.c)
 * Callees:
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x140010398 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall FreeObjectFast(__int64 a1, char *a2, unsigned int a3)
{
  if ( a2[14] >= 0 )
    GreDeleteFastMutex(a2);
  else
    Win32FreeToPagedLookasideListImpl(*(char **)(a1 + 8LL * a3 + 1792), a2);
}
