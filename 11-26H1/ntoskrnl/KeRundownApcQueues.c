/*
 * XREFs of KeRundownApcQueues @ 0x14094BFD8
 * Callers:
 *     sub_140717D80 @ 0x140717D80 (sub_140717D80.c)
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KiFlushQueueApc @ 0x14030F2D8 (KiFlushQueueApc.c)
 *     KeForceResumeThread @ 0x140310AFC (KeForceResumeThread.c)
 *     KiAcquireReleaseThreadLock @ 0x140493874 (KiAcquireReleaseThreadLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall KeRundownApcQueues(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rsi
  _QWORD *result; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  unsigned __int8 CurrentIrql; // cl

  --*(_WORD *)(a1 + 484);
  *(_DWORD *)(a1 + 116) &= ~0x4000u;
  KiAcquireReleaseThreadLock(a1);
  KeForceResumeThread(a1, v2, v3);
  KeLeaveCriticalRegionThread(a1);
  v4 = KiFlushQueueApc(a1, 1);
  v6 = v4;
  if ( v4 )
  {
    v8 = v4;
    do
    {
      v9 = v8 - 2;
      v8 = (_QWORD *)*v8;
      if ( v9[5] )
        guard_dispatch_icall_no_overrides((__int64)v9, v5);
      else
        ExFreePoolWithTag(v9, 0);
    }
    while ( v8 != v6 );
  }
  result = KiFlushQueueApc(a1, 0);
  if ( result || *(_DWORD *)(a1 + 484) )
  {
    CurrentIrql = KeGetCurrentIrql();
    KeBugCheckEx(0x20u, (ULONG_PTR)result, *(unsigned int *)(a1 + 484), CurrentIrql, 0LL);
  }
  return result;
}
