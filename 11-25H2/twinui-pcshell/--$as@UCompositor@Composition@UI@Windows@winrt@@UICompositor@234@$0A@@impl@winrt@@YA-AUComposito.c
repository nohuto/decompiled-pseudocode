/*
 * XREFs of ??$as@UCompositor@Composition@UI@Windows@winrt@@UICompositor@234@$0A@@impl@winrt@@YA?AUCompositor@Composition@UI@Windows@1@PEAUICompositor@345@@Z @ 0x180488564
 * Callers:
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x180492544 (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Windows::UI::Composition::Compositor,Windows::UI::Composition::ICompositor,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *))
{
  __int64 (__fastcall **v3)(_QWORD, void *, __int64 *); // rax
  int v4; // eax
  int v6; // [rsp+28h] [rbp-20h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    v9 = 0LL;
    v6 = 0;
    v3 = *a2;
    v7 = 0LL;
    v4 = (*v3)(a2, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositor>, &v9);
    winrt::check_hresult(&v8, v4, (__int64)&v6);
    *a1 = v9;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
