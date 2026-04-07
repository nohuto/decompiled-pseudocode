/*
 * XREFs of ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800A9DAC
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@IEAAKXZ @ 0x1800ABDA4 (-InternalRelease@-$ComPtr@UIDCompositionRenderTargetPartner2@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>>(__int64 a1)
{
  Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner2>::InternalRelease(a1);
  return a1;
}
