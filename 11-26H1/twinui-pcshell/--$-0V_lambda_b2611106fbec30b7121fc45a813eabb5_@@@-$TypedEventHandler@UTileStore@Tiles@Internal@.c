/*
 * XREFs of ??$?0V_lambda_b2611106fbec30b7121fc45a813eabb5_@@@?$TypedEventHandler@UTileStore@Tiles@Internal@Windows@winrt@@UTileStoreChangedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@V_lambda_b2611106fbec30b7121fc45a813eabb5_@@@Z @ 0x18057C524
 * Callers:
 *     ?subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800A1C30 (-subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>(
        _QWORD *a1,
        __int128 *a2)
{
  __int128 v4; // xmm0
  __int64 v5; // xmm1_8
  _DWORD *v7; // [rsp+30h] [rbp+8h]

  v7 = operator new(0x28uLL);
  v4 = *a2;
  v5 = *((_QWORD *)a2 + 2);
  v7[2] = 1;
  *((_OWORD *)v7 + 1) = v4;
  *((_QWORD *)v7 + 4) = v5;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v7 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>,_lambda_b2611106fbec30b7121fc45a813eabb5_>::`vftable';
  *a1 = v7;
  return a1;
}
