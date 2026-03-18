/*
 * XREFs of PpvUtilInit @ 0x140C21144
 * Callers:
 *     VfIoPendingEntry @ 0x140645440 (VfIoPendingEntry.c)
 *     VfIoPendingUnload @ 0x140645520 (VfIoPendingUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall PpvUtilInit(char a1)
{
  PpvUtilVerifierEnabled = a1;
}
