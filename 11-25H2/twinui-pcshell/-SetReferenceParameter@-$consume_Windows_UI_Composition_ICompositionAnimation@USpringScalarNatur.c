/*
 * XREFs of ?SetReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNaturalMotionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionObject@Composition@UI@Windows@3@@Z @ 0x180496954
 * Callers:
 *     ?CreateOpacityAnimation@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@_N@Z @ 0x1804936D4 (-CreateOpacityAnimation@CAppThumbnailWindow@@AEAA-AUExpressionAnimation@Composition@UI@Windows@w.c)
 *     ?CreateScaleAnimation@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@AEBUhstring@6@@Z @ 0x18049395C (-CreateScaleAnimation@CAppThumbnailWindow@@AEAA-AUExpressionAnimation@Composition@UI@Windows@win.c)
 *     ?CreateScaleFactorAnimation@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@HAEBUhstring@6@@Z @ 0x180493A28 (-CreateScaleFactorAnimation@CAppThumbnailWindow@@AEAA-AUExpressionAnimation@Composition@UI@Windo.c)
 *     ?CreateTriggerConditionForDirectionChangeThreshold@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@XZ @ 0x180494628 (-CreateTriggerConditionForDirectionChangeThreshold@CAppThumbnailWindow@@AEAA-AUExpressionAnimati.c)
 *     ?CreateTriggerForFlickScaleAnimtion@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@0M@Z @ 0x180494764 (-CreateTriggerForFlickScaleAnimtion@CAppThumbnailWindow@@AEAA-AUCompositionAnimationTriggerValue.c)
 *     ?CreateTriggerToCacheScalar@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@0@Z @ 0x180494C30 (-CreateTriggerToCacheScalar@CAppThumbnailWindow@@AEAA-AUCompositionAnimationTriggerValuePartner@.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x180497498 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::SetReferenceParameter(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  int v10; // [rsp+28h] [rbp-18h] BYREF
  __int128 v11; // [rsp+30h] [rbp-10h]
  int v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v5 = *a1;
  if ( v5 )
  {
    v13 = 0LL;
    v6 = (**v5)(v5, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimation>, &v13);
    v7 = v13;
    v9 = v13;
  }
  else
  {
    v6 = 0;
    v9 = 0LL;
    v7 = 0LL;
  }
  v10 = 0;
  v11 = 0LL;
  winrt::check_hresult(&v12, v6, (__int64)&v10);
  v10 = 0;
  v11 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 96LL))(v7, *a2, *a3);
  winrt::check_hresult(&v12, v8, (__int64)&v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
}
