/*
 * XREFs of sub_18000C254 @ 0x18000C254
 * Callers:
 *     sub_18000C0F0 @ 0x18000C0F0 (sub_18000C0F0.c)
 *     sub_18000D380 @ 0x18000D380 (sub_18000D380.c)
 * Callees:
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 *     ?__uncaught_exception@@YA_NXZ @ 0x18000CCA0 (-__uncaught_exception@@YA_NXZ.c)
 *     _o__initialize_onexit_table @ 0x18000CDAE (_o__initialize_onexit_table.c)
 */

char __fastcall sub_18000C254(unsigned int a1)
{
  int v2; // eax

  if ( !byte_1801C7DB0 )
  {
    if ( a1 > 1 )
    {
      sub_18000C8D4(5LL);
      JUMPOUT(0x18000C2DELL);
    }
    LOBYTE(v2) = __uncaught_exception();
    if ( !v2 || a1 )
    {
      xmmword_1801C7D80 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1800F9C70);
      qword_1801C7D90 = -1LL;
      xmmword_1801C7D98 = xmmword_1801C7D80;
      qword_1801C7DA8 = -1LL;
    }
    else if ( (unsigned int)o__initialize_onexit_table(&xmmword_1801C7D80)
           || (unsigned int)o__initialize_onexit_table(&xmmword_1801C7D98) )
    {
      return 0;
    }
    byte_1801C7DB0 = 1;
  }
  return 1;
}
