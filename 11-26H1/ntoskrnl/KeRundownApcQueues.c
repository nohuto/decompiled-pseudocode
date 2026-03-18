/*
 * XREFs of KeRundownApcQueues @ 0x140955B24
 * Callers:
 *     sub_140713090 @ 0x140713090 (sub_140713090.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KiFlushQueueApc @ 0x1402C4618 (KiFlushQueueApc.c)
 *     KeForceResumeThread @ 0x1402C5E5C (KeForceResumeThread.c)
 *     KiAcquireReleaseThreadLock @ 0x140499D24 (KiAcquireReleaseThreadLock.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall KeRundownApcQueues(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rsi
  _QWORD *result; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  unsigned __int8 CurrentIrql; // cl

  --*(_WORD *)(a1 + 484);
  *(_DWORD *)(a1 + 116) &= ~0x4000u;
  KiAcquireReleaseThreadLock(a1);
  KeForceResumeThread(a1, v2, v3);
  KeLeaveCriticalRegionThread(a1, v4, v5);
  v6 = KiFlushQueueApc(a1, 1);
  v8 = v6;
  if ( v6 )
  {
    v10 = v6;
    do
    {
      v11 = v10 - 2;
      v10 = (_QWORD *)*v10;
      if ( v11[5] )
        guard_dispatch_icall_no_overrides((__int64)v11, v7);
      else
        ExFreePoolWithTag(v11, 0);
    }
    while ( v10 != v8 );
  }
  result = KiFlushQueueApc(a1, 0);
  if ( result || *(_DWORD *)(a1 + 484) )
  {
    CurrentIrql = KeGetCurrentIrql();
    KeBugCheckEx(0x20u, (ULONG_PTR)result, *(unsigned int *)(a1 + 484), CurrentIrql, 0LL);
  }
  return result;
}
