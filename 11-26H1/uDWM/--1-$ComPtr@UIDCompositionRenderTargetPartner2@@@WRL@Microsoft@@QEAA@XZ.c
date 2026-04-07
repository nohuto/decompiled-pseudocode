/*
 * XREFs of ??1?$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@QEAA@XZ @ 0x1800AA004
 * Callers:
 *     _CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor$5 @ 0x1800E8F63 (_CDesktopManager--CreateMonitorRenderTargets_--_1_--dtor$5.c)
 *     _CDesktopManager::CreateMonitorRenderTargets_::_1_::dtor$9 @ 0x1800E8F99 (_CDesktopManager--CreateMonitorRenderTargets_--_1_--dtor$9.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>::~ComPtr<IDCompositionRenderTargetPartner2>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>::InternalRelease(a1);
}
