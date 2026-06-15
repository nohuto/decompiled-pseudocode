/*
 * XREFs of ?GetFxClsidsFromPropertyStore@@YAJPEAUIPropertyStore@@0U_tagpropertykey@@1PEBGPEAIPEAPEAU_GUID@@@Z @ 0x180161A84
 * Callers:
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@00W4ValidEffectPackConfigurationSettings@@@Z @ 0x180058868 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@00W4ValidEffectPackConfigur.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180047B14 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x180063CF0 (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA?AV?$unique_ptr@$$BY0A@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x180071130 (--$make_unique_cotaskmem_nothrow@$$BY0A@U_GUID@@@wil@@YA-AV-$unique_ptr@$$BY0A@U_GUID@@U-$functi.c)
 *     ??4?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800805E0 (--4-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wis.c)
 *     ?GetDeviceInstanceId@@YAJPEAUIPropertyStore@@PEAPEAG@Z @ 0x180092D20 (-GetDeviceInstanceId@@YAJPEAUIPropertyStore@@PEAPEAG@Z.c)
 *     ?GetApoDeviceFromFxPropStore@@YAJPEAUIPropertyStore@@U_GUID@@PEAPEAG@Z @ 0x1801619B4 (-GetApoDeviceFromFxPropStore@@YAJPEAUIPropertyStore@@U_GUID@@PEAPEAG@Z.c)
 *     ?LookUpApoRegistration@@YAJPEAG0U_GUID@@@Z @ 0x180161F08 (-LookUpApoRegistration@@YAJPEAG0U_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GetFxClsidsFromPropertyStore(
        struct IPropertyStore *a1,
        struct IPropertyStore *a2,
        struct _tagpropertykey *a3,
        struct _tagpropertykey *a4,
        unsigned __int16 *a5,
        unsigned int *a6,
        struct _GUID **a7)
{
  unsigned __int16 *v10; // r12
  LPCLSID v11; // rbx
  unsigned int v12; // esi
  int v13; // eax
  __int64 v14; // r8
  const char *v15; // r9
  unsigned int v16; // edi
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  void **unique_cotaskmem; // rax
  void *v22; // rcx
  HRESULT v23; // eax
  int v24; // eax
  __int64 v25; // r8
  const char *v26; // r9
  void **v27; // rax
  void *v28; // rcx
  unsigned int i; // edi
  HRESULT v30; // eax
  HRESULT v31; // r14d
  unsigned __int16 *v32; // rdi
  int DeviceInstanceId; // eax
  unsigned int j; // r15d
  int ApoDeviceFromFxPropStore; // eax
  unsigned int v36; // r12d
  int v37; // eax
  int v38; // eax
  char *v40; // [rsp+28h] [rbp-69h]
  LPVOID pv; // [rsp+30h] [rbp-61h] BYREF
  unsigned __int16 *v42; // [rsp+38h] [rbp-59h] BYREF
  LPCLSID pclsid; // [rsp+40h] [rbp-51h] BYREF
  LPCOLESTR lpsz[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v45; // [rsp+58h] [rbp-39h]
  struct _GUID v46; // [rsp+60h] [rbp-31h] BYREF
  const unsigned __int16 *v47; // [rsp+70h] [rbp-21h]
  struct _GUID **v48; // [rsp+78h] [rbp-19h]
  unsigned int *v49; // [rsp+80h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+47h]

  v10 = a5;
  v47 = a5;
  v49 = a6;
  v48 = a7;
  *a6 = 0;
  *a7 = 0LL;
  *(_OWORD *)lpsz = 0LL;
  v45 = 0LL;
  v11 = 0LL;
  pclsid = 0LL;
  v12 = 0;
  v13 = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, LPCOLESTR *))a2->lpVtbl->GetValue)(
          a2,
          a3,
          lpsz);
  v16 = v13;
  if ( v13 < 0 )
  {
    v17 = (unsigned int)v13;
    v18 = 419LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
      (const char *)v17);
    goto LABEL_57;
  }
  v19 = LOWORD(lpsz[0]);
  if ( LOWORD(lpsz[0]) )
  {
    if ( LOWORD(lpsz[0]) != 31 )
    {
      v20 = 425LL;
LABEL_6:
      LODWORD(v40) = v19;
      v16 = -2147023092;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)v20,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)0x8007070CLL,
        (__int64)"0x%08X",
        v40);
      goto LABEL_57;
    }
    v12 = 1;
    unique_cotaskmem = (void **)wil::make_unique_cotaskmem_nothrow<_GUID [0]>(&pv, 1uLL, v14, v15);
    wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
      (void **)&pclsid,
      unique_cotaskmem);
    v22 = pv;
    pv = 0LL;
    if ( v22 )
      CoTaskMemFree(v22);
    v11 = pclsid;
    if ( pclsid )
    {
      v23 = CLSIDFromString(lpsz[1], pclsid);
      v16 = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AE,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)(unsigned int)v23);
LABEL_12:
        CoTaskMemFree(v11);
        goto LABEL_57;
      }
      goto LABEL_36;
    }
    v18 = 429LL;
    goto LABEL_33;
  }
  if ( !(unsigned int)operator==((__int64)a4, (__int64)&unk_18018B2A0) )
  {
    v24 = ((__int64 (__fastcall *)(struct IPropertyStore *, struct _tagpropertykey *, LPCOLESTR *))a2->lpVtbl->GetValue)(
            a2,
            a4,
            lpsz);
    v16 = v24;
    if ( v24 < 0 )
    {
      v17 = (unsigned int)v24;
      v18 = 434LL;
      goto LABEL_35;
    }
    v19 = LOWORD(lpsz[0]);
    if ( LOWORD(lpsz[0]) )
    {
      if ( LOWORD(lpsz[0]) != 4127 )
      {
        v20 = 437LL;
        goto LABEL_6;
      }
      v12 = (unsigned int)lpsz[1];
      if ( !LODWORD(lpsz[1]) )
      {
        v16 = -2147024883;
        v18 = 438LL;
LABEL_34:
        v17 = v16;
        goto LABEL_35;
      }
      v27 = (void **)wil::make_unique_cotaskmem_nothrow<_GUID [0]>(&pv, LODWORD(lpsz[1]), v25, v26);
      wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::operator=(
        (void **)&pclsid,
        v27);
      v28 = pv;
      pv = 0LL;
      if ( v28 )
        CoTaskMemFree(v28);
      v11 = pclsid;
      if ( !pclsid )
      {
        v18 = 442LL;
LABEL_33:
        v16 = -2147024882;
        goto LABEL_34;
      }
      for ( i = 0; i < v12; ++i )
      {
        v30 = CLSIDFromString(*(LPCOLESTR *)(v45 + 8LL * i), &v11[i]);
        v31 = v30;
        if ( v30 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1BD,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
            (const char *)(unsigned int)v30);
          goto LABEL_30;
        }
      }
    }
  }
LABEL_36:
  v32 = 0LL;
  v42 = 0LL;
  if ( a1 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v42,
      0LL);
    DeviceInstanceId = GetDeviceInstanceId(a1, &v42);
    v16 = DeviceInstanceId;
    if ( DeviceInstanceId < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C6,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)(unsigned int)DeviceInstanceId);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v42);
      if ( !v11 )
        goto LABEL_57;
      goto LABEL_12;
    }
    v32 = v42;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= v12 )
    {
      *v48 = v11;
      *v49 = v12;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v42);
      v16 = 0;
      goto LABEL_57;
    }
    if ( v10 )
      break;
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v46 = v11[j];
    ApoDeviceFromFxPropStore = GetApoDeviceFromFxPropStore(a2, &v46, (unsigned __int16 **)&pv);
    v36 = ApoDeviceFromFxPropStore;
    if ( ApoDeviceFromFxPropStore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D2,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)(unsigned int)ApoDeviceFromFxPropStore);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v42);
      if ( v11 )
        CoTaskMemFree(v11);
      v16 = v36;
      goto LABEL_57;
    }
    v46 = v11[j];
    v37 = LookUpApoRegistration((unsigned __int16 *)pv, v32, &v46);
    v31 = v37;
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D3,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)(unsigned int)v37);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
      goto LABEL_50;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
    v10 = (unsigned __int16 *)v47;
LABEL_48:
    ;
  }
  v46 = v11[j];
  v38 = LookUpApoRegistration(v10, v32, &v46);
  v31 = v38;
  if ( v38 >= 0 )
    goto LABEL_48;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D8,
    (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
    (const char *)(unsigned int)v38);
LABEL_50:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v42);
  if ( !v11 )
    goto LABEL_31;
LABEL_30:
  CoTaskMemFree(v11);
LABEL_31:
  v16 = v31;
LABEL_57:
  PropVariantClear((PROPVARIANT *)lpsz);
  return v16;
}
