/*
 * XREFs of sub_140090808 @ 0x140090808
 * Callers:
 *     sub_140090850 @ 0x140090850 (sub_140090850.c)
 *     sub_1400908A0 @ 0x1400908A0 (sub_1400908A0.c)
 *     sub_1400908F0 @ 0x1400908F0 (sub_1400908F0.c)
 * Callees:
 *     sub_140007588 @ 0x140007588 (sub_140007588.c)
 *     sub_140016F18 @ 0x140016F18 (sub_140016F18.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 */

__int64 __fastcall sub_140090808(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx

  sub_140016F18((void **)(a1 + 104));
  sub_140056130((__int64 *)(a1 + 96));
  v5 = *(_QWORD *)(a1 + 80);
  if ( v5 )
    sub_140007588(v5);
  return sub_140089834((_QWORD *)a1, v2, v3, v4);
}
