/*
 * XREFs of sub_1400F3180 @ 0x1400F3180
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_1400EE8C0 @ 0x1400EE8C0 (sub_1400EE8C0.c)
 *     sub_140122E00 @ 0x140122E00 (sub_140122E00.c)
 * Callees:
 *     sub_14002CDD0 @ 0x14002CDD0 (sub_14002CDD0.c)
 *     sub_1400D94E0 @ 0x1400D94E0 (sub_1400D94E0.c)
 */

char __fastcall sub_1400F3180(__int64 a1, int a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebp
  ULONG v5; // ebx
  char v6; // di

  v2 = 0;
  v4 = 1000000 * a2;
  v5 = 1000;
  while ( 1 )
  {
    v6 = 1;
    if ( !sub_1400D94E0(a1) )
      break;
    sub_14002CDD0(v5);
    v2 += v5;
    if ( v4 && v2 >= v4 )
      return 0;
    if ( v5 < 0x186A0 )
    {
      v5 *= 2;
      if ( v5 >= 0x186A0 )
        v5 = 100000;
    }
  }
  return v6;
}
