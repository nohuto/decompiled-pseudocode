/*
 * XREFs of sub_1400DFC54 @ 0x1400DFC54
 * Callers:
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 *     sub_1400E4544 @ 0x1400E4544 (sub_1400E4544.c)
 *     sub_1400F1D38 @ 0x1400F1D38 (sub_1400F1D38.c)
 * Callees:
 *     sub_14002CDD0 @ 0x14002CDD0 (sub_14002CDD0.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400E18FC @ 0x1400E18FC (sub_1400E18FC.c)
 *     sub_1400E56F0 @ 0x1400E56F0 (sub_1400E56F0.c)
 */

__int64 __fastcall sub_1400DFC54(__int64 a1, _DWORD *a2)
{
  char v2; // bl
  unsigned int v3; // edi
  __int64 v6; // rdx
  int v7; // ebp
  __int64 v9; // [rsp+C0h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 500 * *(unsigned __int8 *)(a1 + 587);
  v9 = 0LL;
  if ( !v3 )
    v3 = 10;
  v7 = sub_1400E18FC(a1, 20LL, &v9);
  if ( v7 >= 0 )
  {
    v7 = sub_1400E56F0(a1, v6, (unsigned int)v9 | 1LL);
    if ( v7 >= 0 )
    {
      while ( v3 )
      {
        v7 = sub_1400E18FC(a1, 28LL, &v9);
        if ( v7 < 0 )
        {
          *a2 = 18;
          return (unsigned int)v7;
        }
        v2 = v9;
        if ( (v9 & 1) != 0 )
          goto LABEL_18;
        sub_14002CDD0(0x2710u);
        if ( v3 == 10 )
        {
          v3 = 1;
        }
        else if ( v3 <= 0xA )
        {
          v3 = 0;
        }
        else
        {
          v3 -= 10;
        }
      }
      if ( (v2 & 1) == 0 )
      {
        v7 = -1056964607;
        *a2 = 19;
        sub_1400A870C(
          a1,
          1,
          3,
          (__int64)L"Enable controller - Ready timeout",
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
LABEL_18:
      *(_QWORD *)(a1 + 136) |= 0x100uLL;
    }
    else
    {
      *a2 = 16;
    }
  }
  else
  {
    *a2 = 17;
  }
  return (unsigned int)v7;
}
