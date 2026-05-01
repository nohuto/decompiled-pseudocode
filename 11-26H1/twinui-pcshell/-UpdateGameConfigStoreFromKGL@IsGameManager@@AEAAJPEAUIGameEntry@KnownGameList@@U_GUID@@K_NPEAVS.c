/*
 * XREFs of ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x18010F8D8
 * Callers:
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x18004D490 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ @ 0x18010EB2C (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ.c)
 *     ?ScanKGLForFSECompat@IsGameManager@@AEAAJXZ @ 0x18010F3E4 (-ScanKGLForFSECompat@IsGameManager@@AEAAJXZ.c)
 *     ?CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z @ 0x1801F3550 (-CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18008984C (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800F7710 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800F7D00 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     memcpy_s_1 @ 0x18010BCA0 (memcpy_s_1.c)
 *     ?FreeGameConfig@@YAXPEAUGameConfig@ExecutionModel@@@Z @ 0x18011038C (-FreeGameConfig@@YAXPEAUGameConfig@ExecutionModel@@@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL@GameDVRTraceProvider@@SAXJPEBGK@Z @ 0x1802ADD78 (-IsGameManager_UpdateGameConfigStoreFromKGL@GameDVRTraceProvider@@SAXJPEBGK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     ?GetGameProfileFromAttribute@AutoGameProfile@@YAJPEAUAttributeValue@KnownGameList@@KPEAKPEA_K1PEA_N3@Z @ 0x18067B78C (-GetGameProfileFromAttribute@AutoGameProfile@@YAJPEAUAttributeValue@KnownGameList@@KPEAKPEA_K1PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall IsGameManager::UpdateGameConfigStoreFromKGL(
        IsGameManager *this,
        struct KnownGameList::IGameEntry *a2,
        struct _GUID *a3,
        unsigned int a4,
        bool a5,
        struct Windows::Internal::String *a6,
        struct _GUID *a7)
{
  unsigned int v11; // r12d
  unsigned int v12; // r13d
  int v13; // eax
  int v14; // ebx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  unsigned int v17; // eax
  void *v18; // rcx
  unsigned int i; // edi
  int v20; // eax
  const char *v21; // r9
  LPVOID v22; // rcx
  unsigned __int16 v23; // di
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  DWORD ActiveProcessorCount; // eax
  int GameProfileFromAttribute; // eax
  int v35; // eax
  int v36; // eax
  const char *v37; // r9
  const unsigned __int16 *v38; // rdi
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rcx
  const char *v42; // r9
  unsigned int v43; // r12d
  void *v44; // rbx
  __int64 v45; // rcx
  int v46; // eax
  int v47; // edi
  unsigned int v48; // r13d
  void *v49; // rbx
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // eax
  int v54; // eax
  void *v55; // r12
  rsize_t v56; // r14
  unsigned __int64 v57; // rsi
  unsigned __int64 v58; // rdi
  void *v59; // rax
  _WORD *v60; // rbx
  _WORD *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rcx
  int v70; // eax
  unsigned __int64 *v72; // [rsp+20h] [rbp-E0h]
  bool *v73; // [rsp+38h] [rbp-C8h]
  bool v74; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v75[3]; // [rsp+41h] [rbp-BFh] BYREF
  LPVOID pv[2]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v77[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v78; // [rsp+64h] [rbp-9Ch] BYREF
  int v79; // [rsp+68h] [rbp-98h] BYREF
  void *v80[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v81; // [rsp+80h] [rbp-80h]
  __int64 v82; // [rsp+90h] [rbp-70h]
  int v83; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v84; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned __int64 v85; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v86; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v87; // [rsp+B8h] [rbp-48h]
  int v88; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v89; // [rsp+C4h] [rbp-3Ch] BYREF
  int v90; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v91; // [rsp+CCh] [rbp-34h] BYREF
  rsize_t SourceSize; // [rsp+D0h] [rbp-30h]
  __int128 v93; // [rsp+E0h] [rbp-20h] BYREF
  Windows::Internal::String *v94[2]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v95[2]; // [rsp+100h] [rbp+0h] BYREF
  char *v96; // [rsp+108h] [rbp+8h] BYREF
  char *v97; // [rsp+110h] [rbp+10h] BYREF
  char *v98; // [rsp+118h] [rbp+18h]
  char *v99; // [rsp+120h] [rbp+20h]
  void *Source; // [rsp+128h] [rbp+28h]
  __int128 Buf1; // [rsp+130h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v94[0] = a6;
  *(_QWORD *)&v93 = a7;
  *(_OWORD *)v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  *(_QWORD *)&v86 = 0LL;
  *((_QWORD *)&v86 + 1) = 0x100000001LL;
  v87 = 0x200000002LL;
  v98 = 0LL;
  v11 = 0;
  v99 = 0LL;
  v12 = 0;
  Source = 0LL;
  LODWORD(SourceSize) = 0;
  v84 = 0;
  *(_QWORD *)v95 = 0LL;
  LODWORD(v85) = 0;
  LOBYTE(v75[0]) = 0;
  LODWORD(v80[0]) = *((_DWORD *)this + 11);
  DWORD1(v81) = 1;
  v82 = 32 * (unsigned int)a5;
  if ( a7 )
    *a7 = (struct _GUID)xmmword_18077AA50;
  if ( !memcmp_0(a3, &xmmword_18077AA50, 0x10uLL) || a4 <= 2 )
  {
    LODWORD(v82) = (32 * a5) | 0x11;
    v77[0] = 0;
    v13 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, _WORD *))(*(_QWORD *)a2 + 40LL))(a2, v77);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = (unsigned int)v13;
      v16 = 1565LL;
      goto LABEL_12;
    }
    v17 = v77[0];
    LODWORD(v81) = v77[0];
    if ( v77[0] )
    {
      v18 = CoTaskMemAlloc(16LL * v77[0]);
      v80[1] = v18;
      if ( !v18 )
      {
        v16 = 1571LL;
        goto LABEL_10;
      }
      v17 = v81;
    }
    else
    {
      v18 = v80[1];
    }
    memset_0(v18, 0, 16LL * v17);
    for ( i = 0; i < (unsigned int)v81; ++i )
    {
      v88 = 0;
      v96 = 0LL;
      v89 = 0;
      v20 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, _QWORD, int *, char **, unsigned int *))(*(_QWORD *)a2 + 56LL))(
              a2,
              i,
              &v88,
              &v96,
              &v89);
      v14 = v20;
      if ( v20 < 0 )
      {
        v15 = (unsigned int)v20;
        v16 = 1582LL;
        goto LABEL_12;
      }
      *((_DWORD *)v80[1] + 4 * i) = *((_DWORD *)&v86 + 2 * (unsigned __int16)v88 + 1);
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        pv,
        v96,
        v89,
        v21);
      v22 = pv[0];
      pv[0] = 0LL;
      *((_QWORD *)v80[1] + 2 * i + 1) = v22;
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(pv);
      if ( !*((_QWORD *)v80[1] + 2 * i + 1) )
      {
        v16 = 1587LL;
        goto LABEL_10;
      }
    }
  }
  v23 = 0;
  if ( memcmp_0(a3, &xmmword_18077AA50, 0x10uLL) )
  {
    v79 = 0;
    v83 = 4;
    v24 = *((_QWORD *)this + 2);
    *(struct _GUID *)pv = *a3;
    v25 = (*(__int64 (__fastcall **)(__int64, LPVOID *, __int64, int *, int *))(*(_QWORD *)v24 + 64LL))(
            v24,
            pv,
            9LL,
            &v79,
            &v83);
    v14 = v25;
    if ( v25 < 0 )
    {
      v15 = (unsigned int)v25;
      v16 = 1598LL;
      goto LABEL_12;
    }
    LODWORD(v82) = (v79 != 0) | v82 & 0xFFFFFFFE;
    v83 = 4;
    v26 = *((_QWORD *)this + 2);
    *(struct _GUID *)pv = *a3;
    v27 = (*(__int64 (__fastcall **)(__int64, LPVOID *, __int64, int *, int *))(*(_QWORD *)v26 + 64LL))(
            v26,
            pv,
            13LL,
            &v79,
            &v83);
    v14 = v27;
    if ( v27 < 0 )
    {
      v15 = (unsigned int)v27;
      v16 = 1604LL;
      goto LABEL_12;
    }
    LODWORD(v82) = (v79 != 0 ? 0x10 : 0) | v82 & 0xFFFFFFEF;
  }
  v78 = 0;
  v28 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, unsigned __int16 *))(*(_QWORD *)a2 + 48LL))(
          a2,
          &v78);
  v14 = v28;
  if ( v28 < 0 )
  {
    v15 = (unsigned int)v28;
    v16 = 1610LL;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v29 = *(_QWORD *)a2;
    if ( v23 >= v78 )
      break;
    v86 = 0LL;
    v87 = 0LL;
    v90 = 0;
    v30 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, _QWORD, int *, __int128 *))(v29 + 64))(
            a2,
            v23,
            &v90,
            &v86);
    v14 = v30;
    if ( v30 < 0 )
    {
      v15 = (unsigned int)v30;
      v16 = 1617LL;
      goto LABEL_12;
    }
    if ( (unsigned __int16)v90 <= 0x104u )
    {
      if ( (unsigned __int16)v90 == 260 )
      {
        v31 = DWORD2(v86) != 0 ? 0x200 : 0;
        v32 = v82 & 0xFFFFFDFF;
      }
      else
      {
        if ( !(_WORD)v90 )
        {
          v98 = (char *)*((_QWORD *)&v86 + 1);
          v11 = v87;
          goto LABEL_61;
        }
        switch ( (unsigned __int16)v90 )
        {
          case 2u:
            v99 = (char *)*((_QWORD *)&v86 + 1);
            v12 = v87;
            goto LABEL_61;
          case 0x100u:
            v31 = DWORD2(v86) != 0 ? 2 : 0;
            v32 = v82 & 0xFFFFFFFD;
            break;
          case 0x101u:
            v31 = DWORD2(v86) != 0 ? 8 : 0;
            v32 = v82 & 0xFFFFFFF7;
            break;
          case 0x102u:
            v31 = DWORD2(v86) != 0 ? 4 : 0;
            v32 = v82 & 0xFFFFFFFB;
            break;
          case 0x103u:
            v31 = DWORD2(v86) != 0 ? 0x40 : 0;
            v32 = v82 & 0xFFFFFFBF;
            break;
          default:
            goto LABEL_61;
        }
      }
LABEL_59:
      v35 = v31 | v32;
LABEL_60:
      LODWORD(v82) = v35;
      goto LABEL_61;
    }
    switch ( (unsigned __int16)v90 )
    {
      case 0x140u:
        v31 = DWORD2(v86) != 0 ? 0x80 : 0;
        v32 = v82 & 0xFFFFFF7F;
        goto LABEL_59;
      case 0x141u:
        v74 = 0;
        ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
        GameProfileFromAttribute = AutoGameProfile::GetGameProfileFromAttribute(
                                     (AutoGameProfile *)&v86,
                                     (struct KnownGameList::AttributeValue *)ActiveProcessorCount,
                                     (unsigned int)&v84,
                                     v95,
                                     &v85,
                                     v75,
                                     &v74,
                                     v73);
        v14 = GameProfileFromAttribute;
        if ( GameProfileFromAttribute < 0 )
        {
          v15 = (unsigned int)GameProfileFromAttribute;
          v16 = 1677LL;
          goto LABEL_12;
        }
        if ( v74 )
        {
          v35 = ((unsigned __int16)v82 ^ (unsigned __int16)(LOBYTE(v75[0]) << 8)) & 0x100 ^ v82;
          goto LABEL_60;
        }
        break;
      case 0x142u:
        Source = (void *)*((_QWORD *)&v86 + 1);
        LODWORD(SourceSize) = v87;
        break;
      case 0x143u:
        v31 = DWORD2(v86) != 0 ? 0x400 : 0;
        v32 = v82 & 0xFFFFFBFF;
        goto LABEL_59;
      case 0x200u:
        DWORD1(v81) = 2;
        break;
    }
LABEL_61:
    ++v23;
  }
  v97 = 0LL;
  v91 = 0;
  v36 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, char **, unsigned int *))(v29 + 24))(
          a2,
          &v97,
          &v91);
  v14 = v36;
  if ( v36 < 0 )
  {
    v15 = (unsigned int)v36;
    v16 = 1706LL;
    goto LABEL_12;
  }
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    pv,
    v97,
    v91,
    v37);
  v38 = (const unsigned __int16 *)pv[0];
  if ( !pv[0] )
  {
    v16 = 1709LL;
LABEL_10:
    v14 = -2147024882;
LABEL_11:
    v15 = (unsigned int)v14;
    goto LABEL_12;
  }
  *((LPVOID *)&v81 + 1) = pv[0];
  Buf1 = xmmword_18077AA50;
  v39 = memcmp_0(a3, &xmmword_18077AA50, 0x10uLL);
  v40 = *((_QWORD *)this + 2);
  if ( v39 )
  {
    Buf1 = (__int128)*a3;
    v93 = Buf1;
    v14 = (*(__int64 (__fastcall **)(__int64, __int128 *, void **))(*(_QWORD *)v40 + 16LL))(v40, &v93, v80);
    GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL(v14, v38, (unsigned int)v80[0]);
    if ( v14 < 0 )
    {
      v16 = 1755LL;
      goto LABEL_11;
    }
  }
  else
  {
    v14 = (**(__int64 (__fastcall ***)(__int64, void **, __int128 *))v40)(v40, v80, &Buf1);
    if ( v14 == -2147024713 )
    {
      v41 = *((_QWORD *)this + 2);
      *(_OWORD *)pv = Buf1;
      v14 = (*(__int64 (__fastcall **)(__int64, LPVOID *, void **))(*(_QWORD *)v41 + 16LL))(v41, pv, v80);
    }
    GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL(v14, v38, (unsigned int)v80[0]);
    if ( v14 < 0 )
    {
      v16 = 1741LL;
      goto LABEL_11;
    }
    if ( (_QWORD)v93 )
      *(_OWORD *)v93 = Buf1;
  }
  if ( !memcmp_0(&Buf1, &xmmword_18077AA50, 0x10uLL) )
  {
    v14 = -2147418113;
    v16 = 1758LL;
    goto LABEL_11;
  }
  if ( v98 )
  {
    pv[0] = 0LL;
    v43 = v11 >> 1;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v93,
      v98,
      v43,
      v42);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      pv,
      (void *)v93);
    v44 = pv[0];
    if ( !pv[0] )
    {
      v14 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E9,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_82;
    }
    v45 = *((_QWORD *)this + 2);
    v93 = Buf1;
    LODWORD(v72) = 2 * v43;
    v46 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, LPVOID, unsigned __int64 *))(*(_QWORD *)v45 + 72LL))(
            v45,
            &v93,
            8LL,
            pv[0],
            v72);
    v47 = v46;
    if ( v46 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6EB,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v46);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(pv);
      goto LABEL_85;
    }
    CoTaskMemFree(v44);
  }
  if ( !v99 )
  {
LABEL_97:
    v55 = Source;
    if ( Source )
    {
      pv[0] = 0LL;
      v56 = (unsigned int)SourceSize;
      v57 = (unsigned int)SourceSize + 4LL;
      v58 = v57 >> 1;
      v59 = CoTaskMemAlloc(v57);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        pv,
        v59);
      v60 = pv[0];
      if ( !pv[0] )
      {
        v14 = -2147024882;
        v50 = 2147942414LL;
        v51 = 1806LL;
        goto LABEL_90;
      }
      memcpy_s_1(pv[0], v57, v55, v56);
      if ( (_DWORD)v58 )
      {
        v61 = v60;
        v62 = (unsigned int)v58;
        do
        {
          if ( *v61 == 59 )
            *v61 = 0;
          ++v61;
          --v62;
        }
        while ( v62 );
      }
      v60[(unsigned int)(v58 - 2)] = 0;
      v60[(unsigned int)(v58 - 1)] = 0;
      v63 = *((_QWORD *)this + 2);
      *(_OWORD *)v94 = Buf1;
      LODWORD(v72) = v57;
      v64 = (*(__int64 (__fastcall **)(__int64, Windows::Internal::String **, __int64, _WORD *, unsigned __int64 *))(*(_QWORD *)v63 + 72LL))(
              v63,
              v94,
              22LL,
              v60,
              v72);
      v14 = v64;
      if ( v64 < 0 )
      {
        v50 = (unsigned int)v64;
        v51 = 1824LL;
        goto LABEL_90;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(pv);
    }
    if ( v84 || *(_QWORD *)v95 )
    {
      v65 = *((_QWORD *)this + 2);
      *(_OWORD *)v94 = Buf1;
      LODWORD(v72) = 4;
      v66 = (*(__int64 (__fastcall **)(__int64, Windows::Internal::String **, __int64, unsigned int *, unsigned __int64 *))(*(_QWORD *)v65 + 72LL))(
              v65,
              v94,
              19LL,
              &v84,
              v72);
      v14 = v66;
      if ( v66 < 0 )
      {
        v15 = (unsigned int)v66;
        v16 = 1829LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)v15);
        goto LABEL_118;
      }
      v67 = *((_QWORD *)this + 2);
      *(_OWORD *)v94 = Buf1;
      v68 = (*(__int64 (__fastcall **)(__int64, Windows::Internal::String **, __int64, unsigned int *, int))(*(_QWORD *)v67 + 72LL))(
              v67,
              v94,
              18LL,
              v95,
              8);
      v14 = v68;
      if ( v68 < 0 )
      {
        v15 = (unsigned int)v68;
        v16 = 1830LL;
        goto LABEL_12;
      }
    }
    if ( !(_DWORD)v85
      || (v69 = *((_QWORD *)this + 2),
          *(_OWORD *)v94 = Buf1,
          LODWORD(v72) = 4,
          v70 = (*(__int64 (__fastcall **)(__int64, Windows::Internal::String **, __int64, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)v69 + 72LL))(
                  v69,
                  v94,
                  20LL,
                  &v85,
                  v72),
          v14 = v70,
          v70 >= 0) )
    {
      v14 = 0;
      goto LABEL_118;
    }
    v15 = (unsigned int)v70;
    v16 = 1835LL;
    goto LABEL_12;
  }
  pv[0] = 0LL;
  v48 = v12 >> 1;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v93,
    v99,
    v48,
    v42);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    pv,
    (void *)v93);
  v49 = pv[0];
  if ( pv[0] )
  {
    v52 = *((_QWORD *)this + 2);
    v93 = Buf1;
    LODWORD(v72) = 2 * v48;
    v53 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, LPVOID, unsigned __int64 *))(*(_QWORD *)v52 + 72LL))(
            v52,
            &v93,
            15LL,
            pv[0],
            v72);
    v47 = v53;
    if ( v53 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F9,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v53);
      CoTaskMemFree(v49);
LABEL_85:
      v14 = v47;
      goto LABEL_118;
    }
    if ( v94[0] )
    {
      v54 = Windows::Internal::String::_InitializeHelper((HSTRING *)v94[0], (const unsigned __int16 *)v49);
      v14 = v54;
      if ( v54 < 0 )
      {
        v50 = (unsigned int)v54;
        v51 = 1790LL;
        goto LABEL_90;
      }
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(pv);
    goto LABEL_97;
  }
  v14 = -2147024882;
  v50 = 2147942414LL;
  v51 = 1783LL;
LABEL_90:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v51,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
    (const char *)v50);
LABEL_82:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(pv);
LABEL_118:
  FreeGameConfig((struct ExecutionModel::GameConfig *)v80);
  return (unsigned int)v14;
}
