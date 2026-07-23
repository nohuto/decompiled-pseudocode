/*
 * XREFs of PpvUtilInit @ 0x140C27154
 * Callers:
 *     VfIoPendingEntry @ 0x140649020 (VfIoPendingEntry.c)
 *     VfIoPendingUnload @ 0x140649100 (VfIoPendingUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall PpvUtilInit(char a1)
{
  PpvUtilVerifierEnabled = a1;
}
