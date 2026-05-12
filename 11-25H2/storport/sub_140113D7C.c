/*
 * XREFs of sub_140113D7C @ 0x140113D7C
 * Callers:
 *     sub_1400FD098 @ 0x1400FD098 (sub_1400FD098.c)
 *     sub_140103A50 @ 0x140103A50 (sub_140103A50.c)
 * Callees:
 *     sub_1400E65F4 @ 0x1400E65F4 (sub_1400E65F4.c)
 *     sub_140112680 @ 0x140112680 (sub_140112680.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140113D7C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rsi
  unsigned int v7; // r8d
  unsigned int v10; // r8d
  __int64 i; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi

  v6 = 0LL;
  v7 = 0;
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( *(_BYTE *)(a3 + 2) != 40 )
  {
    v7 = -1073741637;
LABEL_16:
    *(_DWORD *)(v6 + 20) = 0;
    return v7;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 592LL) + 525LL) & 1) != 0 )
  {
    v10 = *(_DWORD *)(a3 + 56);
    v6 = a3;
    if ( v10 )
    {
      for ( i = 0LL; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
      {
        v12 = *(unsigned int *)(a3 + 4 * i + 120);
        if ( (unsigned int)v12 >= 0x80 && (unsigned int)v12 < *(_DWORD *)(a3 + 16) )
        {
          v13 = a3 + v12;
          if ( *(_DWORD *)(a3 + v12) == 67 )
          {
            if ( !v13 )
              break;
            *(_DWORD *)(a3 + 20) = 10;
            memset_0((void *)(v13 + 8), 0, 0x64uLL);
            *(_DWORD *)(v13 + 20) = *(_DWORD *)(a1 + 56);
            v7 = sub_1400E65F4(*(_QWORD *)(a1 + 16), a3, a2, a1, a5, (__int64)sub_1400F9A20, 0LL);
            if ( (v7 & 0x80000000) == 0 )
              return v7;
            goto LABEL_16;
          }
        }
      }
    }
    sub_140112680(a3, 6, 5, 36, 0);
    v7 = -1073741811;
    goto LABEL_16;
  }
  *(_BYTE *)(a3 + 3) = 1;
  return v7;
}
