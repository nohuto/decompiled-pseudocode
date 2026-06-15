/*
 * XREFs of ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800E91B0
 * Callers:
 *     ??$call@P6A?AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@AEBUIBluetoothAudioSharingControllerStatics@234567@@Z@?$factory_cache_entry@UBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@UIBluetoothAudioSharingControllerStatics@234567@@impl@winrt@@QEAA?A_P$$QEAP6A?AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@2@AEBUIBluetoothAudioSharingControllerStatics@456782@@Z@Z @ 0x1800E8E68 (--$call@P6A-AUBluetoothAudioSharingController@Internal@Interface@Audio@Bluetooth@Microsoft@winrt.c)
 *     ??$call@P6A?AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@AEBUIBluetoothAudioSharingParametersStatics@234567@@Z@?$factory_cache_entry@UBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt@@UIBluetoothAudioSharingParametersStatics@234567@@impl@winrt@@QEAA?A_P$$QEAP6A?AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@2@AEBUIBluetoothAudioSharingParametersStatics@456782@@Z@Z @ 0x1800E8FC8 (--$call@P6A-AUBluetoothAudioSharingParameters@Internal@Interface@Audio@Bluetooth@Microsoft@winrt.c)
 * Callees:
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x1800395E0 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18005E4A0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     WINRT_IMPL_GetProcAddress @ 0x1800B3552 (WINRT_IMPL_GetProcAddress.c)
 *     RoGetActivationFactory_0 @ 0x1800B3CF0 (RoGetActivationFactory_0.c)
 *     WINRT_IMPL_FreeLibrary @ 0x1800B5DAE (WINRT_IMPL_FreeLibrary.c)
 *     LoadLibraryExW_0 @ 0x1800B5DBA (LoadLibraryExW_0.c)
 *     GetErrorInfo_0 @ 0x1800B6489 (GetErrorInfo_0.c)
 *     SetErrorInfo_0 @ 0x1800B64C5 (SetErrorInfo_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@Z @ 0x1800E8B2C (--$_Reallocate_grow_by@V_lambda_7030d12a21dba11210293044e97fe9c7_@@PEBG_K@-$basic_string@GU-$cha.c)
 *     ??$_Traits_rfind_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x1800E8D34 (--$_Traits_rfind_ch@U-$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1800EE920 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800EED64 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall winrt::impl::get_runtime_activation_factory_impl<0>(_DWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  int ActivationFactory_0; // edi
  HMODULE Library; // rax
  FARPROC ProcAddress; // rax
  __int64 v12; // rax
  const wchar_t *v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // r8
  const __m128i *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  LPCWSTR *v21; // rax
  const WCHAR *v22; // rcx
  HMODULE v23; // rbx
  FARPROC v24; // rax
  unsigned int (__fastcall ***v26)(_QWORD, __int64, __int64); // [rsp+30h] [rbp-48h] BYREF
  IErrorInfo *pperrinfo; // [rsp+38h] [rbp-40h] BYREF
  LPCWSTR lpLibFileName[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v29; // [rsp+50h] [rbp-28h]
  unsigned __int64 v30; // [rsp+58h] [rbp-20h]

  v8 = *a2;
  if ( winrt_activation_handler )
  {
    *a1 = ((__int64 (__fastcall *)(__int64, __int64, __int64))winrt_activation_handler)(v8, a3, a4);
    return a1;
  }
  ActivationFactory_0 = RoGetActivationFactory_0(v8, a3, a4);
  if ( ActivationFactory_0 == -2147221008 )
  {
    Library = LoadLibraryExW_0(L"combase.dll", 0LL, 0x1000u);
    ProcAddress = WINRT_IMPL_GetProcAddress(Library, "CoIncrementMTAUsage");
    if ( !ProcAddress )
    {
      *a1 = -2147221008;
      return a1;
    }
    v26 = 0LL;
    ((void (__fastcall *)(unsigned int (__fastcall ****)(_QWORD, __int64, __int64)))ProcAddress)(&v26);
    ActivationFactory_0 = RoGetActivationFactory_0(*a2, a3, a4);
  }
  if ( !ActivationFactory_0 )
  {
    *a1 = 0;
    return a1;
  }
  pperrinfo = 0LL;
  GetErrorInfo_0(0, &pperrinfo);
  *(_OWORD *)lpLibFileName = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v12 = *a2;
  if ( *a2 )
  {
    v13 = *(const wchar_t **)(v12 + 16);
    v14 = *(unsigned int *)(v12 + 4);
  }
  else
  {
    v13 = &LocaleName;
    v14 = 0LL;
  }
  std::wstring::_Construct<1,unsigned short const *>((char **)lpLibFileName, v13, v14);
  while ( 1 )
  {
    do
    {
      v16 = (const __m128i *)lpLibFileName;
      if ( v30 > 7 )
        v16 = (const __m128i *)lpLibFileName[0];
      v17 = std::_Traits_rfind_ch<std::char_traits<unsigned short>>(v16, v29, v15, 46);
      if ( v17 == -1 )
      {
        SetErrorInfo_0(0, pperrinfo);
        *a1 = ActivationFactory_0;
        goto LABEL_33;
      }
      std::wstring::resize(lpLibFileName, v17);
      v20 = v29;
      if ( v30 - v29 < 4 )
      {
        std::wstring::_Reallocate_grow_by<_lambda_7030d12a21dba11210293044e97fe9c7_,unsigned short const *,unsigned __int64>(
          (void **)lpLibFileName,
          4uLL,
          v18,
          v19,
          4LL);
      }
      else
      {
        v29 += 4LL;
        v21 = lpLibFileName;
        if ( v30 > 7 )
          v21 = (LPCWSTR *)lpLibFileName[0];
        *(LPCWSTR *)((char *)v21 + 2 * v20) = (LPCWSTR)0x6C006C0064002ELL;
        *((_WORD *)v21 + v20 + 4) = 0;
      }
      v22 = (const WCHAR *)lpLibFileName;
      if ( v30 > 7 )
        v22 = lpLibFileName[0];
      v23 = LoadLibraryExW_0(v22, 0LL, 0x1000u);
      std::wstring::resize(lpLibFileName, v29 - 4);
    }
    while ( !v23 );
    v24 = WINRT_IMPL_GetProcAddress(v23, "DllGetActivationFactory");
    if ( v24 )
      break;
LABEL_29:
    WINRT_IMPL_FreeLibrary(v23);
  }
  v26 = 0LL;
  if ( ((unsigned int (__fastcall *)(__int64, unsigned int (__fastcall ****)(_QWORD, __int64, __int64)))v24)(*a2, &v26)
    || (**v26)(v26, a3, a4) )
  {
    if ( v26 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v26);
    goto LABEL_29;
  }
  *a1 = 0;
  if ( v26 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v26);
LABEL_33:
  std::wstring::~wstring((void **)lpLibFileName);
  if ( pperrinfo )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&pperrinfo);
  return a1;
}
