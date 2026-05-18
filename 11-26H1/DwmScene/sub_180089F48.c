/*
 * XREFs of sub_180089F48 @ 0x180089F48
 * Callers:
 *     sub_180089CE8 @ 0x180089CE8 (sub_180089CE8.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18008A028 @ 0x18008A028 (sub_18008A028.c)
 */

__int64 __fastcall sub_180089F48(__int64 a1, __int64 a2, float a3, float a4)
{
  __int64 v6; // rcx
  float v8; // [rsp+50h] [rbp+18h] BYREF
  float v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v8 = a3;
  sub_18008A028(a1, a2, &v8, &v9);
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
    sub_180010EC8(v6);
  return a1;
}
