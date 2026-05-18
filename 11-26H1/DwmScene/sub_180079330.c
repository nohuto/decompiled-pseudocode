/*
 * XREFs of sub_180079330 @ 0x180079330
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038000 @ 0x180038000 (sub_180038000.c)
 *     sub_1800763B8 @ 0x1800763B8 (sub_1800763B8.c)
 *     sub_1800908AC @ 0x1800908AC (sub_1800908AC.c)
 *     sub_180091B00 @ 0x180091B00 (sub_180091B00.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180079330(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  void *v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF
  char v9; // [rsp+78h] [rbp+20h] BYREF

  sub_180091B00(a1, a2, 0LL);
  v8 = 0LL;
  v6[0] = &v8;
  v6[1] = &v9;
  sub_1800763B8(v7, v6, v4);
  sub_1800908AC(a1, a2, v7);
  return sub_180038000((__int64)v7);
}
