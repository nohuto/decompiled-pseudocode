/*
 * XREFs of KiFreeTemporaryStacks @ 0x1405F3160
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 */

void __fastcall KiFreeTemporaryStacks(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  PSLIST_ENTRY v4; // rbx
  PSLIST_ENTRY v5; // rcx
  int v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+28h] [rbp-30h]
  PSLIST_ENTRY v8; // [rsp+38h] [rbp-20h]
  __int128 v9; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  v9 = 0LL;
  v4 = RtlpInterlockedFlushSList(&KeGetCurrentPrcb()->KstackFreeList);
  while ( v4 )
  {
    v5 = v4 + 1;
    v6[0] = 4;
    v4 = v4->Next;
    v8 = v5;
    v6[1] = 5;
    MmDeleteKernelStack(v6);
  }
}
