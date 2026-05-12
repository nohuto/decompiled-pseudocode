/*
 * XREFs of NvmeCompletionQueueReInit @ 0x1400F0294
 * Callers:
 *     NvmeControllerQueuesReInit @ 0x1400F96F4 (NvmeControllerQueuesReInit.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void *__fastcall NvmeCompletionQueueReInit(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  *(_WORD *)(a2 + 36) = 0;
  *(_WORD *)(a2 + 34) = 0;
  if ( *(_WORD *)(a2 + 32) )
    v2 = *(unsigned int *)(a1 + 8);
  else
    v2 = *(unsigned __int16 *)(a1 + 6);
  return memset_0(*(void **)a2, 0, 16 * v2);
}
