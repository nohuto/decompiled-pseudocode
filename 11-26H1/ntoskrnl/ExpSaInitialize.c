/*
 * XREFs of ExpSaInitialize @ 0x1406D7200
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CEA720 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     ExpSaAllocatorInitialize @ 0x1406D71B4 (ExpSaAllocatorInitialize.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

char ExpSaInitialize()
{
  char v0; // bl
  void *Pool2; // rax
  ULONG MaximumProcessorCount; // ebp
  unsigned int v3; // esi
  unsigned int i; // edi
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v6; // eax
  void *v7; // rcx
  __int64 Prcb; // rdx
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *v10; // rax
  char v11; // dl
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  ExSaPageGroupDescriptorArrayLock.QuantumTarget = 0LL;
  ExSaPageGroupDescriptorArrayLock.SListFaultAddress = 0LL;
  ExSaPageGroupDescriptorArrayLock.Header.WaitListHead.Flink = 0LL;
  ExSaPageGroupDescriptorArrayLock.Header.WaitListHead.Blink = 0LL;
  *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.Header.Lock = 0LL;
  v13 = 0LL;
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  ExSaPageGroupDescriptorArrayLock.QuantumTarget = (unsigned __int64)Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x80uLL);
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    ExSaPageGroupDescriptorArrayLock.SListFaultAddress = (void *)ExAllocatePool2(0x40uLL);
    if ( ExSaPageGroupDescriptorArrayLock.SListFaultAddress )
    {
      v3 = KeNumberProcessors_0;
      for ( i = 0; i < MaximumProcessorCount; ++i )
      {
        if ( i >= v3 )
          CurrentPrcb = KeGetCurrentPrcb();
        else
          CurrentPrcb = (struct _KPRCB *)KeGetPrcb(i);
        v6 = CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000;
        LOBYTE(v13) = 3;
        DWORD2(v13) = v6;
        v7 = (void *)ExAllocatePool3(64LL, 128LL, 1632860229LL, &v13, 1);
        *((_QWORD *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress + i) = v7;
        if ( !v7 )
          return v0;
        memset_0(v7, 0, 0x80uLL);
        Prcb = KeGetPrcb(i);
        if ( Prcb )
          *(_QWORD *)(Prcb + 35824) = *((_QWORD *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress + i);
      }
      v9 = (struct _LIST_ENTRY *)ExAllocatePool2(0x40uLL);
      ExSaPageGroupDescriptorArrayLock.Header.WaitListHead.Flink = v9;
      if ( v9 )
      {
        ExpSaAllocatorInitialize((__int64)v9, 0);
        v10 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
        ExSaPageGroupDescriptorArrayLock.Header.WaitListHead.Blink = v10;
        if ( v10 )
        {
          ExpSaAllocatorInitialize((__int64)v10, 1);
          return v11;
        }
      }
    }
  }
  return v0;
}
