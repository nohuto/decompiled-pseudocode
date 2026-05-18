/*
 * XREFs of sub_180050BD8 @ 0x180050BD8
 * Callers:
 *     sub_1800509FC @ 0x1800509FC (sub_1800509FC.c)
 *     sub_1800D20B4 @ 0x1800D20B4 (sub_1800D20B4.c)
 *     sub_1800D44E0 @ 0x1800D44E0 (sub_1800D44E0.c)
 * Callees:
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 */

__int64 __fastcall sub_180050BD8(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    sub_180013494(v3 + 40, a2);
  return sub_18001D5A4(a1);
}
