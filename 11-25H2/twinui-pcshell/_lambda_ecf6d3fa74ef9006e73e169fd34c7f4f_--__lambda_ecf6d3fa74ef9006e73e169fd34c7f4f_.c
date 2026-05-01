/*
 * XREFs of _lambda_ecf6d3fa74ef9006e73e169fd34c7f4f_::__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f_ @ 0x180293250
 * Callers:
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180293090 (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f___::_CTaskWrapper__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f___ @ 0x18045C490 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f___--_CTask.c)
 * Callees:
 *     ??1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18001D72C (--1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_ecf6d3fa74ef9006e73e169fd34c7f4f_::__lambda_ecf6d3fa74ef9006e73e169fd34c7f4f_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::~OnInputAppRequestedHideActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued *)(a1 + 24));
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 8));
}
