/*
 * XREFs of sub_14004539C @ 0x14004539C
 * Callers:
 *     sub_1400B09BC @ 0x1400B09BC (sub_1400B09BC.c)
 *     sub_1400B09E0 @ 0x1400B09E0 (sub_1400B09E0.c)
 *     sub_1400B0A04 @ 0x1400B0A04 (sub_1400B0A04.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

__int64 __fastcall sub_14004539C(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = sub_1400453E4(v2, (a1[2] - v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
