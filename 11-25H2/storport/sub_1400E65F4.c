/*
 * XREFs of sub_1400E65F4 @ 0x1400E65F4
 * Callers:
 *     sub_140113BA0 @ 0x140113BA0 (sub_140113BA0.c)
 *     sub_140113D7C @ 0x140113D7C (sub_140113D7C.c)
 *     sub_140113EA8 @ 0x140113EA8 (sub_140113EA8.c)
 * Callees:
 *     sub_1400DC578 @ 0x1400DC578 (sub_1400DC578.c)
 *     sub_1400E3E6C @ 0x1400E3E6C (sub_1400E3E6C.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 */

__int64 __fastcall sub_1400E65F4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  __int64 v11; // rax
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx

  if ( *(_DWORD *)(a1 + 568) != 2 || **(_DWORD **)(a1 + 1272) )
    return 3221225996LL;
  v11 = sub_1400DC578(a1);
  if ( !v11 )
    return 2147483665LL;
  if ( *(_BYTE *)(a2 + 2) == 40 && (v13 = *(_DWORD *)(a2 + 56)) != 0 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      v15 = *(unsigned int *)(a2 + 4 * v14 + 120);
      if ( (unsigned int)v15 >= 0x80 && (unsigned int)v15 < *(_DWORD *)(a2 + 16) )
      {
        v16 = a2 + v15;
        if ( *(_DWORD *)v16 == 67 )
          break;
      }
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= v13 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    v16 = 0LL;
  }
  *(_DWORD *)v16 = 67;
  *(_DWORD *)(v16 + 4) = 100;
  *(_BYTE *)(v16 + 80) = 0;
  *(_QWORD *)(v16 + 8) = *(_QWORD *)(a1 + 560);
  *(_WORD *)(v16 + 106) = *(_WORD *)(v11 + 136);
  if ( a6 )
    return sub_1400E3E6C(v11, a2, 0, 0, 0, a3, a4, a5, a6, a7);
  else
    return sub_1400E4050(v11, a2, 0, 0LL, 0, a3, a4, a5);
}
