/*
 * XREFs of ?CreateAnimationTriggerValuePartner@?$consume_Windows_UI_Composition_Internal_ICompositorInternal@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@AEBUICompositionAnimationBase@7893@@Z @ 0x1804924C4
 * Callers:
 *     ?CreateTriggerForFlickScaleAnimtion@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@0M@Z @ 0x180494764 (-CreateTriggerForFlickScaleAnimtion@CAppThumbnailWindow@@AEAA-AUCompositionAnimationTriggerValue.c)
 *     ?CreateTriggerToCachePositionX@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@@Z @ 0x180494AD0 (-CreateTriggerToCachePositionX@CAppThumbnailWindow@@AEAA-AUCompositionAnimationTriggerValuePartn.c)
 *     ?CreateTriggerToCacheScalar@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@0@Z @ 0x180494C30 (-CreateTriggerToCacheScalar@CAppThumbnailWindow@@AEAA-AUCompositionAnimationTriggerValuePartner@.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x180497498 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Composition_Internal_ICompositorInternal<winrt::Windows::UI::Composition::Internal::ICompositorInternal>::CreateAnimationTriggerValuePartner(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 v5; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, __int64 *); // rax
  __int64 v11; // rdx
  int v12; // eax
  int v14; // [rsp+38h] [rbp-20h] BYREF
  __int128 v15; // [rsp+40h] [rbp-18h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  v5 = *a1;
  v16 = 0LL;
  v14 = 0;
  v8 = *a4;
  v9 = *a5;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)v5 + 200LL);
  v11 = *a3;
  v15 = 0LL;
  v12 = v10(v5, v11, v8, v9, &v16);
  winrt::check_hresult((int *)&v17, v12, (__int64)&v14);
  *a2 = v16;
  return a2;
}
