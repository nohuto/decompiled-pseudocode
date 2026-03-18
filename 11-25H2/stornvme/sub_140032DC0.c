/*
 * XREFs of sub_140032DC0 @ 0x140032DC0
 * Callers:
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 * Callees:
 *     sub_140032E40 @ 0x140032E40 (sub_140032E40.c)
 */

__int64 __fastcall sub_140032DC0(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int64 result; // rax

  if ( (byte_140042040 & 1) == 0 )
    result = sub_140032E40();
  *a1 = v3;
  a1[1] = v3;
  a1[2] = v3;
  a1[3] = v3;
  memset(
    (void *)((unsigned __int64)(a1 + 4) & 0xFFFFFFFFFFFFFFC0uLL),
    v3,
    (unsigned __int64)a1 + a3 - ((unsigned __int64)(a1 + 4) & 0xFFFFFFFFFFFFFFC0uLL));
  return result;
}
