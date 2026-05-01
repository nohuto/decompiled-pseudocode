/*
 * XREFs of _lambda_fc11afed419eac497169c2fc21e58d6f_::__lambda_fc11afed419eac497169c2fc21e58d6f_ @ 0x1802897EC
 * Callers:
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180289628 (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc11afed419eac497169c2fc21e58d6f___::_CTaskWrapper__lambda_fc11afed419eac497169c2fc21e58d6f___ @ 0x180468858 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fc11afed419eac497169c2fc21e58d6f___--_CTask.c)
 * Callees:
 *     ??1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180201550 (--1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_fc11afed419eac497169c2fc21e58d6f_::__lambda_fc11afed419eac497169c2fc21e58d6f_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::~OnInputAppRequestedHideActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued *)(a1 + 24));
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 8));
}
