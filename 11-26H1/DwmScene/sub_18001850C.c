/*
 * XREFs of sub_18001850C @ 0x18001850C
 * Callers:
 *     sub_1800166E8 @ 0x1800166E8 (sub_1800166E8.c)
 *     sub_1800167D4 @ 0x1800167D4 (sub_1800167D4.c)
 *     sub_1800168F8 @ 0x1800168F8 (sub_1800168F8.c)
 *     sub_180018538 @ 0x180018538 (sub_180018538.c)
 *     sub_180025C5C @ 0x180025C5C (sub_180025C5C.c)
 *     sub_1800319D0 @ 0x1800319D0 (sub_1800319D0.c)
 *     sub_1800D878F @ 0x1800D878F (sub_1800D878F.c)
 *     sub_1800D9026 @ 0x1800D9026 (sub_1800D9026.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_18001850C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
    sub_180010EC8(v2);
  return sub_18001BD20(a1 + 48);
}
