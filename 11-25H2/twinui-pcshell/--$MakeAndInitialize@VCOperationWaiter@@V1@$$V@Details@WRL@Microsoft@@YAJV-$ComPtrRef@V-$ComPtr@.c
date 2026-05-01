/*
 * XREFs of ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@@012@@Z @ 0x1802CEDD0
 * Callers:
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180084870 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 *     ?WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ @ 0x1801B9450 (-WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ @ 0x180084ADC (-InternalRelease@-$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(
        volatile signed __int32 **a1)
{
  Microsoft::WRL::ComPtr<COperationWaiter>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(a1);
}
