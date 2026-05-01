/*
 * XREFs of _lambda_201adf67891f12ccd8a16b46f471aeff_::__lambda_201adf67891f12ccd8a16b46f471aeff_ @ 0x1800B0878
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___ @ 0x1800B077C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___.c)
 *     _lambda_76ebab358cbfe9072c97f7416da7a23a_::__lambda_76ebab358cbfe9072c97f7416da7a23a_ @ 0x1802203F0 (_lambda_76ebab358cbfe9072c97f7416da7a23a_--__lambda_76ebab358cbfe9072c97f7416da7a23a_.c)
 * Callees:
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x1800AEDB8 (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_201adf67891f12ccd8a16b46f471aeff_::__lambda_201adf67891f12ccd8a16b46f471aeff_(__int64 a1)
{
  CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow((volatile signed __int32 **)(a1 + 16));
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1);
}
