/*
 * XREFs of ?SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4SwitchInvokeMethod@4@@Z @ 0x1804B37AC
 * Callers:
 *     ?InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804A55D0 (-InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180181C58 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z @ 0x1804AD0EC (-ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z.c)
 *     ?AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1@Z @ 0x1804B369C (-AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1.c)
 *     ?get@?$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAAPEAVAppSwitchTelemetry@PerfTrack@@P6AXXZ@Z @ 0x1804B3834 (-get@-$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAAPEAVAppSwitchTelemetry@PerfT.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewHostTelemetry::SendAppSwitchTelemetry(
        __int64 (__fastcall ***a1)(SwitchItemTelemetry *, GUID *, __int64 *),
        int a2)
{
  void **v4; // rax
  unsigned __int16 **v5; // r8
  __int64 v6; // rcx
  int AppId; // ebx
  const WCHAR *v8; // rbx
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  int v12; // [rsp+20h] [rbp-18h]
  const WCHAR *v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  v4 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v13);
  AppId = SwitchItemTelemetry::ExtractAppId(a1, (struct ISwitchItem *)v4, v5);
  if ( AppId >= 0 )
  {
    v8 = v13;
    v9 = *(_DWORD **)(wil::details::static_lazy<PerfTrack::AppSwitchTelemetry>::get(
                        v6,
                        _lambda_2ca303a503a9bc4bb017c32a5a335e85_::_lambda_invoker_cdecl_)
                    + 8);
    if ( v9 && *v9 )
    {
      wil::details::static_lazy<PerfTrack::AppSwitchTelemetry>::get(
        v9,
        _lambda_2ca303a503a9bc4bb017c32a5a335e85_::_lambda_invoker_cdecl_);
      PerfTrack::AppSwitchTelemetry::AppSwitched_(v10, a2, v8, 0, v12);
    }
    AppId = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v13);
  return (unsigned int)AppId;
}
