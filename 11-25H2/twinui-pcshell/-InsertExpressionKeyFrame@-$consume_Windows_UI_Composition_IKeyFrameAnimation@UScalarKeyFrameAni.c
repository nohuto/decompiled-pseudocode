/*
 * XREFs of ?InsertExpressionKeyFrame@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@MAEBUhstring@param@3@@Z @ 0x18049589C
 * Callers:
 *     ?CreateTriggerToCachePositionX@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@@Z @ 0x180494AD0 (-CreateTriggerToCachePositionX@CAppThumbnailWindow@@AEAA-AUCompositionAnimationTriggerValuePartn.c)
 *     ?CreateTriggerToCacheScalar@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@0@Z @ 0x180494C30 (-CreateTriggerToCacheScalar@CAppThumbnailWindow@@AEAA-AUCompositionAnimationTriggerValuePartner@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  int v10; // [rsp+28h] [rbp-28h] BYREF
  __int128 v11; // [rsp+30h] [rbp-20h]
  int v12; // [rsp+60h] [rbp+10h] BYREF
  __int64 v13; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a1;
  if ( v4 )
  {
    v13 = 0LL;
    v5 = (**v4)(v4, &winrt::impl::guid_v<winrt::Windows::UI::Composition::IKeyFrameAnimation>, &v13);
    v6 = v13;
    v9 = v13;
  }
  else
  {
    v5 = 0;
    v9 = 0LL;
    v6 = 0LL;
  }
  v10 = 0;
  v11 = 0LL;
  winrt::check_hresult(&v12, v5, (__int64)&v10);
  v10 = 0;
  v11 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 136LL))(v6, v7, *a3);
  winrt::check_hresult(&v12, v8, (__int64)&v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
}
