/*
 * XREFs of VfIrpDatabaseEntryFindAndLock @ 0x140B970A4
 * Callers:
 *     IovCancelIrp @ 0x140B726F0 (IovCancelIrp.c)
 *     IovpCallDriver1 @ 0x140B7CCD4 (IovpCallDriver1.c)
 *     IovpCheckIrpForCriticalTracking @ 0x140B7D554 (IovpCheckIrpForCriticalTracking.c)
 *     VfIrpWatermark @ 0x140B7E0A0 (VfIrpWatermark.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140B93F30 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIoInitializeIrp @ 0x140B96704 (VfIoInitializeIrp.c)
 *     VfPacketFindAndLock @ 0x140B96770 (VfPacketFindAndLock.c)
 *     IovpCompleteRequest1 @ 0x140B96A08 (IovpCompleteRequest1.c)
 *     IovFreeIrpPrivate @ 0x140B96F50 (IovFreeIrpPrivate.c)
 *     VfPendingMoreProcessingRequired @ 0x140B97020 (VfPendingMoreProcessingRequired.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x14060972C (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x140609770 (ViIrpDatabaseReleaseLockShared.c)
 *     VfUtilAddressRangeFitNoLock @ 0x140B721E0 (VfUtilAddressRangeFitNoLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140B94004 (VfIrpDatabaseEntryReleaseLock.c)
 *     ViIrpDatabaseFindPointer @ 0x140B94170 (ViIrpDatabaseFindPointer.c)
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
                       (unsigned __int64 *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (a1 >> 12))),
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
