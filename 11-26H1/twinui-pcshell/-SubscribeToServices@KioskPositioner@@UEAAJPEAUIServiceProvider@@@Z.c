/*
 * XREFs of ?SubscribeToServices@KioskPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1804F1FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@SmartCookie@@QEAAJPEAUIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@Z @ 0x180189E24 (--$Register@UIImmersiveMonitorNotificationService@@P81@EAAJPEAUIImmersiveMonitorNotification@@PE.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@Z @ 0x1804EF444 (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener_ea_1804EF444.c)
 *     ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVKioskPositioner@@@Z @ 0x1804EF528 (--$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEv_ea_1804EF528.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KioskPositioner::SubscribeToServices(KioskPositioner *this, struct IServiceProvider *a2)
{
  char *v4; // r14
  __int64 result; // rax
  __int64 (*QueryService)(void); // rdi
  int v7; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  int v21; // eax
  unsigned int v22; // ebx
  HRESULT (__stdcall *v23)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v24; // eax
  __int64 v25; // r8
  unsigned int v26; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v28; // [rsp+50h] [rbp+8h] BYREF

  v4 = (char *)this - 40;
  if ( !*((_BYTE *)this + 592) )
    return 0LL;
  QueryService = (__int64 (*)(void))a2->lpVtbl->QueryService;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 21);
  try
  {
    v7 = QueryService();
    v8 = v7;
    if ( v7 >= 0 )
    {
      v10 = a2->lpVtbl->QueryService;
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 22);
      v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v10)(
              a2,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              (char *)this + 176);
      v13 = v11;
      if ( v11 >= 0 )
      {
        v14 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),KioskPositioner *>(
                (__int64)this + 208,
                *((_QWORD *)this + 22),
                v12);
        v15 = v14;
        if ( v14 >= 0 )
        {
          lpVtbl = a2->lpVtbl;
          v28 = 0LL;
          v17 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
                  a2,
                  &SID_IImmersiveMonitorService,
                  &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                  &v28);
          v20 = v17;
          if ( v17 >= 0 )
          {
            v21 = SmartCookie::Register<IImmersiveMonitorNotificationService,long (IImmersiveMonitorNotificationService::*)(IImmersiveMonitorNotification *,unsigned long *),long (IImmersiveMonitorNotificationService::*)(unsigned long),KioskPositioner *>(
                    (__int64)this + 336,
                    v28,
                    v18,
                    v19,
                    (unsigned __int64)v4);
            v22 = v21;
            if ( v21 >= 0 )
            {
              v23 = a2->lpVtbl->QueryService;
              wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 23);
              v24 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v23)(
                      a2,
                      &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                      &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                      (char *)this + 184);
              v26 = v24;
              if ( v24 >= 0 )
              {
                SmartCookie::Register<IViewPresentationMediator,long (IViewPresentationMediator::*)(IWindowManagementShowMoveSizeEvents *,unsigned long *),long (IViewPresentationMediator::*)(unsigned long),KioskPositioner *>(
                  (__int64)this + 464,
                  *((_QWORD *)this + 23),
                  v25);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
                result = 0LL;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x222,
                  (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                  (const char *)(unsigned int)v24);
                wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
                result = v26;
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x220,
                (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                (const char *)(unsigned int)v21);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
              result = v22;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x21C,
              (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
              (const char *)(unsigned int)v17);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
            result = v20;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x219,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
            (const char *)(unsigned int)v14);
          result = v15;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x215,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v11);
        result = v13;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x213,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v7);
      result = v8;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x22A,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v9);
  }
  return result;
}
