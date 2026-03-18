/*
 * XREFs of ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x14015C920
 * Callers:
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1401D41B4 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 * Callees:
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D310 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x14000D374 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D770 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D900 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA?AW4EInsertResult@12@PEBX0@Z @ 0x1401D45E8 (-InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA-AW4EInsertResult@12@PEBX0@Z.c)
 *     ?Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ @ 0x1401D4654 (-Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ.c)
 */

bool __fastcall NSInstrumentation::CPointerHashTable::Insert(
        NSInstrumentation::CPointerHashTable *this,
        const void *a2,
        const void *a3)
{
  int i; // eax
  int inserted; // edi
  bool v9; // zf
  bool v10; // al
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Object; // [rsp+48h] [rbp-30h] BYREF

  if ( a2 == (const void *)-1LL )
    return 0;
  _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
  for ( i = *((_DWORD *)this + 7); i; i = *((_DWORD *)this + 7) )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    RIMLockShared((__int64)this);
    W32ReleasePushLockShared(this);
    _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
  }
  inserted = NSInstrumentation::CPointerHashTable::InsertInternal(this, a2, a3);
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  if ( inserted == 2 )
  {
    GreEnterCriticalRegionAndAcquirePushLockExclusive(this);
    _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
    _InterlockedAdd((volatile signed __int32 *)this + 7, 1u);
    if ( *((_DWORD *)this + 6) )
    {
      memset(&Event, 0, sizeof(Event));
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      *((_QWORD *)this + 1) = &Event;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 4, -1, 0) != 1 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
    }
    NSInstrumentation::CPointerHashTable::Resize(this);
    _InterlockedAdd((volatile signed __int32 *)this + 7, 0xFFFFFFFF);
    W32ReleasePushLockExclusive(this);
LABEL_21:
    v9 = inserted == 1;
    return !v9;
  }
  v9 = inserted == 1;
  if ( inserted == 1 )
  {
    GreEnterCriticalRegionAndAcquirePushLockExclusive(this);
    _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
    _InterlockedAdd((volatile signed __int32 *)this + 7, 1u);
    if ( *((_DWORD *)this + 6) )
    {
      memset(&Object, 0, sizeof(Object));
      KeInitializeEvent(&Object, SynchronizationEvent, 0);
      *((_QWORD *)this + 1) = &Object;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 4, -1, 0) != 1 )
        KeWaitForSingleObject(&Object, UserRequest, 0, 0, 0LL);
    }
    v10 = NSInstrumentation::CPointerHashTable::Resize(this);
    _InterlockedAdd((volatile signed __int32 *)this + 7, 0xFFFFFFFF);
    if ( !v10 )
    {
      W32ReleasePushLockExclusive(this);
      return 0;
    }
    W32ReleasePushLockExclusive(this);
    while ( 1 )
    {
      _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
      if ( !*((_DWORD *)this + 7) )
        break;
      NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
      RIMLockShared((__int64)this);
      W32ReleasePushLockShared(this);
    }
    inserted = NSInstrumentation::CPointerHashTable::InsertInternal(this, a2, a3);
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    goto LABEL_21;
  }
  return !v9;
}
