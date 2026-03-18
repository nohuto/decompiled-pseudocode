/*
 * XREFs of ??$Enumerate@P6AXPEAX00@Z@?$CSharedStorage@V?$CBackTraceBucketCommon@VCBackTraceStorageUnit@NSInstrumentation@@@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1401D3058
 * Callers:
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z @ 0x1401D3564 (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z.c)
 * Callees:
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D310 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x14000D374 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?WriteBackTraceDumpBufferCallback@NSInstrumentation@@YAXPEAX00@Z @ 0x1401D47E0 (-WriteBackTraceDumpBufferCallback@NSInstrumentation@@YAXPEAX00@Z.c)
 */

void __fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucketCommon<NSInstrumentation::CBackTraceStorageUnit>,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Enumerate<void (*)(void *,void *,void *)>(
        NSInstrumentation::CPrioritizedWriterLock *this,
        __int64 a2,
        void *a3)
{
  int i; // eax
  unsigned int j; // esi
  __int64 v7; // rbp
  void *v8; // r9
  __int64 *v9; // rdi

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  for ( i = *((_DWORD *)this + 7); i; i = *((_DWORD *)this + 7) )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    RIMLockShared((__int64)this);
    W32ReleasePushLockShared(this);
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
  }
  for ( j = 0; j < *((_DWORD *)this + 8); ++j )
  {
    v7 = *((_QWORD *)this + 6) + 16LL * j;
    RIMLockShared(v7);
    v9 = *(__int64 **)(v7 + 8);
    if ( v9 )
    {
      while ( 1 )
      {
        v9 = (__int64 *)*v9;
        if ( !v9 )
          break;
        NSInstrumentation::WriteBackTraceDumpBufferCallback((NSInstrumentation *)v9, v9 + 2, a3, v8);
      }
    }
    W32ReleasePushLockShared((struct W32_PUSH_LOCK *)v7);
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
}
