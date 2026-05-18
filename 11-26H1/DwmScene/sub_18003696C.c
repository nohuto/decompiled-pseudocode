/*
 * XREFs of sub_18003696C @ 0x18003696C
 * Callers:
 *     sub_180016344 @ 0x180016344 (sub_180016344.c)
 * Callees:
 *     sub_18002F1D0 @ 0x18002F1D0 (sub_18002F1D0.c)
 *     sub_180031F14 @ 0x180031F14 (sub_180031F14.c)
 *     sub_180031FB4 @ 0x180031FB4 (sub_180031FB4.c)
 */

__int64 __fastcall sub_18003696C(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  DWORD2(v3) = 0;
  *(_QWORD *)&v3 = sub_1800364D0;
  v5 = a1;
  v4 = v3;
  sub_18002F1D0((__int64)&v3, &v4, &v5);
  sub_180031FB4(a1 + 1184, &v3);
  return sub_180031F14((__int64)&v3);
}
