/*
 * XREFs of AmdResetCountersOnD0 @ 0x140004730
 * Callers:
 *     <none>
 * Callees:
 *     AmdPctSnapPlatformCtrsEx @ 0x1400023CC (AmdPctSnapPlatformCtrsEx.c)
 */

__int64 __fastcall AmdResetCountersOnD0(__int64 a1)
{
  return AmdPctSnapPlatformCtrsEx(a1, 0x800000000000LL, 1);
}
