/*
 * XREFs of RtlFindNextClearBitBackwardsEx @ 0x14041AFEC
 * Callers:
 *     MiFindNextLowerLargePageCandidate @ 0x14041AF4C (MiFindNextLowerLargePageCandidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextClearBitBackwardsEx(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // r9
  unsigned int v3; // r8d
  __int64 v4; // rdx
  bool i; // zf

  v2 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (a2 >> 6));
  v3 = 63;
  v4 = *v2 | ~((1LL << a2) - 1);
  if ( v4 == -1 )
  {
    for ( i = v2 == *(_QWORD **)(a1 + 8); !i; i = v2 == *(_QWORD **)(a1 + 8) )
    {
      v4 = *--v2;
      if ( *v2 != -1LL )
        goto LABEL_2;
    }
    return -1LL;
  }
  else
  {
LABEL_2:
    if ( v4 < 0 )
    {
      do
        --v3;
      while ( _bittest64(&v4, v3) );
    }
    return (((__int64)v2 - *(_QWORD *)(a1 + 8)) >> 3 << 6) + v3;
  }
}
