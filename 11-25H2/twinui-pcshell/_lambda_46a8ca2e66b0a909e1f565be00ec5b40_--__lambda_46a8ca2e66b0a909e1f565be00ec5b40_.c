/*
 * XREFs of _lambda_46a8ca2e66b0a909e1f565be00ec5b40_::__lambda_46a8ca2e66b0a909e1f565be00ec5b40_ @ 0x18045C228
 * Callers:
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18001EA30 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46a8ca2e66b0a909e1f565be00ec5b40___::_CTaskWrapper__lambda_46a8ca2e66b0a909e1f565be00ec5b40___ @ 0x18045C3A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_46a8ca2e66b0a909e1f565be00ec5b40___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18001EF58 (--1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_46a8ca2e66b0a909e1f565be00ec5b40_::__lambda_46a8ca2e66b0a909e1f565be00ec5b40_(__int64 *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::~OnApplicationFramePositionChanged((TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)(a1 + 3));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
