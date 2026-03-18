/*
 * XREFs of CmpLockDeletedHashEntryExclusiveByKcb @ 0x1408B9E68
 * Callers:
 *     CmpDiscardKcb @ 0x1408B9D6C (CmpDiscardKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C3970 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408C4DC0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x1408C8740 (CmpReferenceHive.c)
 */

__int64 __fastcall CmpLockDeletedHashEntryExclusiveByKcb(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v5; // rsi
  unsigned __int64 *v6; // rdi
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rbx
  __int64 result; // rax

  v5 = *(_QWORD *)(BugCheckParameter4 + 32);
  v6 = (unsigned __int64 *)(*(_QWORD *)(v5 + 1664)
                          + 24
                          * ((unsigned int)(*(_DWORD *)(v5 + 1672) - 1) & ((unsigned int)(101027
                                                                                        * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9))));
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)v6, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v6[1] = (unsigned __int64)KeGetCurrentThread();
  result = CmpReferenceHive(v5);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x51u, 0x17uLL, v5, 8uLL, BugCheckParameter4);
  return result;
}
