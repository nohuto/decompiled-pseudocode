/*
 * XREFs of sub_14006C8A4 @ 0x14006C8A4
 * Callers:
 *     sub_14006CDD0 @ 0x14006CDD0 (sub_14006CDD0.c)
 * Callees:
 *     sub_14001CE18 @ 0x14001CE18 (sub_14001CE18.c)
 *     sub_14001DFBC @ 0x14001DFBC (sub_14001DFBC.c)
 *     sub_14004BBB8 @ 0x14004BBB8 (sub_14004BBB8.c)
 */

void __fastcall __noreturn sub_14006C8A4(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  signed int v7; // eax
  int v8; // r9d
  __int64 v9; // [rsp+20h] [rbp-48h]
  int v10; // [rsp+20h] [rbp-48h]
  _DWORD v11[6]; // [rsp+50h] [rbp-18h] BYREF

  v7 = sub_14001CE18(a1, 942, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h", a4, v9, a6);
  if ( v7 > 0 )
    v7 = (unsigned __int16)v7 | 0x80070000;
  v11[0] = v7;
  v11[1] = sub_14001DFBC(v7);
  v11[2] = 0;
  sub_14004BBB8(
    a1,
    942,
    (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
    v8,
    v10,
    a6,
    (__int64)v11);
}
