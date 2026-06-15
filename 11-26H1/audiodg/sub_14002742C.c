/*
 * XREFs of sub_14002742C @ 0x14002742C
 * Callers:
 *     sub_14002736C @ 0x14002736C (sub_14002736C.c)
 * Callees:
 *     sub_140059FCC @ 0x140059FCC (sub_140059FCC.c)
 */

__int64 __fastcall sub_14002742C(__int64 a1, int a2)
{
  if ( a2 < 0 || a2 >= dword_1400E8788 )
  {
    sub_140059FCC(3221225612LL);
    JUMPOUT(0x14002745ALL);
  }
  return qword_1400E8778 + 8LL * a2;
}
