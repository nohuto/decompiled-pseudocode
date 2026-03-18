/*
 * XREFs of CmpAllocatePoolWithQuota @ 0x140487084
 * Callers:
 *     CmUpdateFeatureConfiguration @ 0x140854CD4 (CmUpdateFeatureConfiguration.c)
 *     CmUpdateFeatureUsageSubscription @ 0x140854F40 (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocatePoolWithQuota(__int64 a1)
{
  return ExAllocatePool2(a1 | 1);
}
