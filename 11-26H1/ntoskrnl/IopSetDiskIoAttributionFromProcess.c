/*
 * XREFs of IopSetDiskIoAttributionFromProcess @ 0x14026EDA0
 * Callers:
 *     IoPageReadEx @ 0x14026BD90 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14026CD00 (IoSetDiskIoAttributionFromThread.c)
 *     IoSetIoAttributionIrp @ 0x1404E5D60 (IoSetIoAttributionIrp.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     IopSetDiskIoAttributionExtension @ 0x140269D74 (IopSetDiskIoAttributionExtension.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
  v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&IopSessionNotificationLock.TrapFrame + 1);
  v7 = *(_QWORD *)(a2 + 1752);
  v8 = v6;
  if ( v7 )
    v2 = *(_QWORD *)(v7 + 24);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    _InterlockedAnd((_DWORD *)&IopSessionNotificationLock.TrapFrame + 1, 0xBFFFFFFF);
    _InterlockedDecrement((_DWORD *)&IopSessionNotificationLock.TrapFrame + 1);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented((char *)&IopSessionNotificationLock.TrapFrame + 4, retaddr);
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
