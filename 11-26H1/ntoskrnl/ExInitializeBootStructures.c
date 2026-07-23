/*
 * XREFs of ExInitializeBootStructures @ 0x140578908
 * Callers:
 *     KiInitializeBootStructures @ 0x140BFB890 (KiInitializeBootStructures.c)
 * Callees:
 *     ExpInitializeBootEnvironment @ 0x140CB04D0 (ExpInitializeBootEnvironment.c)
 */

__int64 __fastcall ExInitializeBootStructures(__int64 a1)
{
  return ExpInitializeBootEnvironment(a1, 0LL);
}
