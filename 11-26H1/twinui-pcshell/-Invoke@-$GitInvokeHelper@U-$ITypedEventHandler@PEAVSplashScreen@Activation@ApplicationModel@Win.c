/*
 * XREFs of ?Invoke@?$GitInvokeHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@UEAAJPEAUISplashScreen@Activation@ApplicationModel@4@PEAUIInspectable@@@Z @ 0x180306850
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Localize@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803068F0 (-Localize@-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr,2>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  v6 = Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Localize(
         a1 + 48,
         &GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
         &v8);
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, a2, a3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  return (unsigned int)v6;
}
