/*
 * XREFs of DpiDriverUnload @ 0x14023E970
 * Callers:
 *     <none>
 * Callees:
 *     DpiCleanup @ 0x14023E63C (DpiCleanup.c)
 */

void __fastcall DpiDriverUnload(struct _DRIVER_OBJECT *a1)
{
  DpiCleanup(a1, 1);
}
