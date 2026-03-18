/*
 * XREFs of sub_140021AD8 @ 0x140021AD8
 * Callers:
 *     sub_140021B90 @ 0x140021B90 (sub_140021B90.c)
 *     sub_14002CDD0 @ 0x14002CDD0 (sub_14002CDD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140021AD8(__int64 a1)
{
  unsigned __int16 i; // r8

  for ( i = 0; i < *(_WORD *)(a1 + 982); ++i )
  {
    if ( !*(_WORD *)(((unsigned __int64)i << 6) + *(_QWORD *)(a1 + 960) + 42) )
      return i;
  }
  return 0xFFFFLL;
}
