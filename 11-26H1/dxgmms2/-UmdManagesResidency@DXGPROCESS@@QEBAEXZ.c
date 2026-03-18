/*
 * XREFs of ?UmdManagesResidency@DXGPROCESS@@QEBAEXZ @ 0x14003B53C
 * Callers:
 *     UpdateProcessStatusBudgetingInfo @ 0x1400A6654 (UpdateProcessStatusBudgetingInfo.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400C7AF4 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1400E2790 (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x14010C244 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGPROCESS::UmdManagesResidency(DXGPROCESS *this)
{
  char v1; // r8
  _DWORD *v2; // rdx

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 408);
  if ( *((_BYTE *)this + 337) && (*v2 & 2) == 0 || (*v2 & 1) != 0 )
    return 1;
  return v1;
}
