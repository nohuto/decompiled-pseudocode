/*
 * XREFs of sub_140045678 @ 0x140045678
 * Callers:
 *     sub_1400455D8 @ 0x1400455D8 (sub_1400455D8.c)
 *     sub_1400B0B90 @ 0x1400B0B90 (sub_1400B0B90.c)
 * Callees:
 *     sub_140038A48 @ 0x140038A48 (sub_140038A48.c)
 *     sub_1400456C4 @ 0x1400456C4 (sub_1400456C4.c)
 *     sub_140045738 @ 0x140045738 (sub_140045738.c)
 */

__int64 __fastcall sub_140045678(__int64 a1)
{
  sub_140038A48(a1, 0);
  sub_1400456C4(a1);
  sub_140045738(&dword_1400E74B0);
  if ( *(_BYTE *)(a1 + 98) )
    CoUninitialize();
  return sub_1400456C4(a1);
}
