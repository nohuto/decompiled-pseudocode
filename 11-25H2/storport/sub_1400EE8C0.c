/*
 * XREFs of sub_1400EE8C0 @ 0x1400EE8C0
 * Callers:
 *     sub_1400EF9BC @ 0x1400EF9BC (sub_1400EF9BC.c)
 *     sub_1400F2658 @ 0x1400F2658 (sub_1400F2658.c)
 * Callees:
 *     sub_1400E8E20 @ 0x1400E8E20 (sub_1400E8E20.c)
 *     sub_1400EE640 @ 0x1400EE640 (sub_1400EE640.c)
 *     sub_1400EF848 @ 0x1400EF848 (sub_1400EF848.c)
 *     sub_1400F3180 @ 0x1400F3180 (sub_1400F3180.c)
 */

__int64 __fastcall sub_1400EE8C0(_QWORD *SystemArgument2)
{
  int v2; // esi
  unsigned __int16 i; // di
  __int16 v5; // di
  unsigned __int16 v6; // bp

  v2 = 0;
  if ( (SystemArgument2[121] & 0x1000000LL) != 0 )
    return 0LL;
  sub_1400F3180(SystemArgument2, 1LL);
  for ( i = 0; i < *((_WORD *)SystemArgument2 + 11); ++i )
  {
    v2 = sub_1400EF848(SystemArgument2);
    if ( v2 < 0 )
      *((_DWORD *)SystemArgument2 + 294) = 15;
  }
  if ( *((_WORD *)SystemArgument2 + 13) )
  {
    v5 = 1;
    do
    {
      v6 = v5;
      sub_1400E8E20((__int64)SystemArgument2, v5);
      v2 = sub_1400EE640(SystemArgument2, v5);
      if ( v2 < 0 )
        *((_DWORD *)SystemArgument2 + 294) = 16;
      ++v5;
    }
    while ( v6 < *((_WORD *)SystemArgument2 + 13) );
  }
  return (unsigned int)v2;
}
