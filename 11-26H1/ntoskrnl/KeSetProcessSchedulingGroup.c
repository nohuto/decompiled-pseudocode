/*
 * XREFs of KeSetProcessSchedulingGroup @ 0x14051FF00
 * Callers:
 *     PspSetProcessSchedulingGroup @ 0x1409560C4 (PspSetProcessSchedulingGroup.c)
 *     PspTerminateProcess @ 0x140956EB0 (PspTerminateProcess.c)
 * Callees:
 *     KiSetThreadSchedulingGroup @ 0x140203774 (KiSetThreadSchedulingGroup.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

struct _KSCHEDULING_GROUP *__fastcall KeSetProcessSchedulingGroup(__int64 a1, struct _KSCHEDULING_GROUP *a2)
{
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // bl
  struct _KSCHEDULING_GROUP *v5; // r15
  _QWORD *i; // rdi

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  v5 = *(struct _KSCHEDULING_GROUP **)(v3 + 304);
  if ( v5 != a2 )
  {
    for ( i = *(_QWORD **)(v3 + 48); i != (_QWORD *)(v3 + 48); i = (_QWORD *)*i )
      KiSetThreadSchedulingGroup((struct _KTHREAD *)(i - 95), a2);
    *(_QWORD *)(v3 + 304) = a2;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v5;
}
