/*
 * XREFs of sub_1400859FC @ 0x1400859FC
 * Callers:
 *     sub_140135DCC @ 0x140135DCC (sub_140135DCC.c)
 *     sub_1401369E0 @ 0x1401369E0 (sub_1401369E0.c)
 *     sub_140136A88 @ 0x140136A88 (sub_140136A88.c)
 *     sub_140136B1C @ 0x140136B1C (sub_140136B1C.c)
 *     sub_140136BF4 @ 0x140136BF4 (sub_140136BF4.c)
 *     sub_1401374D4 @ 0x1401374D4 (sub_1401374D4.c)
 *     sub_140138270 @ 0x140138270 (sub_140138270.c)
 *     sub_140138454 @ 0x140138454 (sub_140138454.c)
 *     sub_1401386B4 @ 0x1401386B4 (sub_1401386B4.c)
 *     sub_1401388C0 @ 0x1401388C0 (sub_1401388C0.c)
 *     sub_140138960 @ 0x140138960 (sub_140138960.c)
 *     sub_140138A04 @ 0x140138A04 (sub_140138A04.c)
 *     sub_140138EF0 @ 0x140138EF0 (sub_140138EF0.c)
 *     sub_1401396CC @ 0x1401396CC (sub_1401396CC.c)
 *     sub_140139CC0 @ 0x140139CC0 (sub_140139CC0.c)
 *     sub_14013A37C @ 0x14013A37C (sub_14013A37C.c)
 *     sub_14013A45C @ 0x14013A45C (sub_14013A45C.c)
 *     sub_14013A658 @ 0x14013A658 (sub_14013A658.c)
 *     sub_14013A76C @ 0x14013A76C (sub_14013A76C.c)
 *     sub_14013A99C @ 0x14013A99C (sub_14013A99C.c)
 *     sub_14013AAA4 @ 0x14013AAA4 (sub_14013AAA4.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140084D8C @ 0x140084D8C (sub_140084D8C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400859FC(int *a1, const char *a2, char a3, char a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  const char *v7; // rdi
  int v11; // r11d
  int *v12; // rbx
  const wchar_t *v13; // rsi
  char v14; // r11
  const wchar_t *v15; // rcx
  const char *v16; // r8
  const char *v17; // rdx
  const char *v18; // rdi
  int v20; // [rsp+A0h] [rbp-68h]
  __int128 v21; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v22; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v23; // [rsp+C8h] [rbp-40h] BYREF

  v6 = *a1;
  v7 = 0LL;
  v22 = 0LL;
  v20 = -1;
  v23 = 0LL;
  v21 = 0LL;
  if ( v6 == 1431193940 )
  {
    v11 = a1[26];
    v7 = (const char *)a1;
    v12 = (int *)*((_QWORD *)a1 + 3);
    v23 = *(_OWORD *)(a1 + 526);
    v20 = v11;
  }
  else
  {
    v12 = 0LL;
    if ( v6 == 1094997074 )
      v12 = a1;
  }
  v22 = *(_OWORD *)(v12 + 1266);
  v13 = (const wchar_t *)*((_QWORD *)v12 + 635);
  sub_1400403EC(*((_QWORD *)v12 + 2), (__int64)&v21);
  if ( (byte_1401694F3 & 0x20) != 0 )
  {
    v15 = (const wchar_t *)&unk_140149394;
    if ( v13 )
      v15 = v13;
    if ( v7 )
    {
      v16 = v7 + 242;
      v17 = v7 + 177;
      v18 = v7 + 168;
    }
    else
    {
      v18 = (const char *)&dword_140149108;
      v16 = (const char *)&dword_140149108;
      v17 = (const char *)&dword_140149108;
    }
    sub_140084D8C(
      (__int64)v15,
      &stru_140149E20,
      (__int64)v16,
      v12[14],
      v14,
      SBYTE1(v20),
      SBYTE2(v20),
      (__int64)&v23,
      (__int64)&v22,
      *((const wchar_t **)&v21 + 1),
      v18,
      v17,
      v16,
      v15,
      a2,
      a3,
      a4,
      a5,
      a6);
  }
  return 0LL;
}
