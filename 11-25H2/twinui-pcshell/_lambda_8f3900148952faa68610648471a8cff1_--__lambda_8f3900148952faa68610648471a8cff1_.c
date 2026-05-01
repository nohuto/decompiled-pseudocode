/*
 * XREFs of _lambda_8f3900148952faa68610648471a8cff1_::__lambda_8f3900148952faa68610648471a8cff1_ @ 0x1800D5E50
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1___::_CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1___ @ 0x1800D573C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8f3900148952faa68610648471a8cff1___--_CTask.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_7bc44750849f411daf11246e0ad82942___ @ 0x1803081B8 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_7bc44750849f411daf11246e0ad82942___.c)
 *     ?FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z @ 0x1804D54E0 (-FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall lambda_8f3900148952faa68610648471a8cff1_::__lambda_8f3900148952faa68610648471a8cff1_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 2);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
