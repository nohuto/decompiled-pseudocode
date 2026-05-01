/*
 * XREFs of _lambda_3f93e84ee3927ec557523765ee2fe070_::__lambda_3f93e84ee3927ec557523765ee2fe070_ @ 0x180468620
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f93e84ee3927ec557523765ee2fe070___::_CTaskWrapper__lambda_3f93e84ee3927ec557523765ee2fe070___ @ 0x180468768 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3f93e84ee3927ec557523765ee2fe070___--_CTask.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z @ 0x18046EF80 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z.c)
 * Callees:
 *     ??1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180468B50 (--1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_3f93e84ee3927ec557523765ee2fe070_::__lambda_3f93e84ee3927ec557523765ee2fe070_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::~OnInputAppRequestedResizeActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued *)(a1 + 40));
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 24));
}
