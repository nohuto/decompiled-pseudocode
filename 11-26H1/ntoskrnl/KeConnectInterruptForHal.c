/*
 * XREFs of KeConnectInterruptForHal @ 0x1405F0860
 * Callers:
 *     HalpCreateInterrupt @ 0x140594620 (HalpCreateInterrupt.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
