/*
 * XREFs of ?Size@?$consume_Windows_Foundation_Collections_IVectorView@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@winrt@@UIWwwFormUrlDecoderEntry@234@@impl@winrt@@QEBA@XZ @ 0x180667348
 * Callers:
 *     ?to_multimap@implementation@Shell@Internal@Windows@winrt@@YA@AEBUWwwFormUrlDecoder@Foundation@45@@Z @ 0x18066749C (-to_multimap@implementation@Shell@Internal@Windows@winrt@@YA@AEBUWwwFormUrlDecoder@Foundation@45.c)
 *     ??0UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180667714 (--0UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$basic_string@GU-$char_trai.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass,winrt::Windows::Foundation::IWwwFormUrlDecoderEntry>::Size(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *))
{
  __int64 (__fastcall ***v1)(_QWORD, void *, __int64 *); // rcx
  int v2; // eax
  __int64 v3; // rbx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-20h] BYREF
  __int128 v7; // [rsp+28h] [rbp-18h]
  unsigned int v8; // [rsp+50h] [rbp+10h] BYREF
  __int64 v9; // [rsp+58h] [rbp+18h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF

  v8 = 0;
  v1 = *a1;
  if ( v1 )
  {
    v9 = 0LL;
    v2 = (**v1)(
           v1,
           &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::IWwwFormUrlDecoderEntry>>,
           &v9);
    v3 = v9;
    v10 = v9;
  }
  else
  {
    v2 = 0;
    v10 = 0LL;
    v3 = 0LL;
  }
  v6 = 0;
  v7 = 0LL;
  winrt::check_hresult((int *)&v9, v2, (__int64)&v6);
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 56LL))(v3, &v8);
  winrt::check_hresult((int *)&v9, v4, (__int64)&v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return v8;
}
