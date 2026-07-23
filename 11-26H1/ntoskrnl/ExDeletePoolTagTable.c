/*
 * XREFs of ExDeletePoolTagTable @ 0x1406CFB68
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MmFreeIndependentPages @ 0x1402EADC0 (MmFreeIndependentPages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExDeletePoolTagTable(unsigned int a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  bool v5; // zf

  v1 = a1;
  v2 = *(&stru_140EFF2C0.ThreadLock + a1);
  v3 = 80 * ((__int64)stru_140EFF2C0.StackLimit + 1);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  v5 = KiIrqlFlags == 0;
  *(&stru_140EFF2C0.ThreadLock + v1) = 0LL;
  if ( !v5 )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return MmFreeIndependentPages(v2, v3);
}
