/*
 * XREFs of ?Insert@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1400B8B6C
 * Callers:
 *     ?AcquireBackTrace@?$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z @ 0x1400B99AC (-AcquireBackTrace@-$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrum.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x140116FFC (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B73C4 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?EnsureOpaqueBucket@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAV?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@2@PEAVCHashBucket@12@@Z @ 0x1400B96D0 (-EnsureOpaqueBucket@-$CSharedStorage@V-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrume.c)
 *     ?ComputeHash@CBackTrace@NSInstrumentation@@QEBA_KXZ @ 0x1400B9740 (-ComputeHash@CBackTrace@NSInstrumentation@@QEBA_KXZ.c)
 *     ?Insert@?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@@Z @ 0x1400B9780 (-Insert@-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@Q.c)
 */

__int64 __fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Insert(
        NSInstrumentation::CPrioritizedWriterLock *this,
        NSInstrumentation::CBackTrace *a2)
{
  int v4; // eax
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  struct W32_PUSH_LOCK *v7; // rsi
  __int64 v8; // rax

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  v4 = *((_DWORD *)this + 7);
  v5 = 0LL;
  while ( v4 )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    RIMLockShared((__int64)this);
    W32ReleasePushLockShared(this);
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    v4 = *((_DWORD *)this + 7);
  }
  v6 = NSInstrumentation::CBackTrace::ComputeHash(a2);
  v7 = (struct W32_PUSH_LOCK *)(16 * (v6 % *((unsigned int *)this + 8)) + *((_QWORD *)this + 6));
  W32AcquirePushLockExclusiveEx(v7);
  v8 = NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::EnsureOpaqueBucket(
         this,
         v7);
  if ( v8 )
    v5 = NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>::Insert(v8, v6, a2);
  W32ReleasePushLockExclusiveEx(v7);
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v5;
}
