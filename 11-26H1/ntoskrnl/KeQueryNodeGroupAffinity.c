/*
 * XREFs of KeQueryNodeGroupAffinity @ 0x14020183C
 * Callers:
 *     MiGetClosestNodeWithProcessors @ 0x140200B4C (MiGetClosestNodeWithProcessors.c)
 *     KeQueryNodeActiveAffinity @ 0x140201320 (KeQueryNodeActiveAffinity.c)
 *     ?KiSelectIdealProcessorSetForGroup@@YAXPEAU_GROUP_AFFINITY@@GK_KPEA_KPEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x140201520 (-KiSelectIdealProcessorSetForGroup@@YAXPEAU_GROUP_AFFINITY@@GK_KPEA_KPEAU_KI_IDEAL_PROCESSOR_SET.c)
 *     KeSelectNodeForAffinity @ 0x1404ADF48 (KeSelectNodeForAffinity.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1404D3BB0 (KeQueryLogicalProcessorRelationship.c)
 *     KeSetAffinityProcess @ 0x140505754 (KeSetAffinityProcess.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x140AB7250 (KeBuildLogicalProcessorSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryNodeGroupAffinity(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // r8
  unsigned int i; // edx
  __int64 v6; // rcx
  __int64 v7; // r10

  v2 = 0LL;
  if ( !_bittest64((const signed __int64 *)(a1 + 16), a2) )
    return 0LL;
  for ( i = 0; ; ++i )
  {
    v6 = i;
    if ( i >= *(_DWORD *)(a1 + 48) )
      break;
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6);
    if ( *(_WORD *)(v7 + 136) == a2 )
      v2 |= *(_QWORD *)(v7 + 128);
  }
  return v2;
}
