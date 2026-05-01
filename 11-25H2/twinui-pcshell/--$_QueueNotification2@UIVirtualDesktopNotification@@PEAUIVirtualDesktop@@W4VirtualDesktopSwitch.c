/*
 * XREFs of ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W43@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@@Z @ 0x1805298B4
 * Callers:
 *     ?VirtualDesktopSwitched@?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x18052A140 (-VirtualDesktopSwitched@-$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotification.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18003C030 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??$Make@V?$CTaskWrapper@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@ComTaskPool@Internal@Windows@@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@Z @ 0x180529114 (--$Make@V-$CTaskWrapper@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@ComTaskPool@Internal@Window.c)
 *     ??0?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@$$QEAV01@@Z @ 0x180529A50 (--0-$tuple@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@$$.c)
 *     ??1_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@QEAA@XZ @ 0x180529ACC (--1_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ____QueueNotification2_UIVirtualDesktopNotification__PEAUIVirtualDesktop__W4VirtualDesktopSwitchType____ZV__ComPtr_UIVirtualDesktop___WRL_Microsoft__W43__CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIVirtualDesktop__W4VirtualDesktopSwitchType___ZV__tuple_V__ComPtr_UIVirtualDesktop___WRL_Microsoft__W4VirtualDesktopSwitchType___std___Z(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int CallbackArray; // eax
  unsigned int v6; // ebx
  unsigned int v7; // edi
  volatile signed __int32 **v8; // rax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rcx
  int v11; // edi
  __int64 (__fastcall *v13)(__int64); // [rsp+30h] [rbp-20h] BYREF
  struct IObjectArray *v14; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v15[16]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  volatile signed __int32 *v17; // [rsp+70h] [rbp+20h] BYREF
  struct IObjectArray *v18; // [rsp+78h] [rbp+28h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h]

  v19 = a3;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 64), &v18);
  v6 = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    v13 =  Windows::Foundation::IPropertyValue::`vcall'{96,{flat}};
    v14 = v18;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(
      v15,
      a3);
    v7 = *(_DWORD *)(a1 + 104);
    v8 = Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_>,_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_>(
           &v17,
           &v13);
    v9 = *v8;
    *v8 = 0LL;
    v10 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v10);
    }
    v11 = SHTaskPoolQueueTask(0LL, 2LL, v7);
    if ( v9 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x152,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
        (const char *)(unsigned int)v11);
    _lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_::~_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_((_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_ *)&v13);
    v6 = v11;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)CallbackArray);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a3 + 8));
  return v6;
}
