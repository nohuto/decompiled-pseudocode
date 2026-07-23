/*
 * XREFs of HalInitializeProcessor @ 0x14057A980
 * Callers:
 *     KiInitializeBootStructures @ 0x140BFB890 (KiInitializeBootStructures.c)
 * Callees:
 *     HalpInitSystemHelper @ 0x140BEF9CC (HalpInitSystemHelper.c)
 */

__int64 __fastcall HalInitializeProcessor(int a1, __int64 a2)
{
  return HalpInitSystemHelper(a1 != 0 ? 4 : 0, a1 != 0 ? 6 : 3, a2);
}
