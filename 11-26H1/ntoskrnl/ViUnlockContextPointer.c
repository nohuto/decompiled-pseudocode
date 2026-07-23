/*
 * XREFs of ViUnlockContextPointer @ 0x140C28940
 * Callers:
 *     VfInsertContext @ 0x1406447A0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140644940 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

void __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  _InterlockedIncrement64(a1);
}
