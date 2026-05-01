/*
 * XREFs of _lambda_ce5f0a13437f36dbd45420a359bd80e9_::__lambda_ce5f0a13437f36dbd45420a359bd80e9_ @ 0x18045C2E8
 * Callers:
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18017B660 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ce5f0a13437f36dbd45420a359bd80e9___::_CTaskWrapper__lambda_ce5f0a13437f36dbd45420a359bd80e9___ @ 0x18045C468 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ce5f0a13437f36dbd45420a359bd80e9___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802227EC (--1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_ce5f0a13437f36dbd45420a359bd80e9_::__lambda_ce5f0a13437f36dbd45420a359bd80e9_(__int64 *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::~OnApplicationFrameCommand((TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)(a1 + 5));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 3);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
