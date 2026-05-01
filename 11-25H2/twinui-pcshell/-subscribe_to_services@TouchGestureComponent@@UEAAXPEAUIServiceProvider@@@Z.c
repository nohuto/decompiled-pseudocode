/*
 * XREFs of ?subscribe_to_services@TouchGestureComponent@@UEAAXPEAUIServiceProvider@@@Z @ 0x180568320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@?$com_ptr@UIInputHostLayout@@@winrt@@QEAAXA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@1@Z @ 0x1800FBF58 (--$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@-$com_ptr@UIIn.c)
 *     ?Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z @ 0x1800FBFD0 (-Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenEdgeAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F9878 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenEdgeAnimations@@@details@wil@@.c)
 *     ??$Register@UIGlobalRudeWindowNotificationService@@P81@EAAJPEAUIGlobalRudeWindowNotifications@@PEAK@ZP81@EAAJK@ZPEAVTouchGestureComponent@@@SmartCookie@@QEAAJPEAUIGlobalRudeWindowNotificationService@@P81@EAAJPEAUIGlobalRudeWindowNotifications@@PEAK@ZP81@EAAJK@ZPEAVTouchGestureComponent@@@Z @ 0x180566DE4 (--$Register@UIGlobalRudeWindowNotificationService@@P81@EAAJPEAUIGlobalRudeWindowNotifications@@P.c)
 *     ??$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVTouchGestureComponent@@@SmartCookie@@QEAAJPEAUIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVTouchGestureComponent@@@Z @ 0x180566EB8 (--$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVTouchGe.c)
 *     ??$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@?$com_ptr@UIGlobalRudeWindowNotificationService@@@winrt@@QEAAXA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@1@Z @ 0x180566F98 (--$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@-$com_ptr@UIGl.c)
 *     ??$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@?$com_ptr@UIImmersiveMonitorManager@@@winrt@@QEAAXA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@1@Z @ 0x180567010 (--$capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBU2@@-$com_ptr@UIIm.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SuppressTouchGestures@@@details@wil@@QEAA_NXZ @ 0x180568164 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SuppressTouchGestures@@@details@w.c)
 */

void __fastcall TouchGestureComponent::subscribe_to_services(
        TouchGestureComponent *this,
        struct IServiceProvider *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r8
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IServiceProvider *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v4 = *((_QWORD *)this + 12);
  if ( *(struct IServiceProvider **)(v4 + 24) != a2 )
  {
    if ( *(_QWORD *)(v4 + 24) )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(v4 + 24));
    *(_QWORD *)(v4 + 24) = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v4 + 24));
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenEdgeAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenEdgeAnimations>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  TouchEdgeGestureManager::Initialize(*((TouchEdgeGestureManager **)this + 13), a2);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuppressTouchGestures>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SuppressTouchGestures>::GetImpl'::`2'::impl) )
  {
    winrt::com_ptr<IImmersiveMonitorManager>::capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider * &,_GUID const &>(
      (__int64 *)this + 14,
      (__int64 (__fastcall *)(_QWORD, SID *, void *, __int64 *))IUnknown_QueryService,
      &v12);
    winrt::com_ptr<IInputHostLayout>::capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider * &,_GUID const &>(
      (__int64 *)this + 15,
      (__int64 (__fastcall *)(_QWORD, SID *, void *, __int64 *))IUnknown_QueryService,
      &v12);
    v8 = SmartCookie::Register<IInputHostLayout,long (IInputHostLayout::*)(IInputHostLayoutChanges *,unsigned long *),long (IInputHostLayout::*)(unsigned long),TouchGestureComponent *>(
           (__int64)this + 128,
           *((_QWORD *)this + 15),
           v7);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x31,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturecomponent.cpp",
        (const char *)(unsigned int)v8,
        (_DWORD)this - 16);
    winrt::com_ptr<IGlobalRudeWindowNotificationService>::capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider * &,_GUID const &>(
      (__int64 *)this + 32,
      (__int64 (__fastcall *)(_QWORD, GUID *, GUID *, __int64 *))IUnknown_QueryService,
      &v12);
    v10 = SmartCookie::Register<IGlobalRudeWindowNotificationService,long (IGlobalRudeWindowNotificationService::*)(IGlobalRudeWindowNotifications *,unsigned long *),long (IGlobalRudeWindowNotificationService::*)(unsigned long),TouchGestureComponent *>(
            (__int64)this + 264,
            *((_QWORD *)this + 32),
            v9);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x38,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturecomponent.cpp",
        (const char *)(unsigned int)v10,
        (_DWORD)this - 16);
  }
}
