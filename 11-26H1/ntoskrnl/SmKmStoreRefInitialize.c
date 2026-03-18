/*
 * XREFs of SmKmStoreRefInitialize @ 0x14081A7C4
 * Callers:
 *     SmKmStoreAdd @ 0x140B0B64C (SmKmStoreAdd.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall SmKmStoreRefInitialize(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rcx

  a1->Count = 0LL;
  a1[2].Count = 0LL;
  a1[3].Count = 0LL;
  a1[4].Count = 0LL;
  v2 = a1 + 1;
  v2->Count = 0LL;
  ExWaitForRundownProtectionRelease(v2);
  a1[2].Count = 0LL;
}
