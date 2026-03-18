/*
 * XREFs of KiConfigureCooperativeIdleSearchTargets @ 0x1405EAB38
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140BF5030 (KiInitializeDynamicProcessorDpc.c)
 *     KiConfigureAllSchedulingInformation @ 0x140CC99F0 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiConfigureCooperativeIdleSearchContextTargets @ 0x1405EAA58 (KiConfigureCooperativeIdleSearchContextTargets.c)
 */

__int64 KiConfigureCooperativeIdleSearchTargets()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 i; // rdi
  unsigned int v2; // ebp
  __int64 v3; // r14
  _QWORD *v4; // rsi
  __int64 v5; // r8
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v2 = 0;
    v3 = KiProcessorBlock[i];
    v4 = (_QWORD *)(v3 + 37960);
    do
    {
      v5 = v4[2];
      if ( v5 && v5 == *v4 )
        KiConfigureCooperativeIdleSearchContextTargets(v3, v2, v5);
      ++v2;
      ++v4;
    }
    while ( v2 < 2 );
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
