/*
 * XREFs of ??$Register@UIGameFocusNotificationService@@P81@EAAJPEAUIGameFocusEvents@@PEAK@ZP81@EAAJK@ZPEAVTouchEdgeGestureManager@@@SmartCookie@@QEAAJPEAUIGameFocusNotificationService@@P81@EAAJPEAUIGameFocusEvents@@PEAK@ZP81@EAAJK@ZPEAVTouchEdgeGestureManager@@@Z @ 0x1802B7EAC
 * Callers:
 *     ?Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z @ 0x1800B6A98 (-Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?4V_lambda_d96d6d5f958b26f7de2c10fac46da517_@@X@?$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_d96d6d5f958b26f7de2c10fac46da517_@@@Z @ 0x180224B58 (--$-4V_lambda_d96d6d5f958b26f7de2c10fac46da517_@@X@-$function@$$A6AJK@Z@wistd@@QEAAAEAV01@$$QEAV.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x1802DA8B0 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 SmartCookie::Register<IGameFocusNotificationService,long (IGameFocusNotificationService::*)(IGameFocusEvents *,unsigned long *),long (IGameFocusNotificationService::*)(unsigned long),TouchEdgeGestureManager *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  int v6; // eax
  unsigned int v7; // edi
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
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (int)"desktop\\internal\\shell\\inc\\private\\smartcookie.h",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v6 =  IVirtualDesktopNotification::`vcall'{24,{flat}}(a2, (v12 + 8) & ((unsigned __int128)-(__int128)v12 >> 64));
    v7 = v6;
    if ( v6 >= 0 )
    {
      v10 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
      v8[0] = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
      v8[1] = (__int64) IImmersiveWindowMessageService::`vcall'{32,{flat}};
      wistd::function<long (unsigned long)>::operator=<_lambda_d96d6d5f958b26f7de2c10fac46da517_,void>((_QWORD *)a1, v8);
      if ( v8[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (int)"desktop\\internal\\shell\\inc\\private\\smartcookie.h",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
}
