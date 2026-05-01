/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::TaskbarLayout_winrt::Windows::Foundation::IInspectable___lambda_765be0edd4f010ad67a449942932ffab___::Invoke @ 0x1803B5570
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800B678C (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C34B4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?UndockedSearchAppExperienceManager_ShellViewButtonBoundsChanged@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x18020A950 (-UndockedSearchAppExperienceManager_ShellViewButtonBoundsChanged@SearchAppExperienceManagerTelem.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::TaskbarLayout_winrt::Windows::Foundation::IInspectable___lambda_765be0edd4f010ad67a449942932ffab___::Invoke(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)(a1 + 24), &v4) >= 0 && v4 )
  {
    SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ShellViewButtonBoundsChanged(v2);
    try
    {
      ExperienceManagerUtils::PostToUIThread(
        *(__int64 (__fastcall ****)(ExperienceManagerUtils *, GUID *, LPVOID *))(*(_QWORD *)(a1 + 16) + 48LL),
        *(struct IUnknown **)(a1 + 16),
        (void *)0x401,
        13LL);
    }
    catch ( ... )
    {
      return (unsigned int)*winrt::to_hresult(&v4);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v4);
  return 0LL;
}
