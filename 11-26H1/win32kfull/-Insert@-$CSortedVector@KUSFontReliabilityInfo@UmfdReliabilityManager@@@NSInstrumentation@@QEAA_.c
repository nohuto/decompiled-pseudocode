/*
 * XREFs of ?Insert@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEAA_NAEBKAEBUSFontReliabilityInfo@UmfdReliabilityManager@@@Z @ 0x14034DFD0
 * Callers:
 *     ?SetFontAsUnreliable@UmfdReliabilityManager@@YAXUUMFD_RELIABILITY_KEY@@@Z @ 0x14034E208 (-SetFontAsUnreliable@UmfdReliabilityManager@@YAXUUMFD_RELIABILITY_KEY@@@Z.c)
 * Callees:
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D2494 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1400D24C0 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?LowerBound@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEBA_KAEBK@Z @ 0x14034E120 (-LowerBound@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@Q.c)
 *     ?ReAllocate@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@AEAA_N_K@Z @ 0x14034E16C (-ReAllocate@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@A.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned long,UmfdReliabilityManager::SFontReliabilityInfo>::Insert(
        NSInstrumentation::CPlatformReaderWriterLock *this,
        _DWORD *a2,
        _BYTE *a3)
{
  char v6; // di
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(this);
  v6 = 1;
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
  v7 = NSInstrumentation::CSortedVector<unsigned long,UmfdReliabilityManager::SFontReliabilityInfo>::LowerBound(
         this,
         a2);
  v8 = *((_QWORD *)this + 5);
  v9 = v7;
  if ( v7 < v8 && (v10 = *((_QWORD *)this + 6), *(_DWORD *)(v10 + 8 * v7) == *a2) )
  {
    *(_BYTE *)(v10 + 8 * v7 + 4) = *a3;
  }
  else
  {
    v11 = *((_QWORD *)this + 4);
    if ( v8 != v11
      || (unsigned __int8)NSInstrumentation::CSortedVector<unsigned long,UmfdReliabilityManager::SFontReliabilityInfo>::ReAllocate(
                            this,
                            2 * v11) )
    {
      memmove(
        (void *)(*((_QWORD *)this + 6) + 8 * v9 + 8),
        (const void *)(*((_QWORD *)this + 6) + 8 * v9),
        8 * (*((_QWORD *)this + 5) - v9));
      v12 = *((_QWORD *)this + 6);
      *(_DWORD *)(v12 + 8 * v9) = *a2;
      *(_BYTE *)(v12 + 8 * v9 + 4) = *a3;
      ++*((_QWORD *)this + 5);
    }
    else
    {
      v6 = 0;
    }
  }
  _InterlockedAdd((volatile signed __int32 *)this + 7, 0xFFFFFFFF);
  NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(this);
  return v6;
}
