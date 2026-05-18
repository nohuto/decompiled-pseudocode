/*
 * XREFs of sub_180076C20 @ 0x180076C20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180038000 @ 0x180038000 (sub_180038000.c)
 *     sub_18004C0E0 @ 0x18004C0E0 (sub_18004C0E0.c)
 *     sub_18004E254 @ 0x18004E254 (sub_18004E254.c)
 *     sub_18005BBE8 @ 0x18005BBE8 (sub_18005BBE8.c)
 *     sub_1800608B8 @ 0x1800608B8 (sub_1800608B8.c)
 *     sub_1800763B8 @ 0x1800763B8 (sub_1800763B8.c)
 *     sub_18007661C @ 0x18007661C (sub_18007661C.c)
 *     sub_180076D44 @ 0x180076D44 (sub_180076D44.c)
 *     sub_1800908AC @ 0x1800908AC (sub_1800908AC.c)
 *     sub_180091B00 @ 0x180091B00 (sub_180091B00.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180076C20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __m128i v7; // [rsp+20h] [rbp-19h] BYREF
  void *v8[2]; // [rsp+30h] [rbp-9h] BYREF
  void *v9[2]; // [rsp+40h] [rbp+7h] BYREF
  _QWORD v10[3]; // [rsp+50h] [rbp+17h] BYREF
  _QWORD v11[4]; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v12; // [rsp+88h] [rbp+4Fh] BYREF

  LOBYTE(a3) = 1;
  sub_180091B00(a1, a2, a3);
  sub_18007661C(a1, a2);
  sub_180076D44(a1, a2);
  sub_1800181BC(v11, (__int64)&unk_1801CCF38);
  v7.m128i_i64[0] = (__int64)v11;
  v7.m128i_i64[1] = (__int64)&v12;
  sub_1800608B8((__int64 *)v8, &v7);
  sub_18000BFA4((__int64)v11, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v7.m128i_i64, v8);
  v7 = (__m128i)(unsigned __int64)sub_18004E254(a2, (void **)&v7);
  v9[0] = &v7;
  v9[1] = v8;
  sub_1800763B8(v10, v9, v5);
  sub_1800908AC(a1, a2, v10);
  sub_180038000((__int64)v10);
  return sub_18004C0E0(v8, (__int64)v8);
}
