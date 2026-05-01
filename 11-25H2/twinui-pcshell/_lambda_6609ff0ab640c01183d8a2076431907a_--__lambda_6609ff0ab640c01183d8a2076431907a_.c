/*
 * XREFs of _lambda_6609ff0ab640c01183d8a2076431907a_::__lambda_6609ff0ab640c01183d8a2076431907a_ @ 0x180291444
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z @ 0x18029115C (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6609ff0ab640c01183d8a2076431907a___::_CTaskWrapper__lambda_6609ff0ab640c01183d8a2076431907a___ @ 0x18045C3F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6609ff0ab640c01183d8a2076431907a___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18001EF2C (--1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

void __fastcall lambda_6609ff0ab640c01183d8a2076431907a_::__lambda_6609ff0ab640c01183d8a2076431907a_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::~OnInputAppRequestedShowActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *)(a1 + 96));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 80));
  std::vector<Geometry::CRect>::_Tidy(a1 + 56);
}
