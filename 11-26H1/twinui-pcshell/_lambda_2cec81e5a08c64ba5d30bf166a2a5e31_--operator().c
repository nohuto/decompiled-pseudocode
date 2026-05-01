/*
 * XREFs of _lambda_2cec81e5a08c64ba5d30bf166a2a5e31_::operator() @ 0x1802DDCD0
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___::operator() @ 0x1802DDF70 (CDelayIAMOperations--CDelayedOperation__lambda_2cec81e5a08c64ba5d30bf166a2a5e31___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180181254 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_f2aff480071fec97cde50b6ac374e769___ @ 0x1802DC94C (CIAMGlobals--QueueViewManagementTask__lambda_f2aff480071fec97cde50b6ac374e769___.c)
 *     ?PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z @ 0x1802E3BB0 (-PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z.c)
 *     ?get@?$static_lazy@VIamTraceLogging@@@details@wil@@QEAAPEAVIamTraceLogging@@P6AXXZ@Z @ 0x1802E7C90 (-get@-$static_lazy@VIamTraceLogging@@@details@wil@@QEAAPEAVIamTraceLogging@@P6AXXZ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_2cec81e5a08c64ba5d30bf166a2a5e31_::operator()(__int64 a1)
{
  HWND ForegroundWindow; // rax
  HWND v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  IamTraceLogging *v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24),
    &v10);
  ForegroundWindow = GetForegroundWindow();
  if ( !ForegroundWindow
    || (v3 = *(HWND *)(a1 + 8), ForegroundWindow == v3)
    && ForegroundWindow == *(HWND *)(a1 + 16)
    && *(HWND *)(*(_QWORD *)a1 + 768LL) != v3
    && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 416LL))(v10) )
  {
    v9 = *(_QWORD *)(a1 + 24);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    CIAMGlobals::QueueViewManagementTask__lambda_f2aff480071fec97cde50b6ac374e769___(v4, &v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    v6 = *(_DWORD **)(wil::details::static_lazy<IamTraceLogging>::get(
                        v5,
                        _lambda_119a121fb38785c27806b92be2d82d86_::_lambda_invoker_cdecl_)
                    + 8);
    if ( v6 && *v6 )
    {
      wil::details::static_lazy<IamTraceLogging>::get(
        v6,
        _lambda_119a121fb38785c27806b92be2d82d86_::_lambda_invoker_cdecl_);
      IamTraceLogging::PendingActivation_(v7, *(HWND *)(a1 + 8));
    }
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
}
