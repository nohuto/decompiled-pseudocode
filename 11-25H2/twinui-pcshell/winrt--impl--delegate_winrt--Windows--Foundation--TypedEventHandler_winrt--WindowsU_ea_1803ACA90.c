/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::hstring___lambda_0519a08fc38090f4f759e59768a110a1___::Invoke @ 0x1803ACA90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B90F0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800FCAD4 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1801AC6D0 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@$$T@Z @ 0x1801CA6F4 (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::hstring___lambda_0519a08fc38090f4f759e59768a110a1___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r10
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v6 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)(a1 + 24), &v6) >= 0 )
  {
    if ( v6 )
    {
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,std::nullptr_t>(
        *(_QWORD *)(a1 + 16) + 712LL,
        *(_QWORD *)(a1 + 16));
      if ( winrt::operator==((__int64 *)(*(_QWORD *)(a1 + 16) + 848LL), &v7) )
      {
        try
        {
          ExperienceManagerUtils::PostToUIThread(
            *(__int64 (__fastcall ****)(ExperienceManagerUtils *, GUID *, LPVOID *))(v4 + 48),
            (struct IUnknown *)v4,
            (void *)0x401,
            12LL);
        }
        catch ( ... )
        {
          return (unsigned int)*winrt::to_hresult(&v6);
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  return 0LL;
}
