/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x140B37E8C
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1404E2B78 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
