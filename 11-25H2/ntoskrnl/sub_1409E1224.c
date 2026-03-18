/*
 * XREFs of sub_1409E1224 @ 0x1409E1224
 * Callers:
 *     sub_1409E0B70 @ 0x1409E0B70 (sub_1409E0B70.c)
 *     sub_1409E0D78 @ 0x1409E0D78 (sub_1409E0D78.c)
 *     sub_1409E0E58 @ 0x1409E0E58 (sub_1409E0E58.c)
 *     sub_1409E0F38 @ 0x1409E0F38 (sub_1409E0F38.c)
 *     sub_1409E10A8 @ 0x1409E10A8 (sub_1409E10A8.c)
 *     sub_1409E1494 @ 0x1409E1494 (sub_1409E1494.c)
 *     sub_140A3DFCC @ 0x140A3DFCC (sub_140A3DFCC.c)
 * Callees:
 *     sub_140A8FFC8 @ 0x140A8FFC8 (sub_140A8FFC8.c)
 */

signed __int64 __fastcall sub_1409E1224(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1);
    if ( !v1 )
      sub_140A8FFC8(a1);
  }
  return v1;
}
