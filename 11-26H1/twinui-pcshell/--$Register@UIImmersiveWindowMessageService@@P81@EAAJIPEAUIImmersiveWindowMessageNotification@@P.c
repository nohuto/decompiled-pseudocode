/*
 * XREFs of ??$Register@UIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@PEAK@ZP81@EAAJK@ZHPEAVAcrylicPolicyManager@@@SmartCookie@@QEAAJPEAUIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@PEAK@ZP81@EAAJK@ZHPEAVAcrylicPolicyManager@@@Z @ 0x180108F3C
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180108AB0 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4V_lambda_c4c044c2a825f9d09f3c641bd8085e17_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_c4c044c2a825f9d09f3c641bd8085e17_@@@Z @ 0x18008043C (--$-4V_lambda_c4c044c2a825f9d09f3c641bd8085e17_@@X@-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x1802DA8B0 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 */

__int64 __fastcall SmartCookie::Register<IImmersiveWindowMessageService,long (IImmersiveWindowMessageService::*)(unsigned int,IImmersiveWindowMessageNotification *,unsigned long *),long (IImmersiveWindowMessageService::*)(unsigned long),int,AcrylicPolicyManager *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = a4;
  if ( *(_DWORD *)(a1 + 120) )
  {
    v6 = -2147019873;
    v7 = 41LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"desktop\\internal\\shell\\inc\\private\\SmartCookie.h",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 =  IVirtualDesktopNotification::`vcall'{24,{flat}}(a2, 794LL);
  if ( v6 < 0 )
  {
    v7 = 42LL;
    goto LABEL_3;
  }
  v11 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
  v9[0] = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
  v9[1] = (__int64) IImmersiveWindowMessageService::`vcall'{32,{flat}};
  wistd::function<long (unsigned long)>::operator=<_lambda_c4c044c2a825f9d09f3c641bd8085e17_,void>((_QWORD *)a1, v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  return 0LL;
}
