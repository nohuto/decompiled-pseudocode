/*
 * XREFs of HampConnectionStart @ 0x180004BF0
 * Callers:
 *     HamConnectForStateChangeNotifications @ 0x180002E60 (HamConnectForStateChangeNotifications.c)
 *     HamConnectForServicing @ 0x180004240 (HamConnectForServicing.c)
 *     HamConnectForExtendedExecution @ 0x180004330 (HamConnectForExtendedExecution.c)
 *     HampConnectionCreate @ 0x180004470 (HampConnectionCreate.c)
 * Callees:
 *     RmpClientWnfDestroySubscription @ 0x180004DD0 (RmpClientWnfDestroySubscription.c)
 *     RmSubscriptionStart @ 0x180004E10 (RmSubscriptionStart.c)
 *     memset_0 @ 0x18001C04E (memset_0.c)
 */

__int64 __fastcall HampConnectionStart(__int64 a1)
{
  _QWORD *Heap; // rax
  unsigned int v3; // ebx
  _QWORD *v4; // rdi
  int v5; // eax
  int v6; // ebp

  if ( *(_BYTE *)(a1 + 156) == 6 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x48uLL);
    v3 = 0;
    v4 = Heap;
    if ( Heap )
    {
      memset_0(Heap, 0, 0x48uLL);
      v4[6] = *(_QWORD *)(a1 + 16);
      RtlInitializeSRWLock(v4 + 4);
      v4[3] = v4 + 2;
      v4[2] = v4 + 2;
      *((_DWORD *)v4 + 16) &= ~1u;
      v4[5] = HampConnectionDeliverStateChangePayload;
      v4[1] = a1;
      v5 = TpAllocWork(v4 + 7, RmpClientWnfMessageQueueWorker, v4, 0LL);
      v6 = 0;
      if ( v5 < 0 )
        v6 = v5;
      if ( v6 < 0 || (v6 = RmSubscriptionStart(a1 + 16, v4), v6 < 0) )
      {
        RmpClientWnfDestroySubscription(v4);
        return (unsigned int)v6;
      }
      else
      {
        *(_QWORD *)(a1 + 24) = v4;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return 0;
  }
  return v3;
}
