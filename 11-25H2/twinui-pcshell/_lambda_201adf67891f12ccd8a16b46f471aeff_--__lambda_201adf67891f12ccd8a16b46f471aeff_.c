/*
 * XREFs of _lambda_201adf67891f12ccd8a16b46f471aeff_::__lambda_201adf67891f12ccd8a16b46f471aeff_ @ 0x1800D5888
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___ @ 0x1800D5764 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_201adf67891f12ccd8a16b46f471aeff___.c)
 *     _lambda_76ebab358cbfe9072c97f7416da7a23a_::__lambda_76ebab358cbfe9072c97f7416da7a23a_ @ 0x18022F4BC (_lambda_76ebab358cbfe9072c97f7416da7a23a_--__lambda_76ebab358cbfe9072c97f7416da7a23a_.c)
 * Callees:
 *     ??1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x180041060 (--1UnpresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_201adf67891f12ccd8a16b46f471aeff_::__lambda_201adf67891f12ccd8a16b46f471aeff_(__int64 *a1)
{
  CFramePresentationTelemetry::UnpresentWindow::~UnpresentWindow((CFramePresentationTelemetry::UnpresentWindow *)(a1 + 2));
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
