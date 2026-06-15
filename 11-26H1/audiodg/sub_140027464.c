/*
 * XREFs of sub_140027464 @ 0x140027464
 * Callers:
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_14002736C @ 0x14002736C (sub_14002736C.c)
 *     TopLevelExceptionFilter @ 0x14006EC80 (TopLevelExceptionFilter.c)
 * Callees:
 *     sub_140059FCC @ 0x140059FCC (sub_140059FCC.c)
 */

__int64 __fastcall sub_140027464(__int64 a1, int a2)
{
  if ( a2 < 0 || a2 >= dword_1400E8788 )
  {
    sub_140059FCC(3221225612LL);
    JUMPOUT(0x140027492LL);
  }
  return qword_1400E8780 + 8LL * a2;
}
