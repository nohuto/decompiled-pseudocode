/*
 * XREFs of KiResetProcessorTraceBuffer @ 0x1405E5330
 * Callers:
 *     SwapContext @ 0x14072FFB0 (SwapContext.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
