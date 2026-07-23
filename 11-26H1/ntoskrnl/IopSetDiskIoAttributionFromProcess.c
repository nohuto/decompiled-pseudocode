/*
 * XREFs of IopSetDiskIoAttributionFromProcess @ 0x14026E310
 * Callers:
 *     IoPageReadEx @ 0x14026B300 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14026C270 (IoSetDiskIoAttributionFromThread.c)
 *     IoSetIoAttributionIrp @ 0x1404DF300 (IoSetIoAttributionIrp.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402692E4 (IopSetDiskIoAttributionExtension.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall IopSetDiskIoAttributionFromProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  KIRQL v6; // al
  __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  if ( !*(_QWORD *)(a2 + 1752) )
    return 3221226021LL;
  v6 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  v7 = *(_QWORD *)(a2 + 1752);
  v8 = v6;
  if ( v7 )
    v2 = *(_QWORD *)(v7 + 24);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(&IopDiskIoAttributionLock, 0xBFFFFFFF);
    _InterlockedDecrement(&IopDiskIoAttributionLock);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&IopDiskIoAttributionLock, retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
  __writecr8(v8);
  if ( !v7 )
    return 3221226021LL;
  result = IopSetDiskIoAttributionExtension(a1, v2, (__int64)KeGetCurrentThread(), 0);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
