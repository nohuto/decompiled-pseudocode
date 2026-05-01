/*
 * XREFs of ?TryGetCertSubjectName@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG_N@Z @ 0x18054DCF4
 * Callers:
 *     ?GetAppMetadata@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x180549500 (-GetAppMetadata@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING_.c)
 *     ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18054DAEC (-GetCertSignerHashFromExe@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEB.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18009B7B8 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802ED74C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18054D8E0 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-L.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AHPEAX@Z$1?CryptMsgClose@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18054D968 (--1-$unique_storage@U-$resource_policy@PEAXP6AHPEAX@Z$1-CryptMsgClose@@YAH0@ZU-$integral_constan.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CertCloseStoreNoParam@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18054D98C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CertCloseStoreNoParam@details@wil@@YAX0.c)
 *     ??1?$unique_storage@U?$resource_policy@PEBU_CERT_CONTEXT@@P6AHPEBU1@@Z$1?CertFreeCertificateContext@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEBU1@PEBU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18054D9B4 (--1-$unique_storage@U-$resource_policy@PEBU_CERT_CONTEXT@@P6AHPEBU1@@Z$1-CertFreeCertificateCont.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TryGetCertSubjectName(__int64 a1, const void *a2, char a3)
{
  char *v5; // rsi
  const char *v6; // r9
  const CERT_CONTEXT *CertificateInStore; // rax
  const CERT_CONTEXT *v8; // rbx
  DWORD NameStringW; // eax
  __int64 v10; // rdx
  const char *v11; // r9
  DWORD v12; // r14d
  int pvTypePara; // [rsp+60h] [rbp-A0h] BYREF
  HCRYPTMSG hCryptMsg; // [rsp+68h] [rbp-98h] BYREF
  LPWSTR pszNameString; // [rsp+70h] [rbp-90h] BYREF
  HCERTSTORE hCertStore; // [rsp+78h] [rbp-88h] BYREF
  const CERT_CONTEXT *v18[4]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE pvFindPara[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v20; // [rsp+A8h] [rbp-58h]
  __int128 v21; // [rsp+D0h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]
  DWORD pcbData; // [rsp+1A8h] [rbp+A8h] BYREF

  hCryptMsg = 0LL;
  hCertStore = 0LL;
  if ( !CryptQueryObject(1u, a2, 0x400u, 2u, 0, 0LL, 0LL, 0LL, &hCertStore, &hCryptMsg, 0LL) )
    goto LABEL_15;
  pcbData = 0;
  if ( !CryptMsgGetParam(hCryptMsg, 6u, 0, 0LL, &pcbData) )
    goto LABEL_15;
  v5 = (char *)LocalAlloc(0x40u, pcbData);
  v18[2] = (const CERT_CONTEXT *)v5;
  if ( !v5 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x1B,
      (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v6);
  if ( !CryptMsgGetParam(hCryptMsg, 6u, 0, v5, &pcbData) )
  {
LABEL_14:
    LocalFree(v5);
LABEL_15:
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
    goto LABEL_16;
  }
  memset_0(pvFindPara, 0, 0xD0uLL);
  v21 = *(_OWORD *)(v5 + 8);
  v20 = *(_OWORD *)(v5 + 24);
  CertificateInStore = CertFindCertificateInStore(hCertStore, 0x10001u, 0, 0xB0000u, pvFindPara, 0LL);
  v8 = CertificateInStore;
  v18[0] = CertificateInStore;
  if ( !CertificateInStore )
    goto LABEL_13;
  pvTypePara = 3;
  if ( a3 )
    pvTypePara = 33554435;
  NameStringW = CertGetNameStringW(CertificateInStore, 2u, 0, &pvTypePara, 0LL, 0);
  v12 = NameStringW;
  if ( !NameStringW )
  {
LABEL_13:
    wil::details::unique_storage<wil::details::resource_policy<_CERT_CONTEXT const *,int (*)(_CERT_CONTEXT const *),&int CertFreeCertificateContext(_CERT_CONTEXT const *),wistd::integral_constant<unsigned __int64,0>,_CERT_CONTEXT const *,_CERT_CONTEXT const *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_CERT_CONTEXT const *,int (*)(_CERT_CONTEXT const *),&int CertFreeCertificateContext(_CERT_CONTEXT const *),wistd::integral_constant<unsigned __int64,0>,_CERT_CONTEXT const *,_CERT_CONTEXT const *,0,std::nullptr_t>>(v18);
    goto LABEL_14;
  }
  wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &pszNameString,
    v10,
    NameStringW,
    v11);
  if ( !CertGetNameStringW(v8, 2u, 0, &pvTypePara, pszNameString, v12) )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&pszNameString);
    goto LABEL_13;
  }
  std::wstring::wstring((char **)a1, pszNameString);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&pszNameString);
  wil::details::unique_storage<wil::details::resource_policy<_CERT_CONTEXT const *,int (*)(_CERT_CONTEXT const *),&int CertFreeCertificateContext(_CERT_CONTEXT const *),wistd::integral_constant<unsigned __int64,0>,_CERT_CONTEXT const *,_CERT_CONTEXT const *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_CERT_CONTEXT const *,int (*)(_CERT_CONTEXT const *),&int CertFreeCertificateContext(_CERT_CONTEXT const *),wistd::integral_constant<unsigned __int64,0>,_CERT_CONTEXT const *,_CERT_CONTEXT const *,0,std::nullptr_t>>(v18);
  LocalFree(v5);
LABEL_16:
  wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CryptMsgClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CryptMsgClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&hCryptMsg);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CertCloseStoreNoParam_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(&hCertStore);
  return a1;
}
