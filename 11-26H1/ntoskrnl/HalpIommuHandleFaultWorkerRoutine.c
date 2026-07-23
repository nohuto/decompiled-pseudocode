/*
 * XREFs of HalpIommuHandleFaultWorkerRoutine @ 0x1405A2820
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpIommuDeleteDevice @ 0x140589F30 (HalpIommuDeleteDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuHandleFaultWorkerRoutine(__int64 a1)
{
  __int32 v2; // ebp
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 result; // rax

  v2 = _InterlockedExchange((volatile __int32 *)(a1 + 16), 0);
  if ( v2 != 1 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 104), a1 + 112);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 416));
  *(_BYTE *)(a1 + 420) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 416));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v2 == 1 )
    return HalpIommuDeleteDevice((__int64 *)a1, v4, v5, v6);
  return result;
}
