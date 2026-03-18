/*
 * XREFs of ExAcquireSharedStarveExclusive @ 0x140456270
 * Callers:
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     DifExAcquireSharedStarveExclusiveWrapper @ 0x14064F240 (DifExAcquireSharedStarveExclusiveWrapper.c)
 *     CcPinMappedData @ 0x140A54D50 (CcPinMappedData.c)
 * Callees:
 *     ExpAcquireSharedStarveExclusive @ 0x1402E1B68 (ExpAcquireSharedStarveExclusive.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1404563A4 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall ExAcquireSharedStarveExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  unsigned __int8 v3; // r9
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *CurrentThread; // r8

  v3 = 2 - (Wait != 0);
  if ( (Resource->ReservedLowFlags & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Resource->ReservedLowFlags & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > v3 )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v3, 0LL);
    if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    return ExpFastResourceLegacyAcquireSharedStarveExclusive((ULONG_PTR)Resource);
  else
    return ExpAcquireSharedStarveExclusive((__int64)Resource, Wait);
}
