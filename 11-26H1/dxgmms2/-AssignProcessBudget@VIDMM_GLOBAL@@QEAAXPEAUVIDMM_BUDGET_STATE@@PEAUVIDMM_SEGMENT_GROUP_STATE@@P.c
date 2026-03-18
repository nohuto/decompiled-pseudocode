/*
 * XREFs of ?AssignProcessBudget@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1400C6FFC
 * Callers:
 *     ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1400C6B78 (-AssignBudgetsWithinBand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STAT.c)
 *     ?AssignMaximumBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1400C6EF8 (-AssignMaximumBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x14003BC64 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     McTemplateK0xxpqhuuuuu_EtwWriteTransfer @ 0x14003E3D4 (McTemplateK0xxpqhuuuuu_EtwWriteTransfer.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1400C7184 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 */

void __fastcall VIDMM_GLOBAL::AssignProcessBudget(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        struct VIDMM_SEGMENT_GROUP_STATE *a3,
        struct VIDMM_PROCESS_ADAPTER_INFO *a4,
        unsigned __int64 a5)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  VIDMM_PROCESS_BUDGET_STATE *v10; // rbx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  char IsHighPriorityProcess; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  VIDMM_PROCESS_BUDGET_STATE **v17; // r8
  VIDMM_PROCESS_BUDGET_STATE **v18; // rax
  VIDMM_PROCESS_BUDGET_STATE *v19; // rax

  v7 = *(int *)a3;
  v8 = a5;
  v10 = (VIDMM_PROCESS_BUDGET_STATE *)(304LL * *(unsigned __int16 *)a2 + *((_QWORD *)a4 + 1) + 8LL);
  v11 = *((_QWORD *)v10 + v7 + 5);
  if ( v11 && a5 >= v11 )
    v8 = *((_QWORD *)v10 + v7 + 5);
  v12 = *((_QWORD *)a3 + 4);
  v13 = *((_QWORD *)v10 + v7 + 3);
  if ( v8 < v12 )
    v12 = v8;
  *((_QWORD *)v10 + v7 + 3) = v12;
  if ( (byte_14008A201 & 0x20) != 0 )
    McTemplateK0xxpqhuuuuu_EtwWriteTransfer(*((_QWORD *)a4 + 2), v13, (__int64)a3);
  *((_BYTE *)a4 + 179) = *((_BYTE *)a4 + 178);
  *((_BYTE *)a4 + 177) = *((_BYTE *)a4 + 176);
  if ( !(_DWORD)v7 && VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v10) )
  {
    IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*(DXGPROCESS **)(*((_QWORD *)a4 + 2) + 72LL));
    if ( !*(_QWORD *)v10 )
    {
      v15 = *(unsigned __int16 *)a2;
      v16 = *((_QWORD *)this + 5040);
      v17 = (VIDMM_PROCESS_BUDGET_STATE **)(*(_QWORD *)(v16 + 8 * v15) + 600LL);
      if ( IsHighPriorityProcess )
      {
        v19 = *v17;
        if ( *((VIDMM_PROCESS_BUDGET_STATE ***)*v17 + 1) != v17 )
LABEL_12:
          __fastfail(3u);
        *(_QWORD *)v10 = v19;
        *((_QWORD *)v10 + 1) = v17;
        *((_QWORD *)v19 + 1) = v10;
        *v17 = v10;
      }
      else
      {
        v18 = *(VIDMM_PROCESS_BUDGET_STATE ***)(*(_QWORD *)(v16 + 8 * v15) + 608LL);
        if ( *v18 != (VIDMM_PROCESS_BUDGET_STATE *)v17 )
          goto LABEL_12;
        *(_QWORD *)v10 = v17;
        *((_QWORD *)v10 + 1) = v18;
        *v18 = v10;
        v17[1] = v10;
      }
    }
  }
}
