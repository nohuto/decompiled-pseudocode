/*
 * XREFs of ?HandleAccessChangeNotification@@YAJPEBG0@Z @ 0x1800D3424
 * Callers:
 *     s_CapabilityAccessManagerNotification @ 0x1800D3C70 (s_CapabilityAccessManagerNotification.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x18001D138 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180063624 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180067534 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18007B688 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B0364 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?RtlFreeSid@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800D32B8 (--1-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-RtlFreeSid@@YAPEAX0@ZU-$integral_cons.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HandleAccessChangeNotification(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  HLOCAL v4; // r8
  int v5; // eax
  unsigned int LastError; // ebx
  const char *v7; // r9
  void *v8; // rcx
  _QWORD *v9; // rdx
  HLOCAL hMem; // [rsp+30h] [rbp-29h] BYREF
  PSID Sid; // [rsp+38h] [rbp-21h] BYREF
  HLOCAL v13; // [rsp+40h] [rbp-19h] BYREF
  const unsigned __int16 *v14; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v15[7]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD *v16; // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  Sid = 0LL;
  v4 = 0LL;
  hMem = 0LL;
  if ( a2 )
  {
    Sid = 0LL;
    v5 = AppContainerDeriveSidFromMoniker(a2, &Sid);
    LastError = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_10;
    }
    hMem = 0LL;
    if ( !ConvertSidToStringSidW(Sid, (LPWSTR *)&hMem) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x2A,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
                    v7);
      goto LABEL_10;
    }
    v4 = hMem;
  }
  (*(void (__fastcall **)(struct IAudioPolicyManager *, const unsigned __int16 *, HLOCAL, const unsigned __int16 *))(*(_QWORD *)g_PolicyManager + 56LL))(
    g_PolicyManager,
    a2,
    v4,
    a1);
  v13 = hMem;
  v14 = a1;
  v15[0] = off_180175260;
  v15[1] = &v13;
  v15[2] = &v14;
  v16 = v15;
  CEndpointStoreCache::ForEachEndpoint(v8, (__int64)v15);
  if ( v16 )
  {
    v9 = v15;
    LOBYTE(v9) = v16 != v15;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v16 + 32LL))(v16, v9);
  }
  LastError = 0;
LABEL_10:
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&hMem);
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * RtlFreeSid(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * RtlFreeSid(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Sid);
  return LastError;
}
