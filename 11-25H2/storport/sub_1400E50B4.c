/*
 * XREFs of sub_1400E50B4 @ 0x1400E50B4
 * Callers:
 *     sub_1400E2610 @ 0x1400E2610 (sub_1400E2610.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400E3E6C @ 0x1400E3E6C (sub_1400E3E6C.c)
 */

__int64 __fastcall sub_1400E50B4(__int64 a1)
{
  int v2; // edi

  *(_BYTE *)(*(_QWORD *)(a1 + 536) + 3LL) = 0;
  v2 = sub_1400E3E6C(*(_QWORD *)(a1 + 712), *(_QWORD *)(a1 + 536), 1, 1, 1, 0LL, 0LL, 0, (__int64)sub_1400DD1F0, 0LL);
  if ( v2 < 0 )
    sub_1400A870C(
      a1,
      1,
      3,
      (__int64)L"Keep Alive send failure",
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
  else
    sub_1400A870C(
      a1,
      1,
      4,
      (__int64)L"Keep Alive sent",
      L"KeepAliveTimeout msecs",
      *(_DWORD *)(a1 + 1076),
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
  return (unsigned int)v2;
}
