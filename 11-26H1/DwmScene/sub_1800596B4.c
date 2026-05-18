/*
 * XREFs of sub_1800596B4 @ 0x1800596B4
 * Callers:
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 *     sub_18005AE70 @ 0x18005AE70 (sub_18005AE70.c)
 *     sub_1800675A0 @ 0x1800675A0 (sub_1800675A0.c)
 *     sub_18008B770 @ 0x18008B770 (sub_18008B770.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18003BE64 @ 0x18003BE64 (sub_18003BE64.c)
 *     sub_18005A910 @ 0x18005A910 (sub_18005A910.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800596B4(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  sub_180012A94(a1 + 56, &v4);
  result = sub_18003BE64(v4);
  v3 = result;
  if ( v5 )
    result = sub_180010EC8(v5);
  if ( v3 != *(_QWORD *)(a1 + 96) )
  {
    result = sub_18005A910(a1, 1LL);
    *(_QWORD *)(a1 + 96) = v3;
  }
  return result;
}
