/*
 * XREFs of sub_1400DC21C @ 0x1400DC21C
 * Callers:
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400E0960 @ 0x1400E0960 (sub_1400E0960.c)
 */

__int64 __fastcall sub_1400DC21C(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  unsigned int v4; // ebp
  __int64 v5; // rbx

  v2 = 0;
  v3 = sub_1400143E0(
         64LL,
         192LL * *(unsigned __int16 *)(a1 + 20),
         1380147538LL,
         *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 728) = v3;
  if ( !v3 )
  {
LABEL_7:
    v2 = -1073741801;
    sub_1400E0960(a1);
    return v2;
  }
  if ( (*(_BYTE *)(a1 + 136) & 0x40) != 0 )
  {
    v4 = 0;
    if ( *(_WORD *)(a1 + 20) )
    {
      while ( 1 )
      {
        v5 = 192LL * v4;
        *(_QWORD *)(*(_QWORD *)(a1 + 728) + v5 + 96) = sub_1400143E0(
                                                         64LL,
                                                         5672LL,
                                                         1095655762LL,
                                                         *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
        if ( !*(_QWORD *)(*(_QWORD *)(a1 + 728) + v5 + 96) )
          break;
        if ( ++v4 >= *(unsigned __int16 *)(a1 + 20) )
          return v2;
      }
      goto LABEL_7;
    }
  }
  return v2;
}
