/*
 * XREFs of HalpPciGetHpetInterruptSourceAmd @ 0x140CBB3CC
 * Callers:
 *     HalpPciGetHpetInterruptSource @ 0x140CBB300 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPciGetHpetInterruptSourceAmd(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // r10
  unsigned int v6; // r11d
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  _BYTE *i; // rdx
  __int64 v11; // rax

  v3 = a1 + 48;
  v4 = a1 + *(unsigned int *)(a1 + 4);
  v6 = -1073741275;
  while ( v3 + 4 <= v4 )
  {
    v7 = *(unsigned __int16 *)(v3 + 2);
    if ( (unsigned int)v7 < 4 || v3 + v7 > v4 )
      break;
    v9 = v3;
    v8 = v3 + v7;
    v3 += v7;
    if ( *(_BYTE *)v9 == 16 )
    {
      for ( i = (_BYTE *)(v9 + 24); (unsigned __int64)i < v8; i += v11 )
      {
        v11 = 1LL << ((*i >> 6) + 2);
        if ( (unsigned __int64)&i[v11] > v8 )
          break;
        if ( *i == 72 && i[7] == 2 && i[4] == a2 )
        {
          v6 = 0;
          *(_QWORD *)(a3 + 4) = 0LL;
          *(_DWORD *)a3 = 1;
          *(_DWORD *)(a3 + 4) = *(unsigned __int16 *)(v9 + 16);
          *(_BYTE *)(a3 + 8) = i[6];
          *(_BYTE *)(a3 + 9) = (i[5] >> 3) & 0x1F;
          *(_BYTE *)(a3 + 10) = i[5] & 7;
          return v6;
        }
      }
    }
  }
  return v6;
}
