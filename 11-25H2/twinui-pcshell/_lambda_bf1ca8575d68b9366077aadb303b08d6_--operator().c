/*
 * XREFs of _lambda_bf1ca8575d68b9366077aadb303b08d6_::operator() @ 0x1804E1A08
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_23bf8bd3675a1804fe99e03975a5a957___::Invoke @ 0x1804E38E0 (CAsyncCallbackWithLambda__lambda_23bf8bd3675a1804fe99e03975a5a957___--Invoke.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180015BDC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180190B5C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?GetForegroundRootSwitchableView@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804E2750 (-GetForegroundRootSwitchableView@GamingPosturePositioner@@AEAA-AV-$com_ptr_t@UIApplicationView@@.c)
 *     ?GetLastView@ApplicationViewCollection@@QEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804E2860 (-GetLastView@ApplicationViewCollection@@QEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_pol.c)
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804E3B24 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1804E47FC (-Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?SetFocus@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804E4C54 (-SetFocus@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?ShouldHandleViewFallback@GamingPosturePositioner@@AEAA_NXZ @ 0x1804E4FD8 (-ShouldHandleViewFallback@GamingPosturePositioner@@AEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_bf1ca8575d68b9366077aadb303b08d6_::operator()(__int64 a1)
{
  struct IApplicationView *v2; // rdx
  __int64 v3; // rcx
  HWND WindowForView; // rbx
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r9
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r9
  __int64 *v9; // rcx
  struct IApplicationView *v10; // rbx
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r9
  int ViewPrimary; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, struct IUnknown **); // rbx
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IUnknown *v19; // [rsp+50h] [rbp+20h] BYREF
  struct IApplicationView *v20; // [rsp+58h] [rbp+28h] BYREF

  if ( GamingPosturePositioner::ShouldHandleViewFallback(*(GamingPosturePositioner **)(a1 + 8)) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v3 + 224) )
    {
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                              *(__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))(v3 + 224),
                              v2);
      if ( IsIconic(WindowForView) )
      {
        v5 = GamingPosturePositionerTraceProvider::Provider();
        if ( *(_DWORD *)v5 > 4u )
        {
          v19 = *(struct IUnknown **)(*(_QWORD *)(a1 + 8) + 224LL);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
            (__int64)v5,
            byte_1807DC813,
            0LL,
            v6,
            (__int64)&v19);
        }
        PostMessageW(WindowForView, 0x112u, 0xF120uLL, 0LL);
      }
      else
      {
        v7 = GamingPosturePositionerTraceProvider::Provider();
        if ( *(_DWORD *)v7 > 4u )
        {
          v19 = *(struct IUnknown **)(*(_QWORD *)(a1 + 8) + 224LL);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
            (__int64)v7,
            byte_1807DC7BF,
            0LL,
            v8,
            (__int64)&v19);
        }
      }
      GamingPosturePositioner::GetForegroundRootSwitchableView(*(_QWORD *)(a1 + 8), &v19);
      if ( !SHIsSameObject(*(struct IUnknown **)(*(_QWORD *)(a1 + 8) + 224LL), v19) )
        GamingPosturePositioner::SetFocus(
          *(GamingPosturePositioner **)(a1 + 8),
          *(struct IApplicationView **)(*(_QWORD *)(a1 + 8) + 224LL));
      v9 = (__int64 *)&v19;
    }
    else
    {
      ApplicationViewCollection::GetLastView(v3 + 664, &v20);
      v10 = v20;
      v11 = GamingPosturePositionerTraceProvider::Provider();
      if ( v10 )
      {
        if ( *(_DWORD *)v11 > 4u )
        {
          v19 = (struct IUnknown *)v10;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
            (__int64)v11,
            byte_1807DC777,
            0LL,
            v12,
            (__int64)&v19);
        }
        ViewPrimary = GamingPosturePositioner::MakeViewPrimary(*(GamingPosturePositioner **)(a1 + 8), v10);
        if ( ViewPrimary < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x5C7,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
            (const char *)(unsigned int)ViewPrimary);
        GamingPosturePositioner::SetFocus(*(GamingPosturePositioner **)(a1 + 8), v10);
      }
      else
      {
        if ( *(_DWORD *)v11 > 4u )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            (__int64)v11,
            byte_1807DC73C,
            0LL);
        v19 = 0LL;
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 712LL);
        v15 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IUnknown **))(*(_QWORD *)v14 + 64LL);
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v19);
        v16 = v15(v14, 0LL, &v19);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x5CF,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
            (const char *)(unsigned int)v16);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 624LL) = GetTickCount64();
      v9 = (__int64 *)&v20;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v9);
  }
  return 0LL;
}
