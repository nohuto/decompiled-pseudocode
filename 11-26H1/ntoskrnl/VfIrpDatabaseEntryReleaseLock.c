/*
 * XREFs of VfIrpDatabaseEntryReleaseLock @ 0x140C39D70
 * Callers:
 *     IovCancelIrp @ 0x140C20DF0 (IovCancelIrp.c)
 *     IovpCallDriver1 @ 0x140C2B2B8 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140C2B86C (IovpCallDriver2.c)
 *     IovpCheckIrpForCriticalTracking @ 0x140C2BB3C (IovpCheckIrpForCriticalTracking.c)
 *     VfIoAllocateIrp1 @ 0x140C2C474 (VfIoAllocateIrp1.c)
 *     VfIoAllocateIrp2 @ 0x140C2C4EC (VfIoAllocateIrp2.c)
 *     VfIrpWatermark @ 0x140C2C774 (VfIrpWatermark.c)
 *     ViPendingCompleteAfterWait @ 0x140C301B4 (ViPendingCompleteAfterWait.c)
 *     VfPacketReleaseLock @ 0x140C393E4 (VfPacketReleaseLock.c)
 *     IovpCompleteRequest2 @ 0x140C4589C (IovpCompleteRequest2.c)
 *     IovpCompleteRequest5 @ 0x140C45908 (IovpCompleteRequest5.c)
 *     VfIoInitializeIrp @ 0x140C45954 (VfIoInitializeIrp.c)
 *     IovFreeIrpPrivate @ 0x140C459C0 (IovFreeIrpPrivate.c)
 *     IovpCompleteRequest1 @ 0x140C45D70 (IovpCompleteRequest1.c)
 *     VfPendingMoreProcessingRequired @ 0x140C45F00 (VfPendingMoreProcessingRequired.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140C45F84 (VfIrpDatabaseEntryFindAndLock.c)
 *     IovpCompleteRequest3 @ 0x140C46070 (IovpCompleteRequest3.c)
 *     IovpCompleteRequest4 @ 0x140C460FC (IovpCompleteRequest4.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x140647E5C (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x140647EA4 (ViIrpDatabaseReleaseLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140C216B8 (VfUtilAddressRangeRemoveCheckEmpty.c)
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
