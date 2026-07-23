/*
 * XREFs of IvtHandleInterrupt @ 0x1405A9360
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall IvtHandleInterrupt(__int64 a1)
{
  char v2; // si
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // di
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF
  int v7; // [rsp+40h] [rbp+8h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 316) && (*(_DWORD *)(v3 + 220) & 1) != 0 )
  {
    v2 = 1;
    *(_DWORD *)(v3 + 220) = 1;
    _InterlockedOr(v6, 0);
  }
  v7 = *(_DWORD *)(v3 + 52);
  if ( v7 && v7 != -1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 468));
    if ( !*(_BYTE *)(a1 + 464) )
      *(_BYTE *)(a1 + 464) = KiInsertQueueDpc(a1 + 368, 0LL, 0LL, 0LL, 0);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 468));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v2;
}
