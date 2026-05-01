/*
 * XREFs of _lambda_29414a9ca6597666cdb35e84f817c693_::__lambda_29414a9ca6597666cdb35e84f817c693_ @ 0x18045C1F8
 * Callers:
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18001E410 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_29414a9ca6597666cdb35e84f817c693___::_CTaskWrapper__lambda_29414a9ca6597666cdb35e84f817c693___ @ 0x18045C350 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_29414a9ca6597666cdb35e84f817c693___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18001DE08 (--1OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_29414a9ca6597666cdb35e84f817c693_::__lambda_29414a9ca6597666cdb35e84f817c693_(__int64 *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::~OnApplicationChromeOffsetsChanged((TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged *)(a1 + 3));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
