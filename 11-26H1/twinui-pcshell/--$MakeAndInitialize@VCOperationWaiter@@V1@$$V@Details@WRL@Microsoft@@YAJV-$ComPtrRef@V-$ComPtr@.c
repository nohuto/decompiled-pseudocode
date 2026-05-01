/*
 * XREFs of ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@@012@@Z @ 0x1802C6290
 * Callers:
 *     ?WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ @ 0x18010D4E0 (-WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18010D834 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ @ 0x18010DABC (-InternalRelease@-$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(
        volatile signed __int32 **a1)
{
  Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(a1);
}
