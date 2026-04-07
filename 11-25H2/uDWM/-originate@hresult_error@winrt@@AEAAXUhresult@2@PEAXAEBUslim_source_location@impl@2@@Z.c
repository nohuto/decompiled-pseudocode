/*
 * XREFs of ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAXAEBUslim_source_location@impl@2@@Z @ 0x1800D413C
 * Callers:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D3594 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D5268 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800DD824 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180094A2C (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     GetErrorInfo_0 @ 0x18009C96D (GetErrorInfo_0.c)
 *     RoOriginateLanguageException_0 @ 0x18009C979 (RoOriginateLanguageException_0.c)
 *     ??$try_as@UIRestrictedErrorInfo@impl@winrt@@UIErrorInfo@23@$0A@@impl@winrt@@YA?AU?$com_ptr@UIRestrictedErrorInfo@impl@winrt@@@1@PEAUIErrorInfo@01@@Z @ 0x1800D3540 (--$try_as@UIRestrictedErrorInfo@impl@winrt@@UIErrorInfo@23@$0A@@impl@winrt@@YA-AU-$com_ptr@UIRes.c)
 *     ??4?$com_ptr@UIRestrictedErrorInfo@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800D36B0 (--4-$com_ptr@UIRestrictedErrorInfo@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::hresult_error::originate(__int64 a1, int a2, __int64 a3, unsigned int *a4)
{
  __int64 result; // rax
  __int64 v8[3]; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  IErrorInfo *pperrinfo; // [rsp+50h] [rbp+8h] BYREF

  RoOriginateLanguageException_0();
  if ( winrt_throw_hresult_handler )
    winrt_throw_hresult_handler(*a4, *((_QWORD *)a4 + 1), *((_QWORD *)a4 + 2), retaddr, a2);
  pperrinfo = 0LL;
  GetErrorInfo_0(0, &pperrinfo);
  winrt::impl::try_as<winrt::impl::IRestrictedErrorInfo,winrt::impl::IErrorInfo,0>(v8, pperrinfo);
  result = (__int64)winrt::com_ptr<winrt::impl::IRestrictedErrorInfo>::operator=((__int64 *)(a1 + 16), v8);
  if ( v8[0] )
    result = winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref(v8);
  if ( pperrinfo )
    return winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)&pperrinfo);
  return result;
}
