/*
 * XREFs of _lambda_21bbf2e079f5591be5df5fdb5b101015_::__lambda_21bbf2e079f5591be5df5fdb5b101015_ @ 0x18045C1D0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_21bbf2e079f5591be5df5fdb5b101015___::_CTaskWrapper__lambda_21bbf2e079f5591be5df5fdb5b101015___ @ 0x18045C328 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_21bbf2e079f5591be5df5fdb5b101015___--_CTask.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z @ 0x180463040 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     ??1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045C844 (--1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_21bbf2e079f5591be5df5fdb5b101015_::__lambda_21bbf2e079f5591be5df5fdb5b101015_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::~OnInputAppRequestedResizeActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued *)(a1 + 40));
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 24));
}
