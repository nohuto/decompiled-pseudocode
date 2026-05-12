/*
 * XREFs of sub_1400F4C14 @ 0x1400F4C14
 * Callers:
 *     sub_1400F33E4 @ 0x1400F33E4 (sub_1400F33E4.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400F3A3C @ 0x1400F3A3C (sub_1400F3A3C.c)
 *     sub_1400F3E44 @ 0x1400F3E44 (sub_1400F3E44.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400F4C14(__int64 a1)
{
  _BYTE *v2; // rdi
  __int64 v3; // rcx
  unsigned __int16 v4; // dx
  UCHAR *v5; // r8
  int v6; // ebx
  UCHAR Dst[256]; // [rsp+A0h] [rbp-218h] BYREF
  UCHAR v9[256]; // [rsp+1A0h] [rbp-118h] BYREF

  memset_0(v9, 0, sizeof(v9));
  memset_0(Dst, 0, sizeof(Dst));
  v2 = *(_BYTE **)(a1 + 96);
  v3 = a1;
  v4 = (unsigned __int8)v2[1582];
  if ( v2[4] )
  {
    v6 = sub_1400F3E44(a1, v4, v9);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v4 = (unsigned __int8)v2[1582];
    v5 = v9;
    v3 = a1;
  }
  else
  {
    v5 = v2 + 1320;
  }
  v6 = sub_1400F3A3C(v3, v4, v5, Dst);
  if ( v6 >= 0 && RtlCompareMemory(Dst, v2 + 1592, (unsigned __int8)v2[1582]) != (unsigned __int8)v2[1582] )
  {
    sub_1400A870C(
      *(_QWORD *)(a1 + 88),
      1,
      2,
      (__int64)L"Controller response did not match",
      (void *)&dword_140149108,
      0,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v6;
}
