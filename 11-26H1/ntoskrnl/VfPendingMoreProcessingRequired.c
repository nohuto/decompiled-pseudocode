/*
 * XREFs of VfPendingMoreProcessingRequired @ 0x140C4BF10
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140C4B580 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14064BA3C (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x14064BA84 (ViIrpDatabaseReleaseLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140C276C8 (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     ViPendingDelayCompletion @ 0x140C36318 (ViPendingDelayCompletion.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140C3FD80 (VfIrpDatabaseEntryReleaseLock.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140C4BF94 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall VfPendingMoreProcessingRequired(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rdi
  int v12; // eax
  KIRQL v13; // al
  bool v14; // zf
  unsigned __int64 v15; // rbx
  KIRQL v16[24]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0;
  v9 = VfIrpDatabaseEntryFindAndLock(a2);
  v10 = v9;
  if ( v9 )
  {
    if ( a3 == *(_QWORD *)(v9 + 216) )
    {
      v12 = *(_DWORD *)(v9 + 56);
      if ( v12 >= 0 )
      {
        v8 = 1;
        *(_DWORD *)(v10 + 56) = v12 | 0x80000000;
      }
    }
    VfIrpDatabaseEntryReleaseLock(v10);
    if ( v8 )
    {
      v8 = ViPendingDelayCompletion(a1, v10, a3, a4, a5);
      if ( !v8 )
      {
        v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 8));
        v14 = (*(_DWORD *)(v10 + 24))-- == 1;
        *(_BYTE *)(v10 + 16) = v13;
        v16[0] = 0;
        if ( v14 )
        {
          ViIrpDatabaseAcquireLockExclusive(v16);
          v15 = *(_QWORD *)v10;
          guard_dispatch_icall_no_overrides(v10, *(_QWORD *)v10);
          *(_QWORD *)v10 = 0LL;
          VfUtilAddressRangeRemoveCheckEmpty(
            (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v15 >> 12))),
            v15);
          ViIrpDatabaseReleaseLockExclusive(v16[0]);
        }
        _InterlockedDecrement((volatile signed __int32 *)(v10 + 20));
        VfIrpDatabaseEntryReleaseLock(v10);
      }
    }
  }
  return v8;
}
