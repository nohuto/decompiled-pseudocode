/*
 * XREFs of sub_1400DFDFC @ 0x1400DFDFC
 * Callers:
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 *     sub_1400E4544 @ 0x1400E4544 (sub_1400E4544.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400E5218 @ 0x1400E5218 (sub_1400E5218.c)
 */

__int64 __fastcall sub_1400DFDFC(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  int v6; // edx
  int v7; // edi

  v4 = *(_DWORD *)(a1 + 572);
  if ( v4 == 1 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 592) + 92LL) & 0x100 | ((*(_BYTE *)(*(_QWORD *)(a1 + 592) + 261LL) & 8) << 7) | 0x1F;
  }
  else
  {
    v6 = 0;
    if ( v4 == 2 )
      v6 = 0x80000000;
  }
  v7 = sub_1400E5218(a1, 0, 11, a4, v6);
  if ( v7 < 0 )
    sub_1400A870C(
      a1,
      1,
      2,
      (__int64)L"Enabling Async Event failed",
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
  return (unsigned int)v7;
}
