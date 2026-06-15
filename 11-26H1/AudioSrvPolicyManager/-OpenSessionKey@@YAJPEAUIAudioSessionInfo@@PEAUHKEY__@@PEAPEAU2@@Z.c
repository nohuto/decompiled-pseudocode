/*
 * XREFs of ?OpenSessionKey@@YAJPEAUIAudioSessionInfo@@PEAUHKEY__@@PEAPEAU2@@Z @ 0x180002BD0
 * Callers:
 *     ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180002654 (-LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180001FB0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x1800025B0 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180004A44 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??1?$unique_ptr@GU?$default_delete@G@std@@@std@@QEAA@XZ @ 0x180004A84 (--1-$unique_ptr@GU-$default_delete@G@std@@@std@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180004B90 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B750 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x18001C4D4 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18001E494 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18002407C (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800281CC (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18002E830 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall OpenSessionKey(struct IAudioSessionInfo *a1, HKEY a2, HKEY *a3)
{
  HKEY v3; // r13
  RPC_STATUS v5; // eax
  RPC_STATUS *v6; // rdi
  unsigned int LowRightsRegistryKey; // ebx
  int v9; // eax
  bool v10; // zf
  unsigned int v11; // r14d
  __int64 v12; // r12
  __int64 v13; // rax
  LPCWSTR v14; // rbx
  unsigned int v15; // eax
  DWORD i; // esi
  const unsigned __int16 *v17; // rbx
  __int64 v18; // rdx
  void *p_hkey; // rcx
  LPCWSTR v20; // rsi
  unsigned int ValueW; // eax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  char *v24; // rsi
  unsigned int v25; // eax
  HKEY v26; // rcx
  ATL::CAtlException *v27; // rbx
  ATL::CAtlException *v28; // rbx
  ATL::CAtlException *v29; // rbx
  int phkResult; // [rsp+20h] [rbp-B8h]
  int phkResulta; // [rsp+20h] [rbp-B8h]
  int phkResultb; // [rsp+20h] [rbp-B8h]
  LPCWSTR lpSubKey; // [rsp+40h] [rbp-98h] BYREF
  HKEY hkey; // [rsp+48h] [rbp-90h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-88h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp-80h] BYREF
  int v37; // [rsp+5Ch] [rbp-7Ch]
  unsigned int v38; // [rsp+60h] [rbp-78h]
  char *v39; // [rsp+68h] [rbp-70h] BYREF
  RPC_STATUS *v40; // [rsp+70h] [rbp-68h]
  char v41; // [rsp+78h] [rbp-60h]
  ATL::CAtlException *v42; // [rsp+80h] [rbp-58h] BYREF
  ATL::CAtlException *v43; // [rsp+88h] [rbp-50h] BYREF
  ATL::CAtlException *v44; // [rsp+90h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  RPC_STATUS v48; // [rsp+F8h] [rbp+20h] BYREF

  v3 = a2;
  *a3 = 0LL;
  v5 = RpcImpersonateClient(0LL);
  v48 = v5;
  v6 = &v48;
  v40 = &v48;
  v41 = 1;
  if ( v5 && v5 != 1725 )
  {
    if ( v5 > 0 )
      LowRightsRegistryKey = (unsigned __int16)v5 | 0x80070000;
    else
      LowRightsRegistryKey = v5;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10B,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)LowRightsRegistryKey,
      phkResult);
    if ( !v48 )
      RpcRevertToSelf();
    return LowRightsRegistryKey;
  }
  pv = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *, LPVOID *))(*(_QWORD *)a1 + 144LL))(a1, &pv);
  LowRightsRegistryKey = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10E,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v9,
      phkResult);
    if ( pv )
      CoTaskMemFree(pv);
    goto LABEL_12;
  }
  try
  {
    v38 = 0;
    v38 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash((unsigned __int16 *)pv);
  }
  catch ( ATL::CAtlException *v42 )
  {
    v27 = v42;
    if ( *(_DWORD *)v42 == -1073741571 )
      _o__resetstkoflw();
    v37 = *(_DWORD *)v27;
    LowRightsRegistryKey = v37;
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x116,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v37,
        phkResult);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
LABEL_12:
      v10 = v48 == 0;
      goto LABEL_13;
    }
    v3 = a2;
    v6 = v40;
  }
  v11 = 0;
  v37 = 0;
  v12 = -1LL;
  while ( 1 )
  {
    v13 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr);
    try
    {
      lpSubKey = (LPCWSTR)(v13 + 24);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        &lpSubKey,
        L"%x_%d",
        v38,
        v11);
    }
    catch ( ATL::CAtlException *v43 )
    {
      v28 = v43;
      if ( *(_DWORD *)v43 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v39) = *(_DWORD *)v28;
      LowRightsRegistryKey = (unsigned int)v39;
      if ( (int)v39 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11F,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)(unsigned int)v39,
          phkResult);
        ATL::CStringData::Release((ATL::CStringData *)(lpSubKey - 12));
        if ( pv )
          CoTaskMemFree(pv);
        v10 = *v40 == 0;
LABEL_13:
        if ( v10 )
        {
          RpcRevertToSelf();
          return LowRightsRegistryKey;
        }
        return LowRightsRegistryKey;
      }
      v12 = -1LL;
      v3 = a2;
      v6 = v40;
      v11 = v37;
    }
    hkey = 0LL;
    v14 = lpSubKey;
    v15 = RegOpenKeyExW(v3, lpSubKey, 0, 0x2001Fu, &hkey);
    if ( v15 == 2 )
    {
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hkey);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&lpSubKey);
      for ( i = 0; ; ++i )
      {
        pcbData = i;
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&hkey);
        try
        {
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
            &hkey,
            L"%x_%d",
            v38,
            i);
        }
        catch ( ATL::CAtlException *v44 )
        {
          v29 = v44;
          if ( *(_DWORD *)v44 == -1073741571 )
            _o__resetstkoflw();
          LODWORD(v39) = *(_DWORD *)v29;
          LowRightsRegistryKey = (unsigned int)v39;
          if ( (int)v39 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x13E,
              (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
              (const char *)(unsigned int)v39,
              phkResulta);
            ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&hkey);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
            v10 = *v40 == 0;
            goto LABEL_13;
          }
          v12 = -1LL;
          v3 = a2;
          v6 = v40;
          i = pcbData;
        }
        lpSubKey = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
          &lpSubKey,
          0LL);
        v17 = (const unsigned __int16 *)hkey;
        if ( RegOpenKeyExW(v3, (LPCWSTR)hkey, 0, 0x20019u, (PHKEY)&lpSubKey) )
          break;
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&lpSubKey);
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&hkey);
      }
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&lpSubKey);
      lpSubKey = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
        &lpSubKey,
        0LL);
      LowRightsRegistryKey = CreateLowRightsRegistryKey(v3, v17, 0x2001Fu, (HKEY *)&lpSubKey);
      if ( (LowRightsRegistryKey & 0x80000000) != 0 )
      {
        v18 = 331LL;
LABEL_35:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)LowRightsRegistryKey,
          phkResulta);
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&lpSubKey);
        p_hkey = &hkey;
LABEL_43:
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(p_hkey);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
        v10 = *v6 == 0;
        goto LABEL_13;
      }
      do
        ++v12;
      while ( *((_WORD *)pv + v12) );
      v20 = lpSubKey;
      LowRightsRegistryKey = RegSetValueExW((HKEY)lpSubKey, 0LL, 0, 1u, (const BYTE *)pv, 2 * v12 + 2);
      if ( (LowRightsRegistryKey & 0x80000000) != 0 )
      {
        v18 = 335LL;
        goto LABEL_35;
      }
      lpSubKey = 0LL;
      *a3 = (HKEY)v20;
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&lpSubKey);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&hkey);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
LABEL_56:
      if ( !*v6 )
        RpcRevertToSelf();
      return 0LL;
    }
    if ( v15 )
    {
      LowRightsRegistryKey = wil::details::in1diag3::Return_Win32(
                               retaddr,
                               (void *)0x125,
                               (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                               (const char *)v15);
LABEL_42:
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hkey);
      p_hkey = &lpSubKey;
      goto LABEL_43;
    }
    pcbData = 0;
    ValueW = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, 0LL, &pcbData);
    if ( ValueW )
    {
      LowRightsRegistryKey = wil::details::in1diag3::Return_Win32(
                               retaddr,
                               (void *)0x128,
                               (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                               (const char *)ValueW);
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hkey);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&lpSubKey);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
      v10 = *v6 == 0;
      goto LABEL_13;
    }
    v22 = ((unsigned __int64)pcbData >> 1) + 1;
    v23 = 2 * v22;
    if ( !is_mul_ok(v22, 2uLL) )
      v23 = -1LL;
    v24 = (char *)operator new[](v23, (const struct std::nothrow_t *)&std::nothrow);
    v39 = v24;
    if ( !v24 )
      break;
    v25 = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, v24, &pcbData);
    if ( v25 )
    {
      LowRightsRegistryKey = wil::details::in1diag3::Return_Win32(
                               retaddr,
                               (void *)0x12D,
                               (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
                               (const char *)v25);
      std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v39);
      goto LABEL_42;
    }
    if ( CompareStringW(0x7Fu, 1u, (PCNZWCH)pv, -1, (PCNZWCH)v24, -1) == 2 )
    {
      v26 = hkey;
      hkey = 0LL;
      *a3 = v26;
      operator delete(v24, (const struct std::nothrow_t *)2);
      if ( hkey )
        RegCloseKey(hkey);
      ATL::CStringData::Release((ATL::CStringData *)(v14 - 12));
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_56;
    }
    operator delete(v24, (const struct std::nothrow_t *)2);
    if ( hkey )
      RegCloseKey(hkey);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v14 - 3) + 8LL))(*((_QWORD *)v14 - 3));
    v37 = ++v11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12B,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
    (const char *)0x8007000ELL,
    phkResultb);
  std::unique_ptr<unsigned short>::~unique_ptr<unsigned short>(&v39);
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hkey);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&lpSubKey);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
  if ( !*v6 )
    RpcRevertToSelf();
  return 2147942414LL;
}
