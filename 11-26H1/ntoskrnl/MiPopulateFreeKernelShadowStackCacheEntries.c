/*
 * XREFs of MiPopulateFreeKernelShadowStackCacheEntries @ 0x1407040A4
 * Callers:
 *     MiInitializePartition @ 0x14086F740 (MiInitializePartition.c)
 * Callees:
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiPopulateFreeKernelShadowStackCacheEntries(_SLIST_HEADER *a1)
{
  _SLIST_HEADER *v1; // rsi
  _SLIST_ENTRY *Alignment; // rbx
  __int64 v3; // rdi
  _SLIST_ENTRY *v4; // rdi

  v1 = a1 + 32;
  Alignment = (_SLIST_ENTRY *)a1[32].Alignment;
  v3 = 1536LL * (unsigned __int16)KeNumberNodes;
  InitializeSListHead(a1 + 32);
  v4 = &Alignment[2 * v3];
  while ( Alignment < v4 )
  {
    RtlpInterlockedPushEntrySList(v1, Alignment);
    Alignment += 2;
  }
}
