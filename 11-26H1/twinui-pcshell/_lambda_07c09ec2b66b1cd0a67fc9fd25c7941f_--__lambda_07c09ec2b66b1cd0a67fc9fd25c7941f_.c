/*
 * XREFs of _lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_::__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_ @ 0x1804685C8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___::_CTaskWrapper__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___ @ 0x180468718 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f___--_CTask.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x18046F438 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18020F160 (--1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_::__lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_(__int64 *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)(a1 + 2));
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
