/*
 * XREFs of HalpPciGetHpetInterruptSourceIntel @ 0x140CBB4AC
 * Callers:
 *     HalpPciGetHpetInterruptSource @ 0x140CBB300 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPciGetHpetInterruptSourceIntel(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int v6; // r9d
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  _WORD *v10; // rbx
  _BYTE *i; // rcx
  __int64 v12; // r8

  v3 = *(unsigned int *)(a1 + 4);
  v6 = -1073741275;
  if ( (unsigned int)v3 >= 0x30 && (*(_BYTE *)(a1 + 37) & 1) != 0 )
  {
    v7 = a1 + v3;
    v8 = a1 + 48;
    while ( v8 + 4 <= v7 )
    {
      v9 = *(unsigned __int16 *)(v8 + 2);
      if ( (unsigned int)v9 < 4 || v8 + v9 > v7 )
        break;
      v10 = (_WORD *)v8;
      v8 += v9;
      if ( !*v10 )
      {
        for ( i = v10 + 8; (unsigned __int64)(i + 2) <= v8; i += v12 )
        {
          v12 = (unsigned __int8)i[1];
          if ( (unsigned __int8)v12 < 2u || (unsigned __int64)&i[v12] > v8 )
            break;
          if ( (unsigned __int8)v12 >= 8u && *i == 4 && i[4] == a2 )
          {
            if ( (_BYTE)v12 == 8 && i[6] < 0x20u && i[7] < 8u )
            {
              *(_QWORD *)(a3 + 4) = 0LL;
              v6 = 0;
              *(_DWORD *)a3 = 1;
              *(_DWORD *)(a3 + 4) = (unsigned __int16)v10[3];
              *(_BYTE *)(a3 + 8) = i[5];
              *(_BYTE *)(a3 + 9) = i[6];
              *(_BYTE *)(a3 + 10) = i[7];
            }
            else
            {
              return (unsigned int)-1073741637;
            }
            return v6;
          }
        }
      }
    }
  }
  return v6;
}
