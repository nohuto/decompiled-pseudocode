/*
 * XREFs of MiFillPfnGaps @ 0x140CF2AE8
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     MiFillGapAddresses @ 0x140CF9610 (MiFillGapAddresses.c)
 */

__int64 MiFillPfnGaps()
{
  __int64 result; // rax

  MiFillGapAddresses(0xFFFFDE0000000000uLL, 48 * qword_140E2D7A0 - 0x21FFFFFFFFD1LL);
  result = 0x80000000LL;
  MiFlags |= 0x80000000uLL;
  return result;
}
