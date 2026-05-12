/*
 * XREFs of sub_140085F28 @ 0x140085F28
 * Callers:
 *     sub_14013477C @ 0x14013477C (sub_14013477C.c)
 *     sub_1401348FC @ 0x1401348FC (sub_1401348FC.c)
 *     sub_140134D18 @ 0x140134D18 (sub_140134D18.c)
 *     sub_140134EF8 @ 0x140134EF8 (sub_140134EF8.c)
 *     sub_140135334 @ 0x140135334 (sub_140135334.c)
 *     sub_1401355EC @ 0x1401355EC (sub_1401355EC.c)
 *     sub_1401357E8 @ 0x1401357E8 (sub_1401357E8.c)
 *     sub_140135B20 @ 0x140135B20 (sub_140135B20.c)
 *     sub_140135C8C @ 0x140135C8C (sub_140135C8C.c)
 *     sub_140138764 @ 0x140138764 (sub_140138764.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140084D8C @ 0x140084D8C (sub_140084D8C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140085F28(int *a1, const char *a2, char a3, char a4, __int64 a5)
{
  int v5; // eax
  const char *v6; // rdi
  int v10; // r11d
  int *v11; // rbx
  const wchar_t *v12; // rsi
  char v13; // r11
  const wchar_t *v14; // rcx
  const char *v15; // r8
  const char *v16; // rdx
  const char *v17; // rdi
  int v19; // [rsp+A0h] [rbp-68h]
  __int128 v20; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v21; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v22; // [rsp+C8h] [rbp-40h] BYREF

  v5 = *a1;
  v6 = 0LL;
  v21 = 0LL;
  v19 = -1;
  v22 = 0LL;
  v20 = 0LL;
  if ( v5 == 1431193940 )
  {
    v10 = a1[26];
    v6 = (const char *)a1;
    v11 = (int *)*((_QWORD *)a1 + 3);
    v22 = *(_OWORD *)(a1 + 526);
    v19 = v10;
  }
  else
  {
    v11 = 0LL;
    if ( v5 == 1094997074 )
      v11 = a1;
  }
  v21 = *(_OWORD *)(v11 + 1266);
  v12 = (const wchar_t *)*((_QWORD *)v11 + 635);
  sub_1400403EC(*((_QWORD *)v11 + 2), (__int64)&v20);
  if ( (byte_1401694F8 & 2) != 0 )
  {
    v14 = (const wchar_t *)&unk_140149394;
    if ( v12 )
      v14 = v12;
    if ( v6 )
    {
      v15 = v6 + 242;
      v16 = v6 + 177;
      v17 = v6 + 168;
    }
    else
    {
      v17 = (const char *)&dword_140149108;
      v15 = (const char *)&dword_140149108;
      v16 = (const char *)&dword_140149108;
    }
    sub_140084D8C(
      (__int64)v14,
      &stru_14014A298,
      (__int64)v15,
      v11[14],
      v13,
      SBYTE1(v19),
      SBYTE2(v19),
      (__int64)&v22,
      (__int64)&v21,
      *((const wchar_t **)&v20 + 1),
      v17,
      v16,
      v15,
      v14,
      a2,
      a3,
      a4,
      a5,
      0);
  }
  return 0LL;
}
