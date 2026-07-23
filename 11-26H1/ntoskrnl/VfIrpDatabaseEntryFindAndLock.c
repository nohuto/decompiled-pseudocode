/*
 * XREFs of VfIrpDatabaseEntryFindAndLock @ 0x140C4BF94
 * Callers:
 *     IovCancelIrp @ 0x140C26E00 (IovCancelIrp.c)
 *     IovpCallDriver1 @ 0x140C312C8 (IovpCallDriver1.c)
 *     IovpCheckIrpForCriticalTracking @ 0x140C31B4C (IovpCheckIrpForCriticalTracking.c)
 *     VfIrpWatermark @ 0x140C32784 (VfIrpWatermark.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140C3FCAC (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIoInitializeIrp @ 0x140C4B964 (VfIoInitializeIrp.c)
 *     IovFreeIrpPrivate @ 0x140C4B9D0 (IovFreeIrpPrivate.c)
 *     VfPacketFindAndLock @ 0x140C4BAE8 (VfPacketFindAndLock.c)
 *     IovpCompleteRequest1 @ 0x140C4BD80 (IovpCompleteRequest1.c)
 *     VfPendingMoreProcessingRequired @ 0x140C4BF10 (VfPendingMoreProcessingRequired.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x14064BA60 (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x14064BAA4 (ViIrpDatabaseReleaseLockShared.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140C3FD80 (VfIrpDatabaseEntryReleaseLock.c)
 *     ViIrpDatabaseFindPointer @ 0x140C3FEF8 (ViIrpDatabaseFindPointer.c)
 *     VfUtilAddressRangeFitNoLock @ 0x140C4C01C (VfUtilAddressRangeFitNoLock.c)
 */

__int64 __fastcall VfIrpDatabaseEntryFindAndLock(unsigned __int64 a1)
{
  __int64 v1; // rdi
  volatile signed __int32 *Pointer; // rax
  KIRQL v5; // bl
  KIRQL v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v6 = 0;
  if ( VfIrpDatabaseInitialized
    && (unsigned int)VfUtilAddressRangeFitNoLock(
                       ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (a1 >> 12)),
                       a1,
                       a1 + 208) )
  {
    ViIrpDatabaseAcquireLockShared(&v6);
    Pointer = (volatile signed __int32 *)ViIrpDatabaseFindPointer(a1);
    v1 = (__int64)Pointer;
    if ( Pointer )
    {
      _InterlockedIncrement(Pointer + 5);
      v5 = v6;
      ViIrpDatabaseReleaseLockShared(v6);
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 8));
      *(_BYTE *)(v1 + 16) = v5;
      _InterlockedDecrement((volatile signed __int32 *)(v1 + 20));
      if ( !*(_DWORD *)(v1 + 24) )
      {
        VfIrpDatabaseEntryReleaseLock(v1);
        return 0LL;
      }
    }
    else
    {
      ViIrpDatabaseReleaseLockShared(v6);
    }
  }
  return v1;
}
