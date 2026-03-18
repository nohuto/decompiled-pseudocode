/*
 * XREFs of ExInitializeBootStructures @ 0x140576458
 * Callers:
 *     KiInitializeBootStructures @ 0x140BF5890 (KiInitializeBootStructures.c)
 * Callees:
 *     ExpInitializeBootEnvironment @ 0x140CAA4D0 (ExpInitializeBootEnvironment.c)
 */

__int64 __fastcall ExInitializeBootStructures(__int64 a1)
{
  return ExpInitializeBootEnvironment(a1, 0LL);
}
