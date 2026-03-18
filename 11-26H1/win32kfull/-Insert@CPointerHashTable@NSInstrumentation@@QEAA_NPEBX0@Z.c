/*
 * XREFs of ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1400D261C
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1400D1DD0 (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     GreNotifyHwndDpiDirty @ 0x1400D3F38 (GreNotifyHwndDpiDirty.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1402923EC (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400C2AE0 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400C2B30 (-AcquireShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ @ 0x1400D1688 (-Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ.c)
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2494 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D24C0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA?AW4EInsertResult@12@PEBX0@Z @ 0x1400D27C8 (-InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA-AW4EInsertResult@12@PEBX0@Z.c)
 *     ?Wait@CPlatformSingleWaiterSignal@NSInstrumentation@@QEAAXXZ @ 0x14034E3B4 (-Wait@CPlatformSingleWaiterSignal@NSInstrumentation@@QEAAXXZ.c)
 */

bool __fastcall NSInstrumentation::CPointerHashTable::Insert(
        NSInstrumentation::CPointerHashTable *this,
        const void *a2,
        const void *a3)
{
  int inserted; // esi
  bool v7; // zf
  char v9; // al
  _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  if ( a2 == (const void *)-1LL )
    return 0;
  NSInstrumentation::CPrioritizedWriterLock::AcquireShared(this);
  inserted = NSInstrumentation::CPointerHashTable::InsertInternal(this, a2, a3);
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  if ( inserted == 2 )
  {
    NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(this);
    _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
    _InterlockedIncrement((volatile signed __int32 *)this + 7);
    if ( *((_DWORD *)this + 6) )
      NSInstrumentation::CPlatformSingleWaiterSignal::Wait((NSInstrumentation::CPointerHashTable *)((char *)this + 8));
    NSInstrumentation::CPointerHashTable::Resize(this);
    _InterlockedAdd((volatile signed __int32 *)this + 7, 0xFFFFFFFF);
    NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(this);
    goto LABEL_9;
  }
  v7 = inserted == 1;
  if ( inserted != 1 )
    return !v7;
  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(this);
  _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 7);
  if ( *((_DWORD *)this + 6) )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *((_QWORD *)this + 1) = &Event;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 4, -1, 0) != 1 )
      KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  }
  v9 = NSInstrumentation::CPointerHashTable::Resize(this);
  _InterlockedAdd((volatile signed __int32 *)this + 7, 0xFFFFFFFF);
  if ( v9 )
  {
    NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(this);
    NSInstrumentation::CPrioritizedWriterLock::AcquireShared(this);
    inserted = NSInstrumentation::CPointerHashTable::InsertInternal(this, a2, a3);
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
LABEL_9:
    v7 = inserted == 1;
    return !v7;
  }
  NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(this);
  return 0;
}
