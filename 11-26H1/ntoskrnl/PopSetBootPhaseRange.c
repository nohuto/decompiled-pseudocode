/*
 * XREFs of PopSetBootPhaseRange @ 0x140C0279C
 * Callers:
 *     PopSetRange @ 0x1404A9650 (PopSetRange.c)
 * Callees:
 *     RtlSetBits @ 0x14035AAB0 (RtlSetBits.c)
 */

void __fastcall PopSetBootPhaseRange(__int64 a1, ULONG a2, ULONG a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // r10

  v3 = a2;
  if ( a2 < a3 + a2 )
  {
    v4 = a2;
    do
    {
      if ( !_bittest64(*(const signed __int64 **)(a1 + 56), v4) )
        *(_BYTE *)((v4 >> 3) + *(_QWORD *)(a1 + 72)) &= ~(1 << (v3 & 7));
      ++v3;
      ++v4;
    }
    while ( v3 < a3 + a2 );
  }
  RtlSetBits((PRTL_BITMAP)(a1 + 48), a2, a3);
}
