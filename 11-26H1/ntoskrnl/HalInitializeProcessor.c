/*
 * XREFs of HalInitializeProcessor @ 0x140578450
 * Callers:
 *     KiInitializeBootStructures @ 0x140BF5890 (KiInitializeBootStructures.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140BE99CC (HalpInitSystemHelper.c)
 */

__int64 __fastcall HalInitializeProcessor(int a1, __int64 a2)
{
  return HalpInitSystemHelper(a1 != 0 ? 4 : 0, a1 != 0 ? 6 : 3, a2);
}
