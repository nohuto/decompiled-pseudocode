/*
 * XREFs of HalpValidateMpns @ 0x14078A0CC
 * Callers:
 *     HalpChannelInitializeStaticConfiguration @ 0x140CBACD8 (HalpChannelInitializeStaticConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 HalpValidateMpns()
{
  unsigned int v0; // edx
  unsigned int i; // r9d
  __int64 v2; // r10
  __int64 v3; // r8
  unsigned int v4; // ebx
  _BYTE *v5; // rcx
  unsigned int v6; // r10d
  __int64 v7; // r8

  v0 = 1;
  for ( i = 1; i < dword_140F87A80 - 1; ++i )
  {
    v2 = *((_QWORD *)qword_140F87A78 + 2 * i - 2);
    v3 = *((_QWORD *)qword_140F87A78 + 2 * i);
    if ( *(_WORD *)(v2 + 2) == *(_WORD *)(v3 + 2) )
    {
      if ( (*(_BYTE *)v2 & 1 | 6) != (*(_BYTE *)v3 & 1 | 6) )
        return 0;
      v4 = *(_DWORD *)(v2 + 24);
      if ( v4 != *(_DWORD *)(v3 + 24)
        || *(_DWORD *)(v2 + 28) != *(_DWORD *)(v3 + 28)
        || *((_WORD *)qword_140F87A78 + 8 * i - 3) != *((_WORD *)qword_140F87A78 + 8 * i + 5) )
      {
        return 0;
      }
      if ( (*(_BYTE *)v2 & 2) != 0 )
      {
        v5 = (_BYTE *)(v2 + 32);
        v6 = 0;
        v7 = v3 - (_QWORD)v5;
        while ( v6 < v4 )
        {
          if ( v5[1] != v5[v7 + 33] || *v5 != v5[v7 + 32] )
            return 0;
          ++v6;
          v5 += 2;
        }
      }
    }
  }
  return v0;
}
