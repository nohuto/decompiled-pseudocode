/*
 * XREFs of KiConfigureAllSchedulingInformation @ 0x140CC99F0
 * Callers:
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 * Callees:
 *     KeInitializeSystemSubNodeEnumerationContext @ 0x1403EDE78 (KeInitializeSystemSubNodeEnumerationContext.c)
 *     KeEnumerateNextSchedulerSubNodeInSystem @ 0x1403EDEC0 (KeEnumerateNextSchedulerSubNodeInSystem.c)
 *     KiConfigureCooperativeIdleSearchTargets @ 0x1405EAB38 (KiConfigureCooperativeIdleSearchTargets.c)
 *     KiConfigureNodeSchedulingInformation @ 0x1405EAC00 (KiConfigureNodeSchedulingInformation.c)
 *     KiConfigureSubNodeShareCounts @ 0x1405EADD8 (KiConfigureSubNodeShareCounts.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405EB014 (KiFinalizeCoreControlBlockAssignment.c)
 *     KiConfigureSchedulingInformation @ 0x140BF3AF0 (KiConfigureSchedulingInformation.c)
 */

__int64 __fastcall KiConfigureAllSchedulingInformation(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 j; // rbx
  __int128 i; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = 0LL;
  v7 = 0LL;
  for ( i = 0LL; (unsigned int)v2 < (unsigned int)KeNumberProcessors_0; v2 = (unsigned int)(v2 + 1) )
    KiConfigureSchedulingInformation(KiProcessorBlock[v2]);
  for ( j = 0LL; (unsigned int)j < (unsigned int)KeNumberProcessors_0; j = (unsigned int)(j + 1) )
    KiFinalizeCoreControlBlockAssignment(KiProcessorBlock[j], a2);
  KeInitializeSystemSubNodeEnumerationContext(&i, 0);
  while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInSystem((__int64)&i, &v7) )
    KiConfigureNodeSchedulingInformation(v7);
  KiConfigureSubNodeShareCounts();
  return KiConfigureCooperativeIdleSearchTargets();
}
