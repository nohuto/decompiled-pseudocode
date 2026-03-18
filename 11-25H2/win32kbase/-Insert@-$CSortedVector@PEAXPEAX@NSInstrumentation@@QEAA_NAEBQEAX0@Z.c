/*
 * XREFs of ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1401D39DC
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D770 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D900 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?LowerBound@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEBA_KAEBQEAX@Z @ 0x1401D3C14 (-LowerBound@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEBA_KAEBQEAX@Z.c)
 *     ?ReAllocate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z @ 0x1401D3DF0 (-ReAllocate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

char __fastcall NSInstrumentation::CSortedVector<void *,void *>::Insert(
        struct W32_PUSH_LOCK *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  char v6; // di
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF

  GreEnterCriticalRegionAndAcquirePushLockExclusive(a1);
  v6 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)a1 + 4, 0, 1);
  _InterlockedAdd((volatile signed __int32 *)a1 + 7, 1u);
  if ( *((_DWORD *)a1 + 6) )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *((_QWORD *)a1 + 1) = &Event;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)a1 + 4, -1, 0) != 1 )
      KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  }
  v7 = NSInstrumentation::CSortedVector<void *,void *>::LowerBound(a1, a2);
  v8 = *((_QWORD *)a1 + 5);
  v9 = 16 * v7;
  v10 = v7;
  if ( v7 < v8 && (v11 = *((_QWORD *)a1 + 6), *(_QWORD *)(v9 + v11) == *a2) )
  {
    *(_QWORD *)(v9 + v11 + 8) = *a3;
  }
  else
  {
    v12 = *((_QWORD *)a1 + 4);
    if ( v8 != v12 || (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::ReAllocate(a1, 2 * v12) )
    {
      memmove(
        (void *)(v9 + *((_QWORD *)a1 + 6) + 16),
        (const void *)(v9 + *((_QWORD *)a1 + 6)),
        16 * (*((_QWORD *)a1 + 5) - v10));
      v13 = *((_QWORD *)a1 + 6);
      *(_QWORD *)(v9 + v13) = *a2;
      *(_QWORD *)(v9 + v13 + 8) = *a3;
      ++*((_QWORD *)a1 + 5);
    }
    else
    {
      v6 = 0;
    }
  }
  _InterlockedAdd((volatile signed __int32 *)a1 + 7, 0xFFFFFFFF);
  W32ReleasePushLockExclusive(a1);
  return v6;
}
