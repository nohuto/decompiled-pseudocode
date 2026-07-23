/*
 * XREFs of KiRequestSchedulerApcThread @ 0x1405F93EC
 * Callers:
 *     KiSlistRollbackDpc @ 0x1405E7EB0 (KiSlistRollbackDpc.c)
 * Callees:
 *     KiInsertQueueApc @ 0x14020B150 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x14020B2C0 (KiSignalThreadForApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 */

__int64 __fastcall KiRequestSchedulerApcThread(__int64 a1)
{
  __int64 v2; // rsi
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 result; // rax
  unsigned __int8 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v2 = a1 + 648;
  KiAcquireThreadLockRaiseToDpc(a1, &v5);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 && !*(_BYTE *)(v2 + 82) )
  {
    *(_BYTE *)(v2 + 82) = 1;
    KiInsertQueueApc(v2);
    KiSignalThreadForApc((__int64)CurrentPrcb, v2, v5, 0);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  result = v5;
  __writecr8(v5);
  return result;
}
