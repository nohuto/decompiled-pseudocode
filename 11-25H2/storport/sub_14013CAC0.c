/*
 * XREFs of sub_14013CAC0 @ 0x14013CAC0
 * Callers:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 * Callees:
 *     sub_14013CB40 @ 0x14013CB40 (sub_14013CB40.c)
 */

__int64 __fastcall sub_14013CAC0(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int64 result; // rax

  if ( (byte_1401683C0 & 1) == 0 )
    result = sub_14013CB40();
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
