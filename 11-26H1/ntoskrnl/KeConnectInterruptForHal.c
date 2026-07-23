/*
 * XREFs of KeConnectInterruptForHal @ 0x1405F31D0
 * Callers:
 *     HalpCreateInterrupt @ 0x140596DA0 (HalpCreateInterrupt.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeConnectInterruptForHal(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  *(_BYTE *)(a1 + 95) = 1;
  KeGetCurrentPrcb()->InterruptObject[*(unsigned int *)(a1 + 88)] = (void *)a1;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
