/*
 * XREFs of KiLogUserCetSetContextIpValidationFailure @ 0x1403D7700
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1403D5A70 (KiContinuePreviousModeUser.c)
 *     KeVerifyContextIpForUserCet @ 0x1403D72A0 (KeVerifyContextIpForUserCet.c)
 *     KeVerifyContextRecord @ 0x1403D7370 (KeVerifyContextRecord.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall KiLogUserCetSetContextIpValidationFailure(int a1, int a2, __int64 a3, unsigned __int8 a4)
{
  int v5; // esi
  struct _EX_RUNDOWN_REF *Process; // rdi
  signed __int32 Ptr_high; // eax
  signed __int32 v10; // ett
  __int64 Pool2; // rbx

  v5 = a4;
  Process = (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->Process;
  _m_prefetchw((char *)&Process[234].Ptr + 4);
  Ptr_high = HIDWORD(Process[234].Ptr);
  do
  {
    v10 = Ptr_high;
    Ptr_high = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&Process[234].Ptr + 1,
                 Ptr_high | 0x80000,
                 Ptr_high);
  }
  while ( v10 != Ptr_high );
  if ( (Ptr_high & 0x80000) == 0 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      if ( ExAcquireRundownProtection_0(Process + 61) )
      {
        ObfReferenceObjectWithTag(Process, 0x746C6644u);
        *(_QWORD *)(Pool2 + 24) = Pool2;
        *(_QWORD *)(Pool2 + 16) = KiLogUserCetSetContextIpValidationFailureWorker;
        *(_QWORD *)Pool2 = 0LL;
        *(_DWORD *)(Pool2 + 32) = a1;
        *(_QWORD *)(Pool2 + 40) = Process;
        *(_QWORD *)(Pool2 + 48) = a3;
        *(_DWORD *)(Pool2 + 56) = v5;
        *(_DWORD *)(Pool2 + 60) = a2;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
      }
      else
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
    }
  }
}
