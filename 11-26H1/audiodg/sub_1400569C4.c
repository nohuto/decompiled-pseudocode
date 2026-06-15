/*
 * XREFs of sub_1400569C4 @ 0x1400569C4
 * Callers:
 *     sub_140056B1C @ 0x140056B1C (sub_140056B1C.c)
 *     sub_14007B620 @ 0x14007B620 (sub_14007B620.c)
 *     sub_14009D86C @ 0x14009D86C (sub_14009D86C.c)
 *     sub_14009D9B0 @ 0x14009D9B0 (sub_14009D9B0.c)
 *     sub_14009DAF4 @ 0x14009DAF4 (sub_14009DAF4.c)
 *     sub_14009DC38 @ 0x14009DC38 (sub_14009DC38.c)
 *     sub_14009DD7C @ 0x14009DD7C (sub_14009DD7C.c)
 *     sub_14009DEC0 @ 0x14009DEC0 (sub_14009DEC0.c)
 * Callees:
 *     sub_1400569EC @ 0x1400569EC (sub_1400569EC.c)
 */

__int64 sub_1400569C4()
{
  __int64 result; // rax

  result = (unsigned int)dword_1400E7BE4;
  if ( !dword_1400E7BE4 )
    return sub_1400569EC(&dword_1400E7BC8);
  return result;
}
