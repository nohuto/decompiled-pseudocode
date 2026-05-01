/*
 * XREFs of _lambda_ad7a42fd7c88720b7dc13ba1f6feb34a_::operator() @ 0x1804E18E4
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_5053acc21ba3cf792fd1d73cc8a06001___::Invoke @ 0x1804E3900 (CAsyncCallbackWithLambda__lambda_5053acc21ba3cf792fd1d73cc8a06001___--Invoke.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180015BDC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804DE9E4 (-IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?GetMainMonitor@GamingPosturePositioner@@AEAA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1804E29B0 (-GetMainMonitor@GamingPosturePositioner@@AEAA-AV-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_p.c)
 *     ?IsViewManaged@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804E3AA0 (-IsViewManaged@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1804E47FC (-Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?SetUwpViewFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1804E4DD4 (-SetUwpViewFullScreen@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_ad7a42fd7c88720b7dc13ba1f6feb34a_::operator()(__int64 a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 *v3; // rcx
  __int64 v4; // rax
  unsigned int i; // esi
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, _QWORD, GUID *, struct IApplicationView **); // rdi
  GamingPosturePositioner *v8; // rcx
  unsigned int v10; // [rsp+60h] [rbp+30h] BYREF
  struct IApplicationView *v11; // [rsp+68h] [rbp+38h] BYREF
  __int64 v12; // [rsp+70h] [rbp+40h] BYREF
  struct IImmersiveMonitor *v13; // [rsp+78h] [rbp+48h] BYREF

  v2 = GamingPosturePositionerTraceProvider::Provider();
  if ( *(_DWORD *)v2 > 4u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v2,
      byte_1807DC9E0,
      0LL);
  GamingPosturePositioner::GetMainMonitor(*(_QWORD *)(a1 + 8), &v13);
  v12 = 0LL;
  v3 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 160LL);
  v4 = *v3;
  v12 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v4 + 24))(v3, &v12) >= 0 )
  {
    v10 = 0;
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 24LL))(v12, &v10);
    for ( i = 0; i < v10; ++i )
    {
      v11 = 0LL;
      v6 = v12;
      v7 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v12 + 32LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v11);
      if ( v7(v6, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v11) >= 0
        && GamingPosturePositioner::IsViewManaged(*(GamingPosturePositioner **)(a1 + 8), v11)
        && !GamingPosturePositioner::IsWin32ApplicationView(v8, v11) )
      {
        GamingPosturePositioner::SetUwpViewFullScreen(*(GamingPosturePositioner **)(a1 + 8), v11, v13);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
  return 0LL;
}
