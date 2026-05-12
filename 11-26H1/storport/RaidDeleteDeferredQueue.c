/*
 * XREFs of RaidDeleteDeferredQueue @ 0x140047EB4
 * Callers:
 *     RaidAdapterInitializeWmi @ 0x14004632C (RaidAdapterInitializeWmi.c)
 *     RaidDeleteAdapter @ 0x1400478CC (RaidDeleteAdapter.c)
 *     DeleteNvmeAdapter @ 0x1400D1764 (DeleteNvmeAdapter.c)
 *     NvmeAdapterInitializeWmi @ 0x1400D9030 (NvmeAdapterInitializeWmi.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RaidDeleteDeferredQueue(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rbx
  PSLIST_ENTRY result; // rax

  v1 = a1 + 5;
  while ( 1 )
  {
    result = ExpInterlockedPopEntrySList(v1);
    if ( !result )
      break;
    ExFreePoolWithTag(result, 0x66446152u);
  }
  return result;
}
