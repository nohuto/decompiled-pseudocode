/*
 * XREFs of ?IsExpandedResources@BroadcastDVRComponent@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x18004F1F4
 * Callers:
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180034F30 (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18004ECD4 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C5830 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  const char *v21; // r9
  __int16 v22; // cx
  int v23; // eax
  unsigned int k; // ebx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  HLOCAL *v28; // rcx
  unsigned int v29; // edi
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int v32; // r14d
  HLOCAL *v33; // rcx
  unsigned int n; // edi
  __int64 v35; // rcx
  __int64 v36; // rcx
  HLOCAL *v37; // rcx
  unsigned int j; // esi
  int v39; // esi
  HLOCAL *v40; // rcx
  unsigned int m; // edi
  __int64 v42; // [rsp+58h] [rbp-B0h] BYREF
  HLOCAL hMem; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v44; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+70h] [rbp-98h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-90h] BYREF
  __int64 v47; // [rsp+80h] [rbp-88h]
  __int64 v48; // [rsp+88h] [rbp-80h]
  __int128 v49; // [rsp+90h] [rbp-78h] BYREF
  struct IApplicationView *v50; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE pSid2[48]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v52[48]; // [rsp+D8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  *a3 = 0;
  v50 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
  v45 = 0LL;
  v5 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v45);
  if ( v5(a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v45) < 0 )
  {
LABEL_47:
    v31 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
    return 0LL;
  }
  v44 = 0LL;
  v6 = v45;
  v7 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v45 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v44);
  v8 = v7(v6, &v44);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x73B,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v8);
LABEL_73:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v44);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v45);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v50);
    return v9;
  }
  pv = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v10 = *v44;
  v47 = -1LL;
  v48 = -1LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, LPVOID *))(v10 + 120))(v44, 0LL, &pv);
  v9 = v11;
  v12 = -2147023728;
  if ( v11 == -2147023728 )
  {
LABEL_63:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&pv);
    v9 = v12;
    goto LABEL_73;
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
    v47 = 0LL;
    v48 = 0LL;
    v26 = (__int64)v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
    return v9;
  }
  hMem = 0LL;
  LODWORD(v42) = 0;
  v13 = QueryApplicationCapabilities(pv, &hMem, &v42, 0LL);
  v12 = v13;
  if ( v13 == -2147024444 )
  {
    v14 = (HLOCAL *)hMem;
    if ( hMem )
    {
      for ( i = 0; i < (unsigned int)v42; v14 = (HLOCAL *)hMem )
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
    v47 = 0LL;
    v48 = 0LL;
    v16 = (__int64)v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = v45;
    if ( v45 )
    {
      v45 = 0LL;
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
    v37 = (HLOCAL *)hMem;
    if ( hMem )
    {
      for ( j = 0; j < (unsigned int)v42; v37 = (HLOCAL *)hMem )
      {
        LocalFree(v37[j]);
        *((_QWORD *)hMem + j++) = 0LL;
      }
      LocalFree(v37);
    }
    goto LABEL_63;
  }
  v49 = 0LL;
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
  v21 = v19 == 0 ? (const char *)0xC000000DLL : 0LL;
  if ( v19 )
  {
    v22 = 2 * v19;
    LOWORD(v49) = -2 - v22;
    WORD1(v49) = -v22;
    *((_QWORD *)&v49 + 1) = L"expandedResources";
  }
  if ( (int)v21 >= 0 )
  {
    v23 = RtlDeriveCapabilitySidsFromName(&v49, v52, pSid2);
    if ( v23 >= 0 )
    {
      for ( k = 0; ; ++k )
      {
        v25 = v42;
        if ( k >= (unsigned int)v42 )
          break;
        if ( EqualSid(*((PSID *)hMem + k), pSid2) )
        {
          *a3 = 1;
          v25 = v42;
          break;
        }
      }
      v28 = (HLOCAL *)hMem;
      if ( hMem )
      {
        v29 = 0;
        if ( v25 )
        {
          do
          {
            LocalFree(v28[v29]);
            *((_QWORD *)hMem + v29++) = 0LL;
            v28 = (HLOCAL *)hMem;
          }
          while ( v29 < (unsigned int)v42 );
        }
        LocalFree(v28);
      }
      if ( pv )
      {
        CoTaskMemFree(pv);
        pv = 0LL;
      }
      v47 = 0LL;
      v48 = 0LL;
      v30 = (__int64)v44;
      if ( v44 )
      {
        v44 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      goto LABEL_47;
    }
    v39 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x76D,
            (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
            (const char *)(unsigned int)v23,
            0);
    v40 = (HLOCAL *)hMem;
    if ( hMem )
    {
      for ( m = 0; m < (unsigned int)v42; v40 = (HLOCAL *)hMem )
      {
        LocalFree(v40[m]);
        *((_QWORD *)hMem + m++) = 0LL;
      }
      LocalFree(v40);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&pv);
    v9 = v39;
    goto LABEL_73;
  }
  v32 = wil::details::in1diag3::Return_NtStatus(
          retaddr,
          (void *)0x762,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          v21,
          0);
  v33 = (HLOCAL *)hMem;
  if ( hMem )
  {
    for ( n = 0; n < (unsigned int)v42; v33 = (HLOCAL *)hMem )
    {
      LocalFree(v33[n]);
      *((_QWORD *)hMem + n++) = 0LL;
    }
    LocalFree(v33);
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v47 = 0LL;
  v48 = 0LL;
  v35 = (__int64)v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  v36 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
  return v32;
}
