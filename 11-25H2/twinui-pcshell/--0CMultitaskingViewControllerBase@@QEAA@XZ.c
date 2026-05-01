/*
 * XREFs of ??0CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1804A5330
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A52C8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@@WRL.c)
 * Callees:
 *     ??0?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMultitaskingViewController@@UIFrameInteractionEvents@@UISwitchItemController@@UIDismissAnimationController@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A52B0 (--0-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMultitaskingViewController@@UIFrameInt.c)
 */

CMultitaskingViewControllerBase *__fastcall CMultitaskingViewControllerBase::CMultitaskingViewControllerBase(
        CMultitaskingViewControllerBase *this)
{
  __int64 v1; // rcx

  Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewController,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewController,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>(this);
  *(_QWORD *)(v1 + 8) = &CMultitaskingViewControllerBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>'};
  *(_QWORD *)v1 = &CMultitaskingViewControllerBase::`vftable'{for `IMultitaskingViewController'};
  *(_QWORD *)(v1 + 16) = &CMultitaskingViewControllerBase::`vftable'{for `ISwitchItemController'};
  *(_QWORD *)(v1 + 24) = &CMultitaskingViewControllerBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDismissAnimationController>'};
  *(_QWORD *)(v1 + 40) = 0LL;
  *(_QWORD *)(v1 + 48) = 0LL;
  *(_QWORD *)(v1 + 56) = 0LL;
  *(_QWORD *)(v1 + 64) = 0LL;
  *(_QWORD *)(v1 + 72) = 0LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_DWORD *)(v1 + 88) = 0;
  *(_WORD *)(v1 + 96) = 0;
  *(_QWORD *)(v1 + 104) = 0LL;
  return (CMultitaskingViewControllerBase *)v1;
}
