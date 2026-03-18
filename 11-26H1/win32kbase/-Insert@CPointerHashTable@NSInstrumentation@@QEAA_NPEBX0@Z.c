/*
 * XREFs of ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x140114080
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x140113F54 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 * Callees:
 *     RIMLockShared @ 0x14006F3F0 (RIMLockShared.c)
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B7020 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400B73C4 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA?AW4EInsertResult@12@PEBX0@Z @ 0x1401142AC (-InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA-AW4EInsertResult@12@PEBX0@Z.c)
 *     ?Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ @ 0x1401FD674 (-Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ.c)
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
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

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
    W32AcquirePushLockExclusiveEx(this);
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
    W32ReleasePushLockExclusiveEx(this);
LABEL_21:
    v9 = inserted == 1;
    return !v9;
  }
  v9 = inserted == 1;
  if ( inserted == 1 )
  {
    W32AcquirePushLockExclusiveEx(this);
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
    v10 = NSInstrumentation::CPointerHashTable::Resize(this);
    _InterlockedAdd((volatile signed __int32 *)this + 7, 0xFFFFFFFF);
    if ( !v10 )
    {
      W32ReleasePushLockExclusiveEx(this);
      return 0;
    }
    W32ReleasePushLockExclusiveEx(this);
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
