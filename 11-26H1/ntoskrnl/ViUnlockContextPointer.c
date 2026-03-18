/*
 * XREFs of ViUnlockContextPointer @ 0x140C22930
 * Callers:
 *     VfInsertContext @ 0x140640BC0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140640D60 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

void __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  _InterlockedIncrement64(a1);
}
