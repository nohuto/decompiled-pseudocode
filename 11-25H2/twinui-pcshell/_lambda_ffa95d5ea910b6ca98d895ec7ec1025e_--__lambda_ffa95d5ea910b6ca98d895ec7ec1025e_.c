/*
 * XREFs of _lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::__lambda_ffa95d5ea910b6ca98d895ec7ec1025e_ @ 0x180308ADC
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_ffa95d5ea910b6ca98d895ec7ec1025e___ @ 0x180308700 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_ffa95d5ea910b6ca98d895ec7ec1025e___.c)
 *     _lambda_6df05c95eefd3a852cd1630e41907728_::__lambda_6df05c95eefd3a852cd1630e41907728_ @ 0x180308A8C (_lambda_6df05c95eefd3a852cd1630e41907728_--__lambda_6df05c95eefd3a852cd1630e41907728_.c)
 * Callees:
 *     ??1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ @ 0x18022FB10 (--1PresentWindow@CFramePresentationTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::__lambda_ffa95d5ea910b6ca98d895ec7ec1025e_(__int64 *a1)
{
  CFramePresentationTelemetry::PresentWindow::~PresentWindow((CFramePresentationTelemetry::PresentWindow *)(a1 + 2));
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
