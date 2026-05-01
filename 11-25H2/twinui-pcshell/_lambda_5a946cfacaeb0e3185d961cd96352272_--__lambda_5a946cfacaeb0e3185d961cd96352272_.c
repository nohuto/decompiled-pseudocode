/*
 * XREFs of _lambda_5a946cfacaeb0e3185d961cd96352272_::__lambda_5a946cfacaeb0e3185d961cd96352272_ @ 0x18045C258
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5a946cfacaeb0e3185d961cd96352272___::_CTaskWrapper__lambda_5a946cfacaeb0e3185d961cd96352272___ @ 0x18045C3C8 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5a946cfacaeb0e3185d961cd96352272___--_CTask.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x1804634F4 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18021D030 (--1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_5a946cfacaeb0e3185d961cd96352272_::__lambda_5a946cfacaeb0e3185d961cd96352272_(__int64 *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)(a1 + 2));
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
