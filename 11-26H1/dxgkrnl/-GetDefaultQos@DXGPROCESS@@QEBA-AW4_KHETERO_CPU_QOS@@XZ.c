/*
 * XREFs of ?GetDefaultQos@DXGPROCESS@@QEBA?AW4_KHETERO_CPU_QOS@@XZ @ 0x140074A64
 * Callers:
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N0@Z @ 0x140192EFC (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N0@Z.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x14019345C (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA?AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ @ 0x1401F62C8 (-GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA-AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1403A4680 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPROCESS::GetDefaultQos(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( v1 )
    return *(unsigned int *)(v1 + 140);
  else
    return 7LL;
}
