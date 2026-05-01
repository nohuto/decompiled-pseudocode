/*
 * XREFs of ?IsExpandedResources@BroadcastDVRComponent@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x18010F044
 * Callers:
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800B4F1C (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18010F694 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CE330 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall BroadcastDVRComponent::IsExpandedResources(
        BroadcastDVRComponent *this,
        struct IApplicationView *a2,
        bool *a3)
{
  int (__fastcall *v5)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 **); // rdi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  int v12; // edi
  int v13; // eax
  HLOCAL *v14; // rcx
  unsigned int i; // edi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // rcx
  const wchar_t *v20; // rax
  int v21; // eax
  unsigned int k; // ebx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  HLOCAL *v26; // rcx
  unsigned int v27; // edi
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // r14d
  HLOCAL *v31; // rcx
  unsigned int n; // edi
  __int64 v33; // rcx
  __int64 v34; // rcx
  HLOCAL *v35; // rcx
  unsigned int j; // esi
  int v37; // esi
  HLOCAL *v38; // rcx
  unsigned int m; // edi
  __int64 v40; // [rsp+58h] [rbp-B0h] BYREF
  HLOCAL hMem; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v42; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-90h] BYREF
  __int64 v45; // [rsp+80h] [rbp-88h]
  __int64 v46; // [rsp+88h] [rbp-80h]
  __int128 v47; // [rsp+90h] [rbp-78h] BYREF
  struct IApplicationView *v48; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE pSid2[48]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v50[48]; // [rsp+D8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  *a3 = 0;
  v48 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
  v43 = 0LL;
  v5 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v43);
  if ( v5(a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v43) < 0 )
  {
LABEL_45:
    v29 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
    return 0LL;
  }
  v42 = 0LL;
  v6 = v43;
  v7 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v43 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
  v8 = v7(v6, &v42);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x73B,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v8);
LABEL_71:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v43);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v48);
    return v9;
  }
  pv = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v10 = *v42;
  v45 = -1LL;
  v46 = -1LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, LPVOID *))(v10 + 120))(v42, 0LL, &pv);
  v9 = v11;
  v12 = -2147023728;
  if ( v11 == -2147023728 )
  {
LABEL_61:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pv);
    v9 = v12;
    goto LABEL_71;
  }
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x740,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v11);
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v45 = 0LL;
    v46 = 0LL;
    v24 = (__int64)v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v25 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
    return v9;
  }
  hMem = 0LL;
  LODWORD(v40) = 0;
  v13 = QueryApplicationCapabilities(pv, &hMem, &v40, 0LL);
  v12 = v13;
  if ( v13 == -2147024444 )
  {
    v14 = (HLOCAL *)hMem;
    if ( hMem )
    {
      for ( i = 0; i < (unsigned int)v40; v14 = (HLOCAL *)hMem )
      {
        LocalFree(v14[i]);
        *((_QWORD *)hMem + i++) = 0LL;
      }
      LocalFree(v14);
    }
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v45 = 0LL;
    v46 = 0LL;
    v16 = (__int64)v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
    return 2147942852LL;
  }
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75C,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v13);
    v35 = (HLOCAL *)hMem;
    if ( hMem )
    {
      for ( j = 0; j < (unsigned int)v40; v35 = (HLOCAL *)hMem )
      {
        LocalFree(v35[j]);
        *((_QWORD *)hMem + j++) = 0LL;
      }
      LocalFree(v35);
    }
    goto LABEL_61;
  }
  v47 = 0LL;
  v19 = 0x7FFFLL;
  v20 = L"expandedResources";
  do
  {
    if ( !*v20 )
      break;
    ++v20;
    --v19;
  }
  while ( v19 );
  if ( v19 )
  {
    LOWORD(v47) = 2 * (0x7FFF - v19);
    WORD1(v47) = v47 + 2;
    *((_QWORD *)&v47 + 1) = L"expandedResources";
    v21 = RtlDeriveCapabilitySidsFromName(&v47, v50, pSid2);
    if ( v21 >= 0 )
    {
      for ( k = 0; ; ++k )
      {
        v23 = v40;
        if ( k >= (unsigned int)v40 )
          break;
        if ( EqualSid(*((PSID *)hMem + k), pSid2) )
        {
          *a3 = 1;
          v23 = v40;
          break;
        }
      }
      v26 = (HLOCAL *)hMem;
      if ( hMem )
      {
        v27 = 0;
        if ( v23 )
        {
          do
          {
            LocalFree(v26[v27]);
            *((_QWORD *)hMem + v27++) = 0LL;
            v26 = (HLOCAL *)hMem;
          }
          while ( v27 < (unsigned int)v40 );
        }
        LocalFree(v26);
      }
      if ( pv )
      {
        CoTaskMemFree(pv);
        pv = 0LL;
      }
      v45 = 0LL;
      v46 = 0LL;
      v28 = (__int64)v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      goto LABEL_45;
    }
    v37 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x76D,
            (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
            (const char *)(unsigned int)v21,
            0);
    v38 = (HLOCAL *)hMem;
    if ( hMem )
    {
      for ( m = 0; m < (unsigned int)v40; v38 = (HLOCAL *)hMem )
      {
        LocalFree(v38[m]);
        *((_QWORD *)hMem + m++) = 0LL;
      }
      LocalFree(v38);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pv);
    v9 = v37;
    goto LABEL_71;
  }
  v30 = wil::details::in1diag3::Return_NtStatus(
          retaddr,
          (void *)0x762,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          v19 == 0 ? (const char *)0xC000000DLL : 0,
          0);
  v31 = (HLOCAL *)hMem;
  if ( hMem )
  {
    for ( n = 0; n < (unsigned int)v40; v31 = (HLOCAL *)hMem )
    {
      LocalFree(v31[n]);
      *((_QWORD *)hMem + n++) = 0LL;
    }
    LocalFree(v31);
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v45 = 0LL;
  v46 = 0LL;
  v33 = (__int64)v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
  return v30;
}
