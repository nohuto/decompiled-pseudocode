/*
 * XREFs of ViUnlockContextPointer @ 0x140B74A2C
 * Callers:
 *     VfInsertContext @ 0x140604820 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1406049C0 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

void __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  _InterlockedIncrement64(a1);
}
