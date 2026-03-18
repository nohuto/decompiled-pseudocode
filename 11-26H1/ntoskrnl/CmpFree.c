/*
 * XREFs of CmpFree @ 0x1408B9620
 * Callers:
 *     HvHiveCleanup @ 0x1408B9010 (HvHiveCleanup.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x1408C8530 (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFree(PVOID P, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(P, 0);
}
