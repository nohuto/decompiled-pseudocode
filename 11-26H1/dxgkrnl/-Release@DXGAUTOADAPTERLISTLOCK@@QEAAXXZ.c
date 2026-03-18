/*
 * XREFs of ?Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007C354
 * Callers:
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     DxgkGetMemoryBudgetTarget @ 0x1401F7D40 (DxgkGetMemoryBudgetTarget.c)
 *     DxgkGetYieldPercentage @ 0x1401F86A0 (DxgkGetYieldPercentage.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E5904 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z @ 0x1403EE83C (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z.c)
 *     ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1403FF3C8 (-ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z.c)
 * Callees:
 *     ?ReleaseExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007C390 (-ReleaseExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007C3E0 (-ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGAUTOADAPTERLISTLOCK::Release(DXGAUTOADAPTERLISTLOCK *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 2);
  if ( v1 == 1 )
  {
    DXGADAPTERLISTLOCK::ReleaseShared(*(DXGADAPTERLISTLOCK **)this);
  }
  else if ( v1 == 2 )
  {
    DXGADAPTERLISTLOCK::ReleaseExclusive(*(DXGADAPTERLISTLOCK **)this);
  }
  *((_DWORD *)this + 2) = 0;
}
