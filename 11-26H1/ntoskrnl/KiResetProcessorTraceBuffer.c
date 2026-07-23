/*
 * XREFs of KiResetProcessorTraceBuffer @ 0x1405E7CA0
 * Callers:
 *     SwapContext @ 0x140734B80 (SwapContext.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 KiResetProcessorTraceBuffer()
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v1; // rax
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  v1 = __readmsr(0x570u);
  if ( (v1 & 1) != 0 )
  {
    __writemsr(0x570u, v1 & 0xFFFFFFFFFFFFFFFEuLL);
    __writemsr(0x561u, 0LL);
    __writemsr(0x571u, 0LL);
    __writemsr(0x570u, v1);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
