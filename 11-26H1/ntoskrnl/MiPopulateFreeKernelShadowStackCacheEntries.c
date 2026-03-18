/*
 * XREFs of MiPopulateFreeKernelShadowStackCacheEntries @ 0x1406FF3D4
 * Callers:
 *     MiInitializePartition @ 0x140869360 (MiInitializePartition.c)
 * Callees:
 *     InitializeSListHead @ 0x140499200 (InitializeSListHead.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiPopulateFreeKernelShadowStackCacheEntries(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rsi
  struct _SLIST_ENTRY *Alignment; // rbx
  __int64 v3; // rdi
  struct _SLIST_ENTRY *v4; // rdi

  v1 = a1 + 32;
  Alignment = (struct _SLIST_ENTRY *)a1[32].Alignment;
  v3 = 1536LL * (unsigned __int16)KeNumberNodes;
  InitializeSListHead(a1 + 32);
  v4 = &Alignment[2 * v3];
  while ( Alignment < v4 )
  {
    RtlpInterlockedPushEntrySList(v1, Alignment);
    Alignment += 2;
  }
}
