/*
 * XREFs of ??$capture@UISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@Windows@winrt@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBUguid@6@@winrt@@YA?AUISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@Windows@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@AEBUguid@0@@Z @ 0x1805947D4
 * Callers:
 *     ?GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBURect@Foundation@67@@Z @ 0x18021BF58 (-GetForWorkArea@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::capture<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,winrt::guid const &>(
        _QWORD *a1,
        __int64 (__fastcall *a2)(__int64, __int64, __int128 *, __int64 *),
        __int64 *a3,
        __int64 a4)
{
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+38h] [rbp-20h] BYREF
  __int128 v9; // [rsp+40h] [rbp-18h]
  _QWORD *v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v10 = a1;
  v11 = 0LL;
  v8 = 0;
  v5 = *a3;
  v9 = 0LL;
  v6 = a2(
         v5,
         a4,
         &winrt::impl::guid_v<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>,
         &v11);
  winrt::check_hresult((int *)&v10, v6, (__int64)&v8);
  *a1 = v11;
  return a1;
}
