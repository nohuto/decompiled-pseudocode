/*
 * XREFs of ?IsForegroundProcess@DXGPROCESS@@QEBA_NXZ @ 0x14004ACA0
 * Callers:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x14003BC64 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEBV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x140100F78 (-CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEBV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_P.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGPROCESS::IsForegroundProcess(DXGPROCESS *this)
{
  __int64 v1; // rcx
  bool result; // al

  if ( (*((_DWORD *)this + 104) & 1) != 0 )
    return 1;
  v1 = *((_QWORD *)this + 8);
  result = 0;
  if ( v1 )
  {
    if ( !*(_DWORD *)(v1 + 140) )
      return 1;
  }
  return result;
}
