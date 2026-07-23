/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x140B3A09C
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1404DC1EC (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
