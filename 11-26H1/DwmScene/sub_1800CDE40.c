/*
 * XREFs of sub_1800CDE40 @ 0x1800CDE40
 * Callers:
 *     sub_1800CE4B0 @ 0x1800CE4B0 (sub_1800CE4B0.c)
 *     sub_1800E4F69 @ 0x1800E4F69 (sub_1800E4F69.c)
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_1800CDE40(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = a1[5];
  if ( v2 )
    sub_180010EC8(v2);
  v3 = a1[3];
  if ( v3 )
    sub_180010EC8(v3);
  sub_18000F938(a1 + 1);
  return sub_18000F938(a1);
}
