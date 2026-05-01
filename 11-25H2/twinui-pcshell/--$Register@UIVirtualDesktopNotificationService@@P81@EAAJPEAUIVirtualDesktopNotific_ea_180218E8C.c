/*
 * XREFs of ??$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x180218E8C
 * Callers:
 *     ?subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180157990 (-subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x1800676F4 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x1802E1310 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SmartCookie::Register<IVirtualDesktopNotificationService,long (IVirtualDesktopNotificationService::*)(IVirtualDesktopNotification *,unsigned long *),long (IVirtualDesktopNotificationService::*)(unsigned long),winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 120) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (int)"desktop\\internal\\shell\\inc\\private\\SmartCookie.h",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v8 =  IVirtualDesktopNotification::`vcall'{24,{flat}}(a2, (a5 + 8) & -(__int64)(a5 != 0));
    v9 = v8;
    if ( v8 >= 0 )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v10[0] = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
      v10[1] = (__int64) IImmersiveWindowMessageService::`vcall'{32,{flat}};
      wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(a1);
      *(_QWORD *)(a1 + 8) = &wistd::__function::__func<_lambda_7ec1cd49ee72ba5933b7d686c2907b0a_,long (unsigned long)>::`vftable';
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( (__int64 *)(a1 + 16) != v10 )
      {
        *(_QWORD *)(a1 + 16) = a2;
        v10[0] = 0LL;
      }
      *(_QWORD *)(a1 + 24) =  IImmersiveWindowMessageService::`vcall'{32,{flat}};
      *(_QWORD *)(a1 + 112) = a1 + 8;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (int)"desktop\\internal\\shell\\inc\\private\\SmartCookie.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
}
