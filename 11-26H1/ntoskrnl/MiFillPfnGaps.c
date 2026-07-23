/*
 * XREFs of MiFillPfnGaps @ 0x140CF8E68
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     MiFillGapAddresses @ 0x140CFF990 (MiFillGapAddresses.c)
 */

__int64 MiFillPfnGaps()
{
  __int64 result; // rax

  MiFillGapAddresses(0xFFFFDE0000000000uLL, 48 * qword_140E2D920 - 0x21FFFFFFFFD1LL);
  result = 0x80000000LL;
  MiFlags |= 0x80000000uLL;
  return result;
}
