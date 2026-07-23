/*
 * XREFs of RtlpHpLfhHeatMapDecayCounts @ 0x180062170
 * Callers:
 *     RtlpHpLfhHeatMapQuery @ 0x180061D60 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpHpLfhHeatMapDecayCounts(__int64 a1, __int64 a2, _WORD *a3, __int64 a4, unsigned int a5)
{
  _WORD *v5; // r10
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  __int64 v8; // r9

  v5 = a3 + 125;
  if ( a5 > 0x1E )
  {
    for ( ; a3 < v5; ++a3 )
      *a3 = 0;
  }
  else
  {
    v6 = a5;
    v7 = 3LL;
    v8 = 1LL;
    while ( 1 )
    {
      if ( (v6 & 1) != 0 )
        v8 *= v7;
      v6 >>= 1;
      if ( !v6 )
        break;
      v7 *= v7;
    }
    for ( ; a3 < v5; ++a3 )
      *a3 = (v8 * (unsigned __int64)(unsigned __int16)*a3) >> (2 * (unsigned __int8)a5);
  }
}
