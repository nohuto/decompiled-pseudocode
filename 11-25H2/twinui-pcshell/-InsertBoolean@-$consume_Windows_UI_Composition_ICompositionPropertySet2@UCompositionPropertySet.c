/*
 * XREFs of ?InsertBoolean@?$consume_Windows_UI_Composition_ICompositionPropertySet2@UCompositionPropertySet@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@_N@Z @ 0x1804957E8
 * Callers:
 *     ?DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@34567@@Z @ 0x180494DF0 (-DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationT.c)
 *     ?InitializeCustomPropertiesForSwitch@CAppThumbnailWindow@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@@Z @ 0x180495610 (-InitializeCustomPropertiesForSwitch@CAppThumbnailWindow@@AEAAXAEBUInputGestureOperation@Input@I.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet2<winrt::Windows::UI::Composition::CompositionPropertySet>::InsertBoolean(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        char a3)
{
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  int v11; // [rsp+28h] [rbp-18h] BYREF
  __int128 v12; // [rsp+30h] [rbp-10h]
  int v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  v5 = *a1;
  if ( v5 )
  {
    v14 = 0LL;
    v6 = (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionPropertySet2>, &v14);
    v7 = v14;
    v10 = v14;
  }
  else
  {
    v6 = 0;
    v10 = 0LL;
    v7 = 0LL;
  }
  v11 = 0;
  v12 = 0LL;
  winrt::check_hresult(&v13, v6, (__int64)&v11);
  v11 = 0;
  v12 = 0LL;
  LOBYTE(v8) = a3;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 48LL))(v7, *a2, v8);
  winrt::check_hresult(&v13, v9, (__int64)&v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
}
