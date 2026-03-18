/*
 * XREFs of ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1400C8EF0
 * Callers:
 *     ?QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1400C88B0 (-QueryVideoMemoryInfo@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA.c)
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1400C8B24 (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
        VIDMM_GLOBAL *this,
        struct DXGPROCESS *a2,
        enum VIDMM_BUDGET_PRIORITY_BAND *a3,
        enum VIDMM_BUDGET_VISIBILITY_STATE *a4)
{
  int v4; // ecx
  __int64 v5; // rax

  if ( (*((_DWORD *)a2 + 102) & 4) != 0 )
  {
    *(_BYTE *)a3 = 0;
LABEL_3:
    *(_BYTE *)a4 = 0;
    return;
  }
  v4 = *((_DWORD *)a2 + 104);
  if ( (v4 & 1) != 0 || (v5 = *((_QWORD *)a2 + 8)) != 0 && !*(_DWORD *)(v5 + 140) )
  {
    *(_BYTE *)a3 = 1;
    goto LABEL_3;
  }
  *(_BYTE *)a3 = 2;
  *(_BYTE *)a4 = ((v4 & 2) != 0) + 1;
}
