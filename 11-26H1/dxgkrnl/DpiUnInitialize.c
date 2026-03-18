/*
 * XREFs of DpiUnInitialize @ 0x14023F2C0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCleanup @ 0x14023E63C (DpiCleanup.c)
 */

void __fastcall DpiUnInitialize(struct _DRIVER_OBJECT *a1)
{
  DpiCleanup(a1, 0);
}
