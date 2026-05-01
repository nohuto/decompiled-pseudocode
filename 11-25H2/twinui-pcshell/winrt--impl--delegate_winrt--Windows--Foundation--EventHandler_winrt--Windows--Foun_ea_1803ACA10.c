/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_5c1a0d5a7fd3d129c3b08637b61c63e1___::Invoke @ 0x1803ACA10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B90F0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800FCAD4 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@$$T@Z @ 0x1801CA6F4 (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_5c1a0d5a7fd3d129c3b08637b61c63e1___::Invoke(
        __int64 a1)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)(a1 + 24), &v3) >= 0 && v3 )
  {
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,std::nullptr_t>(
      *(_QWORD *)(a1 + 16) + 712LL,
      *(_QWORD *)(a1 + 16));
    try
    {
      ExperienceManagerUtils::PostToUIThread(
        *(__int64 (__fastcall ****)(ExperienceManagerUtils *, GUID *, LPVOID *))(*(_QWORD *)(a1 + 16) + 48LL),
        *(struct IUnknown **)(a1 + 16),
        (void *)0x401,
        12LL);
    }
    catch ( ... )
    {
      return (unsigned int)*winrt::to_hresult(&v3);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v3);
  return 0LL;
}
