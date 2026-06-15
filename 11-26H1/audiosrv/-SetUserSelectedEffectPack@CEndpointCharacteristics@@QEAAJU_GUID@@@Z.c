/*
 * XREFs of ?SetUserSelectedEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18013DB54
 * Callers:
 *     s_epmSetCurrentEffectPackForEndpoint @ 0x18010E560 (s_epmSetCurrentEffectPackForEndpoint.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ @ 0x180138F70 (-EnsureRwFxPropertyStoreExists@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18013CD84 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CEndpointCharacteristics::SetUserSelectedEffectPack(struct _RTL_CRITICAL_SECTION *this, IID *rclsid)
{
  int v4; // eax
  unsigned int v5; // edi
  LPOLESTR v6; // rax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  LPOLESTR lpsz[2]; // [rsp+20h] [rbp-50h] BYREF
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+40h] [rbp-30h]
  struct _RTL_CRITICAL_SECTION *v14[2]; // [rsp+50h] [rbp-20h] BYREF
  char v15; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  (*(void (__fastcall **)(__int64, struct _RTL_CRITICAL_SECTION **, _QWORD))(*(_QWORD *)g_policyConfigInternal + 24LL))(
    g_policyConfigInternal,
    v14,
    *(_QWORD *)&this[1].LockCount);
  v14[1] = this;
  v15 = 1;
  if ( !memcmp_0(rclsid, &GUID_00000000_0000_0000_0000_000000000000, 0x10uLL) )
  {
    v8 = CEndpointCharacteristics::EnsureRwFxPropertyStoreExists((CEndpointCharacteristics *)this);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x611,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v8);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 32LL))(
        g_policyConfigInternal,
        *(_QWORD *)&this[1].LockCount);
      goto LABEL_15;
    }
    *(_OWORD *)pvar = 0LL;
    v13 = 0LL;
    LOWORD(pvar[0]) = 19;
    LODWORD(pvar[1]) = 1;
    v9 = (*(__int64 (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)&this[2].LockCount + 48LL))(
           *(_QWORD *)&this[2].LockCount,
           &PKEY_AudioEndpoint_Disable_SysFx,
           pvar);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1560LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v9);
    PropVariantClear(pvar);
LABEL_14:
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 32LL))(
      g_policyConfigInternal,
      *(_QWORD *)&this[1].LockCount);
    v5 = 0;
    goto LABEL_15;
  }
  *(IID *)pvar = *rclsid;
  v4 = CEndpointCharacteristics::SetCurrentEffectPackInternal(this, (struct _GUID *)pvar);
  v5 = v4;
  if ( v4 >= 0 )
  {
    lpsz[0] = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)lpsz,
      0LL);
    if ( StringFromCLSID(rclsid, lpsz) >= 0 )
    {
      pvar[0] = (PROPVARIANT)31;
      v13 = 0LL;
      v6 = lpsz[0];
      lpsz[0] = 0LL;
      pvar[1] = v6;
      v7 = (*(__int64 (__fastcall **)(ULONG_PTR, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)this[1].SpinCount
                                                                                               + 48LL))(
             this[1].SpinCount,
             &PKEY_AudioEndpoint_UserSelectedEffectPack,
             pvar);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1574LL,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v7);
      PropVariantClear(pvar);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)lpsz);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x61C,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v4);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 32LL))(
    g_policyConfigInternal,
    *(_QWORD *)&this[1].LockCount);
LABEL_15:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v14);
  return v5;
}
