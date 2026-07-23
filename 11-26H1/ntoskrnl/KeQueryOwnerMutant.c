/*
 * XREFs of KeQueryOwnerMutant @ 0x1404CB048
 * Callers:
 *     NtQueryMutant @ 0x140B1F520 (NtQueryMutant.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __stdcall KeQueryOwnerMutant(PKMUTANT Mutant, PCLIENT_ID ClientId)
{
  __int64 v2; // r8
  PKMUTANT v4; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // rdx
  _KTHREAD *OwnerThread; // rax

  ClientId->UniqueProcess = 0LL;
  v4 = Mutant;
  ClientId->UniqueThread = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v6 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Mutant) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Mutant, 2LL);
  }
  KiAcquireKobjectLockSafe(&v4->Header.Lock, v6, v2);
  OwnerThread = v4->OwnerThread;
  if ( OwnerThread )
    *ClientId = *(PCLIENT_ID)&OwnerThread[1].CycleTime;
  _InterlockedAnd(&v4->Header.Lock, 0xFFFFFF7F);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
}
