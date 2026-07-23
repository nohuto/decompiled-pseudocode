/*
 * XREFs of ?ExpScanProcessorLookasideLists@@YAXKK@Z @ 0x140AD80F8
 * Callers:
 *     ?ExpLookasideMgrPerProcWorkerRoutine@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER@@@Z @ 0x140AD8060 (-ExpLookasideMgrPerProcWorkerRoutine@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER@@@Z.c)
 * Callees:
 *     ExpComputeLookasideDepth @ 0x140428A30 (ExpComputeLookasideDepth.c)
 */

void __fastcall ExpScanProcessorLookasideLists(int a1, int a2)
{
  __int64 v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rcx
  int v6; // edx

  v3 = 11LL;
  v4 = (__int64 *)(KiProcessorBlock[a1] + 2112);
  do
  {
    v5 = *v4;
    if ( *v4 )
    {
      v6 = *(_DWORD *)(v5 + 24) - *(_DWORD *)(v5 + 84);
      *(_DWORD *)(v5 + 84) = *(_DWORD *)(v5 + 24);
      ExpComputeLookasideDepth(v5, v6, a2);
    }
    v4 += 2;
    --v3;
  }
  while ( v3 );
}
