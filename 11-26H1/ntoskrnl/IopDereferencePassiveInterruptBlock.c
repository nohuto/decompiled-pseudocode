/*
 * XREFs of IopDereferencePassiveInterruptBlock @ 0x14030FC64
 * Callers:
 *     IopPassiveInterruptWorker @ 0x14030FAE0 (IopPassiveInterruptWorker.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1407A66F8 (IopDestroyPassiveInterruptBlock.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     IopReleaseGlobalPassiveInterruptListLock @ 0x14030FD3C (IopReleaseGlobalPassiveInterruptListLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14030FD78 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
