/*
 * XREFs of ExpCleanupAutoExpandPushLock @ 0x14027D830
 * Callers:
 *     FsRtlFreeAePushLock @ 0x1405B8070 (FsRtlFreeAePushLock.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExpSaAllocatorFree @ 0x14027D8B0 (ExpSaAllocatorFree.c)
 */

void __fastcall ExpCleanupAutoExpandPushLock(__int64 a1)
{
  int v1; // r8d
  __int64 v2; // r9
  unsigned int v3; // ecx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rcx

  v1 = *(_DWORD *)(a1 + 8);
  if ( (v1 & 1) != 0 )
  {
    v2 = ((v1 & 0xFFFFFFF8) >> 13) & 0x3FFFF;
    _BitScanReverse(&v3, v2);
    CurrentThread = KeGetCurrentThread();
    v5 = *(struct _KTHREAD **)(*(_QWORD *)(*(_QWORD *)(ExSaPageGroupDescriptorArrayLock.QuantumTarget + 8LL * (v3 - 2))
                                         + 8 * (v2 ^ (unsigned int)(1 << v3))
                                         + 8)
                             + 16LL);
    --CurrentThread->SpecialApcDisable;
    ExpSaAllocatorFree(v5);
    KeLeaveGuardedRegion();
  }
}
