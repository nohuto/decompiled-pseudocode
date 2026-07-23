/*
 * XREFs of FsRtlPrivateInsertLock @ 0x14030B510
 * Callers:
 *     FsRtlPrivateCheckWaitingLocks @ 0x14030A7AC (FsRtlPrivateCheckWaitingLocks.c)
 * Callees:
 *     FsRtlPrivateInsertSharedLock @ 0x14030B6D0 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x14030C2F0 (FsRtlPrivateInsertExclusiveLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall FsRtlPrivateInsertLock(_SLIST_ENTRY **a1, __int64 a2, _SLIST_ENTRY *a3)
{
  PSLIST_ENTRY v6; // r14
  _SLIST_ENTRY **v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  PSLIST_ENTRY v11; // rax

  if ( LOBYTE(a3[1].Next) )
  {
    ++dword_140E11554;
    v11 = RtlpInterlockedPopEntrySList(&FsRtlExclusiveLockLookasideList);
    if ( v11
      || (++dword_140E11558,
          (v11 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(
                                 (unsigned int)dword_140E11564,
                                 (unsigned int)dword_140E1156C,
                                 (unsigned int)dword_140E11568)) != 0LL) )
    {
      v7 = &v11[1].Next + 1;
      *(PSLIST_ENTRY)((char *)v11 + 24) = *a3;
      *(PSLIST_ENTRY)((char *)v11 + 40) = a3[1];
      *(PSLIST_ENTRY)((char *)v11 + 56) = a3[2];
      FsRtlPrivateInsertExclusiveLock(a1 + 3, v11);
      goto LABEL_5;
    }
    return 0;
  }
  ++dword_140E115D4;
  v6 = RtlpInterlockedPopEntrySList(&FsRtlSharedLockLookasideList);
  if ( !v6 )
  {
    ++dword_140E115D8;
    v6 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(
                         (unsigned int)dword_140E115E4,
                         (unsigned int)dword_140E115EC,
                         (unsigned int)dword_140E115E8);
    if ( !v6 )
      return 0;
  }
  v7 = &v6->Next + 1;
  *(PSLIST_ENTRY)((char *)v6 + 8) = *a3;
  *(PSLIST_ENTRY)((char *)v6 + 24) = a3[1];
  *(PSLIST_ENTRY)((char *)v6 + 40) = a3[2];
  if ( !(unsigned __int8)FsRtlPrivateInsertSharedLock(a1 + 3, v6) )
  {
    ++dword_140E115DC;
    if ( LOWORD(FsRtlSharedLockLookasideList.Alignment) < (unsigned __int16)word_140E115D0 )
    {
      RtlpInterlockedPushEntrySList(&FsRtlSharedLockLookasideList, v6);
    }
    else
    {
      ++dword_140E115E0;
      guard_dispatch_icall_no_overrides(v6, v8, v9);
    }
    return 0;
  }
LABEL_5:
  *(_QWORD *)(a2 + 120) = v7;
  if ( a3->Next < *a1 )
    *a1 = a3->Next;
  return 1;
}
