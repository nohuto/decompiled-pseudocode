/*
 * XREFs of ?InsertExpressionKeyFrame@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@MAEBUhstring@param@3@@Z @ 0x1804A679C
 * Callers:
 *     ?CreateTriggerToCachePositionX@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@@Z @ 0x1804A5990 (-CreateTriggerToCachePositionX@CAppThumbnailWindow@@AEAA-AUCompositionAnimationTriggerValuePartn.c)
 *     ?CreateTriggerToCacheScalar@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@0@Z @ 0x1804A5AF0 (-CreateTriggerToCacheScalar@CAppThumbnailWindow@@AEAA-AUCompositionAnimationTriggerValuePartner@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_Windows_UI_Composition_IKeyFrameAnimation<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::InsertExpressionKeyFrame(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  __int64 (__fastcall ***v4)(_QWORD, void *, __int64 *); // rcx
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  int v9; // [rsp+20h] [rbp-30h] BYREF
  __int128 v10; // [rsp+28h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp+10h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a1;
  if ( v4 )
  {
    v11 = 0LL;
    v5 = (**v4)(v4, &winrt::impl::guid_v<winrt::Windows::UI::Composition::IKeyFrameAnimation>, &v11);
    v6 = v11;
    v12 = v11;
  }
  else
  {
    v5 = 0;
    v12 = 0LL;
    v6 = 0LL;
  }
  v9 = 0;
  v10 = 0LL;
  winrt::check_hresult((int *)&v11, v5, (__int64)&v9);
  v9 = 0;
  v10 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 136LL))(v6, v7, *a3);
  winrt::check_hresult((int *)&v11, v8, (__int64)&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
}
