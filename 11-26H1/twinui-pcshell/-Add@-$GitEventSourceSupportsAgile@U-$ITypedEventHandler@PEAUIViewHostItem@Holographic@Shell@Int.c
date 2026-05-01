/*
 * XREFs of ?Add@?$GitEventSourceSupportsAgile@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1804022A8
 * Callers:
 *     ?RegisterForViewEvents@HolographicPositioner@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180405140 (-RegisterForViewEvents@HolographicPositioner@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Ho.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1801BE958 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ??$CreateGitHelper@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@2@PEAPEAU342@@Z @ 0x1803FFB08 (--$CreateGitHelper@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@P.c)
 */

__int64 __fastcall Windows::Internal::GitEventSourceSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Add(
        __int64 a1,
        __int64 a2,
        struct IUnknown **a3)
{
  int v7; // ebx
  struct IUnknown *v8; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  v7 = Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>>>(
         a2,
         &v8);
  if ( v7 >= 0 )
  {
    if ( v8 )
      v7 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
             a1,
             v8,
             *(void **)(*(_QWORD *)a2 + 24LL),
             a3);
    else
      v7 = -2147024809;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v7;
}
