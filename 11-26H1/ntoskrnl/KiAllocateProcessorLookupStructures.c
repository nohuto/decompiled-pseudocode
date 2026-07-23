/*
 * XREFs of KiAllocateProcessorLookupStructures @ 0x1405EC764
 * Callers:
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 KiAllocateProcessorLookupStructures()
{
  struct _LIST_ENTRY *Pool2; // rax
  unsigned int v1; // ebx
  struct _LIST_ENTRY *v2; // rdi
  struct _LIST_ENTRY *v3; // rdx
  __int64 v4; // r9
  struct _LIST_ENTRY v5; // xmm1
  struct _KTHREAD *v6; // rax

  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x48uLL);
  v1 = 0;
  v2 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v3 = (struct _LIST_ENTRY *)&unk_140F26C24;
  v4 = 2LL;
  do
  {
    *Pool2 = *v3;
    Pool2[1] = v3[1];
    Pool2[2] = v3[2];
    Pool2[3] = v3[3];
    Pool2[4] = v3[4];
    Pool2[5] = v3[5];
    Pool2[6] = v3[6];
    Pool2 += 8;
    v5 = v3[7];
    v3 += 8;
    Pool2[-1] = v5;
    --v4;
  }
  while ( v4 );
  v6 = (struct _KTHREAD *)ExAllocatePool2(0x48uLL);
  if ( v6 )
  {
    v6->Header.LockNV = dword_140F26C20;
    KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink = v2;
    KiSupervisorXStateFeaturesLock.SchedulerApc.Thread = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
