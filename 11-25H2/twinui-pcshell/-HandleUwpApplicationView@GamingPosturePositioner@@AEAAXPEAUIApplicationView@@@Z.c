/*
 * XREFs of ?HandleUwpApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804E2D00
 * Callers:
 *     ?ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804E20A0 (-ControlGainedForActivation@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITION.c)
 *     ?HandleApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804E2C10 (-HandleApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1804E3810 (-InitializePosition@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPrese.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@@Z @ 0x18000A0B0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180181C58 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?BringToFront@ApplicationViewCollection@@QEAAXPEAUIApplicationView@@@Z @ 0x1804E1F18 (-BringToFront@ApplicationViewCollection@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?GetMainMonitor@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804E29B0 (-GetMainMonitor@GamingPosturePositioner@@AEAA-AV-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_p.c)
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804E3B24 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1804E47FC (-Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?SetFocus@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804E4C54 (-SetFocus@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?SetUwpViewFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1804E4DD4 (-SetUwpViewFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@.c)
 *     ?ShouldImmediatelyMakeViewPrimary@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804E5010 (-ShouldImmediatelyMakeViewPrimary@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GamingPosturePositioner::HandleUwpApplicationView(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  __int64 WindowForView; // r14
  __int64 (__fastcall *v5)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  void **v6; // rdx
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  int ViewPrimary; // eax
  const char *v11; // r9
  void *v12; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+48h] [rbp-30h] BYREF
  int v14[2]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  void *v16; // [rsp+90h] [rbp+18h] BYREF
  struct IImmersiveMonitor *v17; // [rsp+98h] [rbp+20h] BYREF

  try
  {
    WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
    v16 = 0LL;
    v5 = (*a2)[17];
    v6 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v16);
    ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), void **))v5)(a2, v6);
    v7 = GamingPosturePositionerTraceProvider::Provider();
    if ( *(_DWORD *)v7 > 4u )
    {
      v12 = v16;
      v13 = WindowForView;
      *(_QWORD *)v14 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
        (__int64)v7,
        (__int64)&unk_1807DCC87,
        v8,
        v9,
        (__int64)v14,
        (__int64)&v13,
        &v12);
    }
    ApplicationViewCollection::BringToFront(this + 83, (struct IUnknown *)a2);
    if ( GamingPosturePositioner::ShouldImmediatelyMakeViewPrimary(
           (GamingPosturePositioner *)this,
           (struct IApplicationView *)a2) )
    {
      ViewPrimary = GamingPosturePositioner::MakeViewPrimary(
                      (GamingPosturePositioner *)this,
                      (struct IApplicationView *)a2);
      if ( ViewPrimary < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x540,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
          (const char *)(unsigned int)ViewPrimary);
    }
    GamingPosturePositioner::GetMainMonitor((__int64)this, (__int64 *)&v17);
    GamingPosturePositioner::SetUwpViewFullScreen((GamingPosturePositioner *)this, (struct IApplicationView *)a2, v17);
    if ( !BYTE2(this[77].Ptr) )
      GamingPosturePositioner::SetFocus((GamingPosturePositioner *)this, (struct IApplicationView *)a2);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v16);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x54A,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
      v11);
  }
}
