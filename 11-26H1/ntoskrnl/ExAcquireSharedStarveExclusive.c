/*
 * XREFs of ExAcquireSharedStarveExclusive @ 0x14025F880
 * Callers:
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     DifExAcquireSharedStarveExclusiveWrapper @ 0x140652E20 (DifExAcquireSharedStarveExclusiveWrapper.c)
 *     CcPinMappedData @ 0x140A622F0 (CcPinMappedData.c)
 * Callees:
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14025F9B4 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402C3C28 (ExpAcquireSharedStarveExclusive.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall ExAcquireSharedStarveExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  struct _KTHREAD *CurrentThread; // r8
  BOOLEAN v3; // r10
  BOOLEAN v4; // r9

  LOBYTE(CurrentThread) = Resource->ReservedLowFlags;
  v3 = Wait;
  v4 = 2 - (Wait != 0);
  if ( ((unsigned __int8)CurrentThread & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( ((unsigned __int8)CurrentThread & 1) != 0 )
  {
    *(_QWORD *)&Wait = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( Wait > v4 )
      KeBugCheckEx(0x1C6u, 0LL, Wait, v4, 0LL);
    if ( Wait >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !Wait && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  Wait = v3;
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    return ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)Resource);
  else
    return ExpAcquireSharedStarveExclusive(Resource, Wait, CurrentThread, v4);
}
