/*
 * XREFs of ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVTabletModePositionerManager@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVTabletModePositionerManager@@@Z @ 0x180216ED0
 * Callers:
 *     ?SubscribeToServices@TabletModePositionerManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180514CF0 (-SubscribeToServices@TabletModePositionerManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4V_lambda_ac23da617b8b12dce5adc32a60042fa2_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_ac23da617b8b12dce5adc32a60042fa2_@@@Z @ 0x1800A3600 (--$-4V_lambda_ac23da617b8b12dce5adc32a60042fa2_@@X@-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x1802DA8B0 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 */

__int64 SmartCookie::Register<IViewPresentationMediator,long (IViewPresentationMediator::*)(IWindowManagementShowMoveSizeEvents *,unsigned long *),long (IViewPresentationMediator::*)(unsigned long),TabletModePositionerManager *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  unsigned __int64 v12; // [rsp+60h] [rbp+28h]
  va_list va1; // [rsp+68h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  v12 = va_arg(va1, _QWORD);
  if ( *(_DWORD *)(a1 + 120) )
  {
    v5 = -2147019873;
    v6 = 41LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"desktop\\internal\\shell\\inc\\private\\SmartCookie.h",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 =  IVirtualDesktopNotification::`vcall'{24,{flat}}(a2, (v12 + 96) & ((unsigned __int128)-(__int128)v12 >> 64));
  if ( v5 < 0 )
  {
    v6 = 42LL;
    goto LABEL_3;
  }
  v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
  v8[0] = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
  v8[1] = (__int64) IImmersiveWindowMessageService::`vcall'{32,{flat}};
  wistd::function<long (unsigned long)>::operator=<_lambda_ac23da617b8b12dce5adc32a60042fa2_,void>(a1, (__int64)v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v8);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)va);
  return 0LL;
}
