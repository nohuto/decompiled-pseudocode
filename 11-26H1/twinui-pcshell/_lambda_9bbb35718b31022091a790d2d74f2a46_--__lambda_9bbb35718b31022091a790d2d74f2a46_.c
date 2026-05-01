/*
 * XREFs of _lambda_9bbb35718b31022091a790d2d74f2a46_::__lambda_9bbb35718b31022091a790d2d74f2a46_ @ 0x18046867C
 * Callers:
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1800BF380 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9bbb35718b31022091a790d2d74f2a46___::_CTaskWrapper__lambda_9bbb35718b31022091a790d2d74f2a46___ @ 0x180468808 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9bbb35718b31022091a790d2d74f2a46___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1800C0434 (--1OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_9bbb35718b31022091a790d2d74f2a46_::__lambda_9bbb35718b31022091a790d2d74f2a46_(__int64 *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::~OnApplicationChromeOffsetsChanged((TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *)(a1 + 3));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
