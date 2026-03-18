/*
 * XREFs of ?Lookup@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1400B8C38
 * Callers:
 *     ?AcquireBackTrace@?$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z @ 0x1400B99AC (-AcquireBackTrace@-$CBackTraceStoreExCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrum.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x140116FFC (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B73C4 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ComputeHash@CBackTrace@NSInstrumentation@@QEBA_KXZ @ 0x1400B9740 (-ComputeHash@CBackTrace@NSInstrumentation@@QEBA_KXZ.c)
 *     ?Lookup@?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@_K@Z @ 0x1400B9A18 (-Lookup@-$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@Q.c)
 */

__int64 __fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Lookup(
        NSInstrumentation::CPrioritizedWriterLock *this,
        NSInstrumentation::CBackTrace *a2)
{
  int v4; // eax
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rcx

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
  v7 = 16 * (v6 % *((unsigned int *)this + 8)) + *((_QWORD *)this + 6);
  RIMLockShared(v7);
  v8 = *(_QWORD *)(v7 + 8);
  if ( v8 )
    v5 = NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>::Lookup(v8, a2, v6);
  W32ReleasePushLockShared((struct W32_PUSH_LOCK *)v7);
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v5;
}
