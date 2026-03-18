/*
 * XREFs of SmStoreCompressionStart @ 0x140AE9D90
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140AE9A8C (MmProcessWorkingSetControl.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x140409DF0 (SmpKeyedStoreEntryGet.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1404B3F10 (MmQueryProcessWorkingSetSwapPages.c)
 *     SmpGetProcessPartition @ 0x1404D6C0C (SmpGetProcessPartition.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1404E538C (MmStoreFlushOutstandingEvictions.c)
 *     SmSwapStore @ 0x140AEA064 (SmSwapStore.c)
 */

int SmStoreCompressionStart()
{
  _KPROCESS *Process; // rdi
  __int64 ProcessPartition; // rbx
  unsigned __int64 *v2; // rax
  unsigned __int64 *v3; // rsi
  _KPROCESS *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = Process;
  ProcessPartition = SmpGetProcessPartition((__int64)Process);
  v2 = SmpKeyedStoreEntryGet((struct _KTHREAD *)(ProcessPartition + 2344), (unsigned __int64 *)&v5, 0, 0LL);
  v3 = v2;
  if ( v2 || *(_DWORD *)(ProcessPartition + 2384) != -1 )
  {
    LODWORD(v2) = MmStoreFlushOutstandingEvictions(*(_QWORD **)(ProcessPartition + 2208));
    if ( v3 )
    {
      LODWORD(v2) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v6);
      if ( (int)v2 >= 0 )
        LODWORD(v2) = SmSwapStore(*(_QWORD *)(ProcessPartition + 2208), 0LL);
    }
  }
  return (int)v2;
}
