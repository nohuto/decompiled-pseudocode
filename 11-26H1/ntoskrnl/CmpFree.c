/*
 * XREFs of CmpFree @ 0x1408BFBF0
 * Callers:
 *     HvHiveCleanup @ 0x1408BF5E0 (HvHiveCleanup.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x1408CEAE4 (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFree(PVOID P, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(P, 0);
}
