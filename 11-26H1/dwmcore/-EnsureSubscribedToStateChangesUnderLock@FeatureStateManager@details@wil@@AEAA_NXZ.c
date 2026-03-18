/*
 * XREFs of ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x180222E8C
 * Callers:
 *     ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1801E02BC (-SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANG.c)
 * Callees:
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x180166234 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
        wil::details::FeatureStateManager *this)
{
  _QWORD *v1; // rbx
  FARPROC NtDllProcedureAddress; // rax
  int v4; // eax

  v1 = (_QWORD *)((char *)this + 144);
  if ( *((_QWORD *)this + 18) )
  {
    v4 = 0;
  }
  else
  {
    NtDllProcedureAddress = (FARPROC)g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification;
    *v1 = 0LL;
    if ( NtDllProcedureAddress
      || (NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("RtlRegisterFeatureConfigurationChangeNotification"),
          (g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification = (__int64)NtDllProcedureAddress) != 0) )
    {
      v4 = ((__int64 (__fastcall *)(void (__fastcall *)(__int64), wil::details::FeatureStateManager *, _QWORD, _QWORD *))NtDllProcedureAddress)(
             `wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock'::`5'::_lambda_1_::_lambda_invoker_cdecl_,
             this,
             0LL,
             v1);
    }
    else
    {
      v4 = -1073741511;
    }
  }
  return v4 == 0;
}
