/*
 * XREFs of sub_14013A37C @ 0x14013A37C
 * Callers:
 *     sub_14013477C @ 0x14013477C (sub_14013477C.c)
 *     sub_1401348FC @ 0x1401348FC (sub_1401348FC.c)
 *     sub_140134B78 @ 0x140134B78 (sub_140134B78.c)
 *     sub_140134D18 @ 0x140134D18 (sub_140134D18.c)
 *     sub_140135334 @ 0x140135334 (sub_140135334.c)
 *     sub_1401354B4 @ 0x1401354B4 (sub_1401354B4.c)
 *     sub_1401355EC @ 0x1401355EC (sub_1401355EC.c)
 *     sub_1401357E8 @ 0x1401357E8 (sub_1401357E8.c)
 *     sub_1401359CC @ 0x1401359CC (sub_1401359CC.c)
 *     sub_140135B20 @ 0x140135B20 (sub_140135B20.c)
 *     sub_140135C8C @ 0x140135C8C (sub_140135C8C.c)
 * Callees:
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 */

__int64 __fastcall sub_14013A37C(int **a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool v4; // cc
  __int64 result; // rax
  int *v8; // rcx
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF
  char v10; // [rsp+88h] [rbp+20h] BYREF

  v4 = *a4 <= 0x20u;
  v10 = 0;
  if ( !v4 )
    return 3221225485LL;
  v8 = *a1;
  v9[0] = a3;
  v9[1] = a4;
  sub_1400859FC(v8, "AuthenticateSession", 1, 28, a3, 0LL);
  result = sub_140137E38(
             (__int64)a1,
             a2,
             1LL,
             0x60000001CLL,
             (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_1401398D0,
             (__int64)v9,
             0LL,
             0LL,
             (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_140139B80,
             (__int64)&v10);
  if ( (int)result >= 0 )
    return v10 == 0 ? 0xC0000022 : 0;
  return result;
}
