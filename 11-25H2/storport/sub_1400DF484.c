/*
 * XREFs of sub_1400DF484 @ 0x1400DF484
 * Callers:
 *     sub_1400DCB68 @ 0x1400DCB68 (sub_1400DCB68.c)
 *     sub_1400F1D38 @ 0x1400F1D38 (sub_1400F1D38.c)
 * Callees:
 *     sub_14002CDD0 @ 0x14002CDD0 (sub_14002CDD0.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400E18FC @ 0x1400E18FC (sub_1400E18FC.c)
 *     sub_1400E56F0 @ 0x1400E56F0 (sub_1400E56F0.c)
 */

__int64 __fastcall sub_1400DF484(__int64 a1, char a2)
{
  bool v3; // zf
  char v4; // bl
  int v5; // esi
  __int64 v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // rdx
  const wchar_t *v9; // r9
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v13; // [rsp+C0h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 568) == 2;
  v4 = 0;
  v5 = 0;
  v13 = 0LL;
  if ( !v3 )
  {
    *(_QWORD *)(a1 + 136) &= ~0x100uLL;
    return (unsigned int)v5;
  }
  if ( a2 )
  {
    v6 = *(_QWORD *)(a1 + 592);
    if ( !v6 || (v7 = 64, !*(_DWORD *)(v6 + 88)) )
      v7 = 5000;
    v5 = sub_1400E18FC(a1, 20LL, &v13);
    if ( v5 >= 0 )
    {
      v5 = sub_1400E56F0(a1, v8, (unsigned int)v13 & 0xFFFF3FFF | 0x4000LL);
      if ( v5 >= 0 )
      {
        *(_QWORD *)(a1 + 136) &= ~0x100uLL;
        while ( v7 )
        {
          v5 = sub_1400E18FC(a1, 28LL, &v13);
          if ( v5 < 0 )
            return (unsigned int)v5;
          v4 = v13;
          if ( (v13 & 0xC) == 8 )
            break;
          sub_14002CDD0(0x2710u);
          if ( v7 == 10 )
          {
            v7 = 1;
          }
          else if ( v7 <= 0xA )
          {
            v7 = 0;
          }
          else
          {
            v7 -= 10;
          }
        }
        if ( (v4 & 0xC) != 8 )
        {
          v9 = L"Disable controller - Shutdown timeout";
LABEL_35:
          v5 = -1056964607;
          sub_1400A870C(
            a1,
            1,
            3,
            (__int64)v9,
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
        }
      }
    }
  }
  else
  {
    v10 = 500 * *(unsigned __int8 *)(a1 + 587);
    if ( !v10 )
      v10 = 10;
    v5 = sub_1400E18FC(a1, 20LL, &v13);
    if ( v5 >= 0 )
    {
      v5 = sub_1400E56F0(a1, v11, (unsigned int)v13 & 0xFFFFFFFE);
      if ( v5 >= 0 )
      {
        *(_QWORD *)(a1 + 136) &= ~0x100uLL;
        while ( v10 )
        {
          v5 = sub_1400E18FC(a1, 28LL, &v13);
          if ( v5 < 0 )
            return (unsigned int)v5;
          v4 = v13;
          if ( (v13 & 1) == 0 )
            return (unsigned int)v5;
          sub_14002CDD0(0x2710u);
          if ( v10 == 10 )
          {
            v10 = 1;
          }
          else if ( v10 <= 0xA )
          {
            v10 = 0;
          }
          else
          {
            v10 -= 10;
          }
        }
        if ( (v4 & 1) != 0 )
        {
          v9 = L"Disable controller - Ready timeout";
          goto LABEL_35;
        }
      }
    }
  }
  return (unsigned int)v5;
}
