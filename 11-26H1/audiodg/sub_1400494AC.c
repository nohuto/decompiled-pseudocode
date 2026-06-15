/*
 * XREFs of sub_1400494AC @ 0x1400494AC
 * Callers:
 *     sub_140049030 @ 0x140049030 (sub_140049030.c)
 *     sub_1400496E0 @ 0x1400496E0 (sub_1400496E0.c)
 * Callees:
 *     sub_140049F44 @ 0x140049F44 (sub_140049F44.c)
 *     sub_14004A49C @ 0x14004A49C (sub_14004A49C.c)
 *     _o__initialize_onexit_table @ 0x14004A5B2 (_o__initialize_onexit_table.c)
 */

char __fastcall sub_1400494AC(unsigned int a1)
{
  if ( !byte_1400E7CD0 )
  {
    if ( a1 > 1 )
    {
      sub_140049F44(5LL);
      JUMPOUT(0x140049536LL);
    }
    if ( !(unsigned int)sub_14004A49C() || a1 )
    {
      xmmword_1400E7CA0 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1400C7610);
      qword_1400E7CB0 = -1LL;
      xmmword_1400E7CB8 = xmmword_1400E7CA0;
      qword_1400E7CC8 = -1LL;
    }
    else if ( (unsigned int)o__initialize_onexit_table(&xmmword_1400E7CA0)
           || (unsigned int)o__initialize_onexit_table(&xmmword_1400E7CB8) )
    {
      return 0;
    }
    byte_1400E7CD0 = 1;
  }
  return 1;
}
