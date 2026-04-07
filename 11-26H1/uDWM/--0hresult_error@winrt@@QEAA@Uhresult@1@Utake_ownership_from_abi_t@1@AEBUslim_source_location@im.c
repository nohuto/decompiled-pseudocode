/*
 * XREFs of ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D26DC
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800D59A4 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x18001E990 (-unconditional_release_ref@-$com_ptr@UWindowJointResizeTransition@implementation@Private@Transit.c)
 *     ??4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180041BB4 (--4TopLevelWindow3DWrapper@Transitions@Udwm@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008C934 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     SysStringLen_0 @ 0x18008FFFD (SysStringLen_0.c)
 *     GetErrorInfo_0 @ 0x180090021 (GetErrorInfo_0.c)
 *     ?close@?$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800931A8 (-close@-$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x18009359C (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 *     ??$try_as@UIRestrictedErrorInfo@impl@winrt@@UIErrorInfo@23@$0A@@impl@winrt@@YA?AU?$com_ptr@UIRestrictedErrorInfo@impl@winrt@@@1@PEAUIErrorInfo@01@@Z @ 0x1800D0A80 (--$try_as@UIRestrictedErrorInfo@impl@winrt@@UIErrorInfo@23@$0A@@impl@winrt@@YA-AU-$com_ptr@UIRes.c)
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAXAEBUslim_source_location@impl@2@@Z @ 0x1800D1628 (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAXAEBUslim_source_location@impl@2@@Z.c)
 *     ??$try_as@UILanguageExceptionErrorInfo2@impl@winrt@@UIRestrictedErrorInfo@23@$0A@@impl@winrt@@YA?AU?$com_ptr@UILanguageExceptionErrorInfo2@impl@winrt@@@1@PEAUIRestrictedErrorInfo@01@@Z @ 0x1800D261C (--$try_as@UILanguageExceptionErrorInfo2@impl@winrt@@UIRestrictedErrorInfo@23@$0A@@impl@winrt@@YA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::hresult_error::hresult_error(__int64 a1, int a2, __int64 a3, unsigned int *a4)
{
  __int64 *v4; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdi
  void (__fastcall *v10)(__int64, __int64); // rbx
  IErrorInfo *v11; // rbx
  HRESULT (__stdcall *GetDescription)(IErrorInfo *, BSTR *); // rsi
  UINT v13; // eax
  void **v14; // rax
  IErrorInfo *v16; // [rsp+20h] [rbp-20h] BYREF
  IErrorInfo *pperrinfo; // [rsp+28h] [rbp-18h] BYREF
  void *v18[2]; // [rsp+30h] [rbp-10h] BYREF
  BSTR pbstr; // [rsp+60h] [rbp+20h] BYREF

  *(_QWORD *)a1 = 0LL;
  v4 = (__int64 *)(a1 + 16);
  *(_DWORD *)(a1 + 8) = -1430532899;
  *(_DWORD *)(a1 + 12) = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  pperrinfo = 0LL;
  GetErrorInfo_0(0, &pperrinfo);
  winrt::impl::try_as<winrt::impl::IRestrictedErrorInfo,winrt::impl::IErrorInfo,0>(&pbstr, pperrinfo);
  v8 = *winrt::Udwm::Transitions::TopLevelWindow3DWrapper::operator=(v4, (__int64 *)&pbstr);
  if ( pbstr )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)&pbstr);
  if ( v8 )
  {
    v9 = *v4;
    v10 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v4 + 32LL);
    winrt::handle_type<winrt::impl::bstr_traits>::close((OLECHAR **)a1);
    v10(v9, a1);
    winrt::impl::try_as<winrt::impl::ILanguageExceptionErrorInfo2,winrt::impl::IRestrictedErrorInfo,0>(
      &pbstr,
      (void (__fastcall ***)(_QWORD, void *, __int64 *))*v4);
    if ( pbstr )
    {
      (*(void (__fastcall **)(BSTR, _QWORD))(*(_QWORD *)pbstr + 40LL))(pbstr, 0LL);
      winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)&pbstr);
    }
  }
  else
  {
    v11 = pperrinfo;
    pbstr = 0LL;
    if ( pperrinfo )
    {
      GetDescription = pperrinfo->lpVtbl->GetDescription;
      winrt::handle_type<winrt::impl::bstr_traits>::close(&pbstr);
      ((void (__fastcall *)(IErrorInfo *, BSTR *))GetDescription)(v11, &pbstr);
      v11 = 0LL;
      v16 = 0LL;
      if ( pbstr )
      {
        v13 = SysStringLen_0(pbstr);
        v14 = (void **)winrt::impl::trim_hresult_message((winrt::hstring *)v18, pbstr, v13);
        if ( &v16 != (IErrorInfo **)v14 )
        {
          v11 = (IErrorInfo *)*v14;
          *v14 = 0LL;
          winrt::handle_type<winrt::impl::hstring_traits>::close((void **)&v16);
          winrt::handle_type<winrt::impl::hstring_traits>::close((void **)&v16);
          v16 = v11;
        }
        winrt::handle_type<winrt::impl::hstring_traits>::close(v18);
      }
    }
    else
    {
      v16 = 0LL;
    }
    winrt::hresult_error::originate(a1, a2, (__int64)v11, a4);
    winrt::handle_type<winrt::impl::hstring_traits>::close((void **)&v16);
    winrt::handle_type<winrt::impl::bstr_traits>::close(&pbstr);
  }
  if ( pperrinfo )
    winrt::com_ptr<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::unconditional_release_ref((__int64 *)&pperrinfo);
  return a1;
}
