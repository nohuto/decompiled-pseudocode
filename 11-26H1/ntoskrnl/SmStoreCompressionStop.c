/*
 * XREFs of SmStoreCompressionStop @ 0x140AEC924
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140AEC57C (MmProcessWorkingSetControl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     SmKmStoreGet @ 0x140356910 (SmKmStoreGet.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     SmpKeyedStoreEntryGet @ 0x140402EE0 (SmpKeyedStoreEntryGet.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1404AD4E0 (MmQueryProcessWorkingSetSwapPages.c)
 *     SmpGetProcessPartition @ 0x1404D03DC (SmpGetProcessPartition.c)
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x1404EEE18 (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 *     SmSwapStore @ 0x140AECB54 (SmSwapStore.c)
 */

int __fastcall SmStoreCompressionStop(int a1)
{
  __int64 ProcessPartition; // rbx
  unsigned __int64 *v3; // rax
  unsigned __int64 *v4; // rsi
  int v5; // edi
  _DWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2[4]; // [rsp+50h] [rbp-20h] BYREF
  _KPROCESS *Process; // [rsp+98h] [rbp+28h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+30h] BYREF

  memset(&Event, 0, sizeof(Event));
  BugCheckParameter2[1] = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  ProcessPartition = SmpGetProcessPartition((__int64)Process);
  v3 = SmpKeyedStoreEntryGet((struct _KTHREAD *)(ProcessPartition + 2344), (unsigned __int64 *)&Process, 0, 0LL);
  v4 = v3;
  if ( v3 )
    v5 = *((unsigned __int16 *)v3 + 8);
  else
    v5 = *(_DWORD *)(ProcessPartition + 2384);
  if ( v5 != -1 )
  {
    v9 = ProcessPartition;
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, NotificationEvent, 0);
    BugCheckParameter2[0] = 0LL;
    BugCheckParameter2[2] = (ULONG_PTR)SmpFlushStorePages;
    BugCheckParameter2[3] = (ULONG_PTR)&v9;
    ExQueueWorkItemToPartition(BugCheckParameter2, 0, 0xFFFFFFFF);
    LODWORD(v3) = KeWaitForSingleObject(&Event, WrKernel, 0, 0, 0LL);
    if ( v4 )
    {
      SmSwapStore(*(_QWORD *)(ProcessPartition + 2208), 1LL);
      if ( a1 )
      {
        v6 = (_DWORD *)SmKmStoreGet(ProcessPartition, v5);
        SMKM_STORE_MGR<SM_TRAITS>::SmTrimWsStore(v7, v6, 0LL);
      }
      LODWORD(v3) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v13);
      if ( (int)v3 < 0 )
        LODWORD(v3) = SmSwapStore(*(_QWORD *)(ProcessPartition + 2208), 2LL);
    }
  }
  return (int)v3;
}
