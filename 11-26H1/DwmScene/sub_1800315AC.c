/*
 * XREFs of sub_1800315AC @ 0x1800315AC
 * Callers:
 *     sub_18002F858 @ 0x18002F858 (sub_18002F858.c)
 * Callees:
 *     sub_1800317C8 @ 0x1800317C8 (sub_1800317C8.c)
 */

__int64 __fastcall sub_1800315AC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800317C8(v2 + 32);
  return sub_180025950(a1);
}
