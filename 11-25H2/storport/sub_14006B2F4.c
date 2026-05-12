/*
 * XREFs of sub_14006B2F4 @ 0x14006B2F4
 * Callers:
 *     sub_1400728C4 @ 0x1400728C4 (sub_1400728C4.c)
 *     sub_140072AE8 @ 0x140072AE8 (sub_140072AE8.c)
 *     StorPortGetUncachedExtension @ 0x140073F80 (StorPortGetUncachedExtension.c)
 *     sub_140075FA8 @ 0x140075FA8 (sub_140075FA8.c)
 * Callees:
 *     sub_14017BE10 @ 0x14017BE10 (sub_14017BE10.c)
 */

__int64 __fastcall sub_14006B2F4(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, int a6, int a7, __int64 a8)
{
  if ( !a1 )
    return 3221225485LL;
  if ( !a4 )
  {
    LODWORD(a4) = -1;
    if ( *(_DWORD *)(a1 + 24) == 3 )
      LODWORD(a4) = -1;
  }
  return sub_14017BE10(a1, a2, a3, a4, a5, a6, a7, a8);
}
