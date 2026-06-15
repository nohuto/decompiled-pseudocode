/*
 * XREFs of sub_140075538 @ 0x140075538
 * Callers:
 *     sub_140075568 @ 0x140075568 (sub_140075568.c)
 * Callees:
 *     sub_140059FCC @ 0x140059FCC (sub_140059FCC.c)
 */

__int64 __fastcall sub_140075538(__int64 a1, int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
  {
    sub_140059FCC(0xC000008C);
    JUMPOUT(0x14007555FLL);
  }
  return *(_QWORD *)a1 + 8LL * a2;
}
