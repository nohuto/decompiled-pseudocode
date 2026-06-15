/*
 * XREFs of sub_14004BD94 @ 0x14004BD94
 * Callers:
 *     sub_14004F788 @ 0x14004F788 (sub_14004F788.c)
 * Callees:
 *     sub_14001CE18 @ 0x14001CE18 (sub_14001CE18.c)
 *     sub_14001DFBC @ 0x14001DFBC (sub_14001DFBC.c)
 *     sub_14004BB80 @ 0x14004BB80 (sub_14004BB80.c)
 */

void __fastcall __noreturn sub_14004BD94(int a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  signed int v8; // eax
  int v9; // r9d
  __int64 v10; // [rsp+20h] [rbp-48h]
  int v11; // [rsp+20h] [rbp-48h]
  _DWORD v12[6]; // [rsp+50h] [rbp-18h] BYREF

  v8 = sub_14001CE18(a1, a2, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h", a4, v10, a6);
  if ( v8 > 0 )
    v8 = (unsigned __int16)v8 | 0x80070000;
  v12[0] = v8;
  v12[1] = sub_14001DFBC(v8);
  v12[2] = 0;
  sub_14004BB80(
    a1,
    a2,
    (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
    v9,
    v11,
    a6,
    (__int64)v12,
    0LL);
}
