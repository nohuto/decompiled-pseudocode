/*
 * XREFs of CmpNotifyTriggerCheck @ 0x1408D6EE8
 * Callers:
 *     CmpReportNotifyHelper @ 0x1408D6A50 (CmpReportNotifyHelper.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1408D7310 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

BOOLEAN __fastcall CmpNotifyTriggerCheck(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  __int64 SecurityCacheEntryForKcbStack; // rax
  NTSTATUS AccessStatus; // [rsp+60h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+78h] [rbp+20h] BYREF

  ExAcquireFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 != a1 + 16 && (unsigned __int16)*(_DWORD *)(v6 + 56) == 3 )
  {
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
    return 1;
  }
  else
  {
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
    AccessStatus = 0;
    GrantedAccess = 0;
    SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a2, a3, 0LL);
    return SeAccessCheck(
             (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
             (PSECURITY_SUBJECT_CONTEXT)(a1 + 56),
             0,
             0x10u,
             0,
             0LL,
             (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
             1,
             &GrantedAccess,
             &AccessStatus);
  }
}
