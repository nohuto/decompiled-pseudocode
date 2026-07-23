/*
 * XREFs of VfIrpDatabaseEntryReleaseLock @ 0x140C3FD80
 * Callers:
 *     IovCancelIrp @ 0x140C26E00 (IovCancelIrp.c)
 *     IovpCallDriver1 @ 0x140C312C8 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140C3187C (IovpCallDriver2.c)
 *     IovpCheckIrpForCriticalTracking @ 0x140C31B4C (IovpCheckIrpForCriticalTracking.c)
 *     VfIoAllocateIrp1 @ 0x140C32484 (VfIoAllocateIrp1.c)
 *     VfIoAllocateIrp2 @ 0x140C324FC (VfIoAllocateIrp2.c)
 *     VfIrpWatermark @ 0x140C32784 (VfIrpWatermark.c)
 *     ViPendingCompleteAfterWait @ 0x140C361C4 (ViPendingCompleteAfterWait.c)
 *     VfPacketReleaseLock @ 0x140C3F3F4 (VfPacketReleaseLock.c)
 *     IovpCompleteRequest2 @ 0x140C4B8AC (IovpCompleteRequest2.c)
 *     IovpCompleteRequest5 @ 0x140C4B918 (IovpCompleteRequest5.c)
 *     VfIoInitializeIrp @ 0x140C4B964 (VfIoInitializeIrp.c)
 *     IovFreeIrpPrivate @ 0x140C4B9D0 (IovFreeIrpPrivate.c)
 *     IovpCompleteRequest1 @ 0x140C4BD80 (IovpCompleteRequest1.c)
 *     VfPendingMoreProcessingRequired @ 0x140C4BF10 (VfPendingMoreProcessingRequired.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140C4BF94 (VfIrpDatabaseEntryFindAndLock.c)
 *     IovpCompleteRequest3 @ 0x140C4C080 (IovpCompleteRequest3.c)
 *     IovpCompleteRequest4 @ 0x140C4C10C (IovpCompleteRequest4.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14064BA3C (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x14064BA84 (ViIrpDatabaseReleaseLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140C276C8 (VfUtilAddressRangeRemoveCheckEmpty.c)
 */

void __fastcall VfIrpDatabaseEntryReleaseLock(__int64 a1)
{
  int v1; // esi
  unsigned __int64 v3; // rdi
  char *v4; // rcx
  char *v5; // rax
  char **v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  KIRQL v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v9 = 0;
  if ( !*(_DWORD *)(a1 + 24) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v9);
    v3 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      guard_dispatch_icall_no_overrides(a1, *(_QWORD *)a1);
      *(_QWORD *)a1 = 0LL;
      VfUtilAddressRangeRemoveCheckEmpty(
        (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v3 >> 12))),
        v3);
    }
    ViIrpDatabaseReleaseLockExclusive(v9);
  }
  if ( !*(_DWORD *)(a1 + 20) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v9);
    if ( !*(_DWORD *)(a1 + 20) )
    {
      v4 = (char *)(a1 + 32);
      v5 = *(char **)(a1 + 32);
      if ( *((_QWORD *)v5 + 1) != a1 + 32 || (v6 = *(char ***)(a1 + 40), *v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      v1 = 1;
      *((_QWORD *)v5 + 1) = v6;
      *(_QWORD *)(a1 + 40) = a1 + 32;
      *(_QWORD *)v4 = v4;
      if ( *(char **)v5 == v5 )
      {
        v7 = (unsigned int)((v5 - (_BYTE *)ViIrpDatabase) >> 4);
        v8 = ViIrpDatabaseAddressRanges;
        v7 *= 2LL;
        *(_QWORD *)(ViIrpDatabaseAddressRanges + 8 * v7) = 0LL;
        *(_QWORD *)(v8 + 8 * v7 + 8) = 0LL;
      }
    }
    ViIrpDatabaseReleaseLockExclusive(v9);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 8), *(_BYTE *)(a1 + 16));
  if ( v1 )
  {
    *(_DWORD *)(a1 + 28) |= 0x80000000;
    guard_dispatch_icall_no_overrides(a1, *(_QWORD *)a1);
  }
}
