/*
 * XREFs of NtGdiClearBitmapAttributes @ 0x1401E26F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiClearBitmapAttributes(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return GreMakeBitmapNonStock(a1);
  else
    return 0LL;
}
