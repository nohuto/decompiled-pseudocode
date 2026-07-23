/*
 * XREFs of ExTryToAcquireResourceExclusiveLite @ 0x1406D28E0
 * Callers:
 *     DifExTryToAcquireResourceExclusiveLiteWrapper @ 0x1406589A0 (DifExTryToAcquireResourceExclusiveLiteWrapper.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x140274BD0 (ExAcquireFastResourceExclusive.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x1406D2A04 (ExpTryToAcquireResourceExclusiveLite.c)
 */

BOOLEAN __stdcall ExTryToAcquireResourceExclusiveLite(PERESOURCE Resource)
{
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *CurrentThread; // r8

  if ( (Resource->ReservedLowFlags & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Resource->ReservedLowFlags & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    return ExAcquireFastResourceExclusive((struct _KTHREAD *)Resource, 0LL, 0);
  else
    return ExpTryToAcquireResourceExclusiveLite();
}
