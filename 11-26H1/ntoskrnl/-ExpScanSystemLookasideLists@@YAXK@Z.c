/*
 * XREFs of ?ExpScanSystemLookasideLists@@YAXK@Z @ 0x140B8761C
 * Callers:
 *     ?ExpLookasideMgrGeneralWorkerRoutine@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER@@@Z @ 0x140B47830 (-ExpLookasideMgrGeneralWorkerRoutine@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER@@@Z.c)
 * Callees:
 *     ExpComputeLookasideDepth @ 0x140428A30 (ExpComputeLookasideDepth.c)
 */

void __fastcall ExpScanSystemLookasideLists(int a1)
{
  __int64 v2; // rdi
  _GENERAL_LOOKASIDE **p_L; // rbx
  __int64 v4; // rcx
  int v5; // edx

  v2 = 11LL;
  p_L = &KeGetCurrentPrcb()->PPLookasideList[0].L;
  do
  {
    v4 = (__int64)*p_L;
    if ( *p_L )
    {
      v5 = *(_DWORD *)(v4 + 24) - *(_DWORD *)(v4 + 84);
      *(_DWORD *)(v4 + 84) = *(_DWORD *)(v4 + 24);
      ExpComputeLookasideDepth(v4, v5, a1);
    }
    p_L += 2;
    --v2;
  }
  while ( v2 );
}
