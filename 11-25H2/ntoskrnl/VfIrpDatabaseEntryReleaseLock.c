/*
 * XREFs of VfIrpDatabaseEntryReleaseLock @ 0x140B94004
 * Callers:
 *     IovCancelIrp @ 0x140B726F0 (IovCancelIrp.c)
 *     IovpCallDriver1 @ 0x140B7CCD4 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140B7D2A0 (IovpCallDriver2.c)
 *     IovpCheckIrpForCriticalTracking @ 0x140B7D554 (IovpCheckIrpForCriticalTracking.c)
 *     VfIoAllocateIrp1 @ 0x140B7DDC4 (VfIoAllocateIrp1.c)
 *     VfIoAllocateIrp2 @ 0x140B7DE3C (VfIoAllocateIrp2.c)
 *     VfIrpWatermark @ 0x140B7E0A0 (VfIrpWatermark.c)
 *     ViPendingCompleteAfterWait @ 0x140B81D48 (ViPendingCompleteAfterWait.c)
 *     VfPacketReleaseLock @ 0x140B8B530 (VfPacketReleaseLock.c)
 *     VfIoInitializeIrp @ 0x140B96704 (VfIoInitializeIrp.c)
 *     IovpCompleteRequest1 @ 0x140B96A08 (IovpCompleteRequest1.c)
 *     IovpLocalCompletionRoutine @ 0x140B96B90 (IovpLocalCompletionRoutine.c)
 *     IovpCompleteRequest2 @ 0x140B96E04 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest5 @ 0x140B96E70 (IovpCompleteRequest5.c)
 *     IovpCompleteRequest3 @ 0x140B96EBC (IovpCompleteRequest3.c)
 *     IovFreeIrpPrivate @ 0x140B96F50 (IovFreeIrpPrivate.c)
 *     VfPendingMoreProcessingRequired @ 0x140B97020 (VfPendingMoreProcessingRequired.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140B970A4 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x140609708 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x140609750 (ViIrpDatabaseReleaseLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140B731D8 (VfUtilAddressRangeRemoveCheckEmpty.c)
 */

void __fastcall VfIrpDatabaseEntryReleaseLock(__int64 a1)
{
  unsigned __int64 v2; // rbx
  char *v3; // rcx
  char *v4; // rax
  char **v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  KIRQL v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  if ( !*(_DWORD *)(a1 + 24) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v8);
    v2 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      guard_dispatch_icall_no_overrides(a1);
      *(_QWORD *)a1 = 0LL;
      VfUtilAddressRangeRemoveCheckEmpty(
        (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v2 >> 12))),
        v2);
    }
    ViIrpDatabaseReleaseLockExclusive(v8);
  }
  if ( !*(_DWORD *)(a1 + 20) )
  {
    ViIrpDatabaseAcquireLockExclusive(&v8);
    if ( !*(_DWORD *)(a1 + 20) )
    {
      v3 = (char *)(a1 + 32);
      v4 = *(char **)(a1 + 32);
      if ( *((_QWORD *)v4 + 1) != a1 + 32 || (v5 = *(char ***)(a1 + 40), *v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      *((_QWORD *)v4 + 1) = v5;
      *(_QWORD *)(a1 + 40) = a1 + 32;
      *(_QWORD *)v3 = v3;
      if ( *(char **)v4 == v4 )
      {
        v6 = (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned int)((v4 - (_BYTE *)ViIrpDatabase) >> 4));
        *v6 = 0LL;
        v6[1] = 0LL;
      }
    }
    ViIrpDatabaseReleaseLockExclusive(v8);
  }
  v7 = *(_QWORD *)(a1 + 32);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 8), *(_BYTE *)(a1 + 16));
  if ( v7 == a1 + 32 )
  {
    *(_DWORD *)(a1 + 28) |= 0x80000000;
    guard_dispatch_icall_no_overrides(a1);
  }
}
