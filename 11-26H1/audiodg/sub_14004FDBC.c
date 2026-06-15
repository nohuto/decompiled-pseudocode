/*
 * XREFs of sub_14004FDBC @ 0x14004FDBC
 * Callers:
 *     sub_14003586C @ 0x14003586C (sub_14003586C.c)
 * Callees:
 *     sub_140025F00 @ 0x140025F00 (sub_140025F00.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_14004FDBC(__int64 *a1, __int64 a2, char a3)
{
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+50h] [rbp+8h]
  char v9; // [rsp+60h] [rbp+18h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v9 = a3;
  v6[0] = a2;
  v6[1] = &v9;
  v8 = sub_1400492F4(24LL, a2);
  *(_OWORD *)v8 = 0LL;
  *(_DWORD *)(v8 + 8) = 1;
  *(_DWORD *)(v8 + 12) = 1;
  *(_QWORD *)v8 = off_1400BB7B8;
  *(_QWORD *)(v8 + 16) = a2;
  *a1 = a2;
  a1[1] = v8;
  v7 = 0;
  sub_140025F00((__int64)v6);
  return a1;
}
