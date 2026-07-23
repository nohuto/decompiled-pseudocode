/*
 * XREFs of ExpWaitForResource @ 0x14020606C
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402C3C28 (ExpAcquireSharedStarveExclusive.c)
 *     ExpAcquireResourceSharedLite @ 0x1402FEE28 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14042D7E0 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     PerfLogExecutiveResourceWait @ 0x14048F974 (PerfLogExecutiveResourceWait.c)
 *     ExpApplyRewaitBoost @ 0x1404E4968 (ExpApplyRewaitBoost.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall ExpWaitForResource(_DWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // esi
  unsigned int v7; // r14d
  NTSTATUS result; // eax
  unsigned int v9; // edi
  signed __int8 v10; // al
  signed __int8 v11; // tt
  __int64 Pool2; // rax
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-40h] BYREF

  __incgsdword(0x90A8u);
  v6 = 0;
  *(_QWORD *)(a2 + 56) = MEMORY[0xFFFFF78000000008];
  v7 = 0;
  ++a1[17];
  Timeout.QuadPart = -5000000LL;
  while ( 1 )
  {
    result = KeWaitForSingleObject((PVOID)(a2 + 24), WrResource, 0, 0, &Timeout);
    if ( result != 258 )
      break;
    ++v6;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
      PerfLogExecutiveResourceWait(a3, a1, v6);
    Timeout = (LARGE_INTEGER)WheapConfigTableLock.WaitBlock[0].Thread;
    ++v7;
    v9 = a1[21];
    if ( v9 == -1 )
      v9 = ExResourceTimeoutCount;
    if ( v9 )
    {
      if ( v7 > v9 )
      {
        _m_prefetchw(a1 + 20);
        v10 = *((_BYTE *)a1 + 80);
        do
        {
          v11 = v10;
          v10 = _InterlockedCompareExchange8((volatile signed __int8 *)a1 + 80, v10 | 1, v10);
        }
        while ( v11 != v10 );
        if ( (v10 & 1) == 0 )
        {
          v7 = 0;
          DbgPrintEx(0, 0, "Possible deadlock. Use !locks %p to determine the resource owner\n", a1);
          Pool2 = ExAllocatePool2(0x40uLL);
          if ( Pool2 )
          {
            *(_QWORD *)(Pool2 + 16) = ExpResourceTimeoutCaptureLiveDump;
            *(_QWORD *)(Pool2 + 24) = Pool2;
            *(_QWORD *)Pool2 = 0LL;
            *(_QWORD *)(Pool2 + 32) = KeGetCurrentThread();
            *(_QWORD *)(Pool2 + 40) = a1;
            *(_DWORD *)(Pool2 + 48) = a1[17];
            *(_DWORD *)(Pool2 + 52) = v9;
            ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
          }
          __debugbreak();
        }
      }
    }
    ExpApplyRewaitBoost(a1);
  }
  return result;
}
