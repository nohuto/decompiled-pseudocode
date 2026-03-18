/*
 * XREFs of ?Enumerate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1401D3610
 * Callers:
 *     ?UninitializeWin32PoolTracking@@YAXXZ @ 0x14019A604 (-UninitializeWin32PoolTracking@@YAXXZ.c)
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z @ 0x1401D3564 (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z.c)
 *     ?PoolTagModeGetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@AEBA_KPEAI_KPEA_K@Z @ 0x1401D3C68 (-PoolTagModeGetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@AEBA_KPEAI_KPEA_K@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D770 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D900 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall NSInstrumentation::CSortedVector<void *,void *>::Enumerate(
        struct W32_PUSH_LOCK *a1,
        void (__fastcall *a2)(__int64, _QWORD, __int64),
        __int64 a3)
{
  unsigned int v6; // esi
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  GreEnterCriticalRegionAndAcquirePushLockExclusive(a1);
  _InterlockedCompareExchange((volatile signed __int32 *)a1 + 4, 0, 1);
  _InterlockedIncrement((volatile signed __int32 *)a1 + 7);
  if ( *((_DWORD *)a1 + 6) )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *((_QWORD *)a1 + 1) = &Event;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)a1 + 4, -1, 0) != 1 )
      KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  }
  if ( *((_QWORD *)a1 + 5) )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *((_QWORD *)a1 + 6);
      v9 = *(_QWORD *)(v8 + 16LL * v7);
      if ( v9 )
      {
        a2(v9, *(_QWORD *)(v8 + 16LL * v7 + 8), a3);
        ++v6;
      }
      ++v7;
    }
    while ( (unsigned __int64)v6 < *((_QWORD *)a1 + 5) );
  }
  _InterlockedAdd((volatile signed __int32 *)a1 + 7, 0xFFFFFFFF);
  W32ReleasePushLockExclusive(a1);
}
