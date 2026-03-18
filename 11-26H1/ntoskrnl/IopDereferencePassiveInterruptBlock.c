/*
 * XREFs of IopDereferencePassiveInterruptBlock @ 0x1402C4FA4
 * Callers:
 *     IopPassiveInterruptWorker @ 0x1402C4E20 (IopPassiveInterruptWorker.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1407A3BB8 (IopDestroyPassiveInterruptBlock.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     IopReleaseGlobalPassiveInterruptListLock @ 0x1402C507C (IopReleaseGlobalPassiveInterruptListLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x1402C50B8 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferencePassiveInterruptBlock(PVOID P)
{
  char v2; // si
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // di
  KSPIN_LOCK v5; // rcx
  PVOID *v6; // rax
  __int64 v7; // rcx
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  v2 = 0;
  IopAcquireGlobalPassiveInterruptListLock(&v8);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v3, 12LL);
  }
  KxAcquireSpinLock((PKSPIN_LOCK)P + 7);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 48, 0xFFFFFFFF) == 1 )
  {
    v5 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v6 = (PVOID *)*((_QWORD *)P + 1), *v6 != P) )
      __fastfail(3u);
    *v6 = (PVOID)v5;
    v2 = 1;
    *(_QWORD *)(v5 + 8) = v6;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)P + 7);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  LOBYTE(v7) = v8;
  IopReleaseGlobalPassiveInterruptListLock(v7);
  if ( v2 )
    ExFreePoolWithTag(P, 0x6269704Bu);
}
