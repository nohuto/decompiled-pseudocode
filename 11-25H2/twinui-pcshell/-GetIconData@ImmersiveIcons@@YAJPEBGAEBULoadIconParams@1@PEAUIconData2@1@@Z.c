/*
 * XREFs of ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18009C11C
 * Callers:
 *     ?_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@1@@Z @ 0x180659668 (-_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18002BEFC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D858 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ReplaceChars@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z @ 0x18008581C (-ReplaceChars@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180086830 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x18009A8A4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV12.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x18009D55C (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 *     ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x18009D634 (ImmersiveIcons--GetPackageFullNameForAppsFolderItem.c)
 *     ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x18009D730 (-ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x18009E5B8 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 *     ?CompareOrdinalIgnoreCase@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x18015691C (-CompareOrdinalIgnoreCase@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Window.c)
 *     ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z @ 0x1802A2924 (-GetContrastForParams@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A2984 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4.c)
 *     ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1802B0A18 (--$GetString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x1802BA1D8 (-TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z.c)
 *     ?ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z @ 0x1802BD368 (-ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z.c)
 *     ?HasFileUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1802C8D80 (-HasFileUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1802C8ECC (-HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?HasMsResourceUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1802C8F9C (-HasMsResourceUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$As@UIResourceCandidate@@@?$ComPtr@UIResourceCandidate2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIResourceCandidate@@@WRL@Microsoft@@@Details@12@@Z @ 0x1806576CC (--$As@UIResourceCandidate@@@-$ComPtr@UIResourceCandidate2@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?HasMsAppDataUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1806588DC (-HasMsAppDataUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x18065893C (-InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@.c)
 *     ?InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x180658ACC (-InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UnplateMicrosoftEdgeTiles_25482738@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180659260 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UnplateMicrosoftEdgeTiles_25482.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ImmersiveIcons::GetIconData(
        WCHAR *pszItem,
        unsigned __int16 *a2,
        const struct ImmersiveIcons::LoadIconParams *a3,
        struct ImmersiveIcons::IconData2 *a4)
{
  unsigned __int16 *v5; // r13
  HRESULT v7; // eax
  HRESULT v8; // ebx
  int v9; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  int v13; // edx
  unsigned int v14; // r8d
  WCHAR *v15; // r15
  __int64 v16; // rsi
  unsigned int v17; // eax
  UINT32 v18; // edx
  HRESULT v19; // eax
  HSTRING v20; // rdx
  unsigned int v21; // r8d
  HSTRING v22; // rdx
  unsigned __int16 **v23; // r8
  int v24; // eax
  __int64 v25; // rdx
  HRESULT v26; // eax
  int PackageFullNameForAppsFolderItem; // eax
  __int64 v28; // rdx
  LPVOID v29; // rbx
  __int64 (__fastcall *v30)(LPVOID, WCHAR *, LPVOID, _QWORD, LPVOID *); // rdi
  HRESULT Instance; // eax
  int v32; // eax
  __int64 v33; // rdx
  WCHAR *v34; // r12
  HSTRING v35; // rbx
  __int64 (__fastcall *v36)(HSTRING, GUID *, _QWORD); // rdi
  int v37; // eax
  __int64 (__fastcall ***v38)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v39)(_QWORD, GUID *, __int64 *); // rdi
  int v40; // eax
  HSTRING v41; // rdx
  HSTRING v42; // rdx
  unsigned __int16 **v43; // r8
  int v44; // eax
  __int64 v45; // rdx
  _WORD *v46; // rsi
  int v47; // eax
  __int64 v48; // rcx
  __int64 (__fastcall ***v49)(_QWORD, _QWORD, _QWORD); // rcx
  HSTRING v50; // rcx
  unsigned __int64 v51; // rax
  unsigned __int64 i; // rcx
  HSTRING v53; // rbx
  __int64 (__fastcall *v54)(HSTRING, GUID *, struct ImmersiveIcons::LoadIconParams **); // rdi
  int v55; // eax
  __int64 v56; // rdx
  struct IResourceContext *v57; // r8
  int inited; // eax
  __int64 v59; // rdx
  __int64 v60; // rbx
  int (__fastcall *v61)(__int64, struct ImmersiveIcons::LoadIconParams *, _WORD *, __int64 *); // rdi
  int v62; // eax
  __int64 *v63; // rcx
  __int64 v64; // rbx
  int (__fastcall *v65)(__int64, const wchar_t *, __int64 *); // rdi
  __int64 v66; // rax
  __int64 v67; // rbx
  bool v68; // zf
  __int64 v69; // rbx
  int (__fastcall *v70)(__int64, struct ImmersiveIcons::LoadIconParams *, _WORD *, __int64 *); // rdi
  int v71; // eax
  __int64 v72; // rbx
  __int64 (__fastcall *v73)(__int64, const wchar_t *, __int64 *); // rdi
  int v74; // r13d
  int ContrastForParams; // eax
  __int64 v76; // rdx
  int v77; // r13d
  int v78; // eax
  __int64 v79; // rbx
  __int64 (__fastcall *v80)(__int64, struct ImmersiveIcons::LoadIconParams *, _WORD *, __int64 *); // rdi
  int v81; // eax
  int v82; // eax
  __int64 v83; // rbx
  __int64 (__fastcall *v84)(__int64, const wchar_t *, HSTRING_HEADER *); // rdi
  __int64 v85; // rbx
  int (__fastcall *v86)(__int64, const wchar_t *, __int64 *); // rdi
  int v87; // eax
  int v88; // ebx
  __int64 v89; // rbx
  int (__fastcall *v90)(__int64, const wchar_t *, LPVOID *); // rdi
  bool v91; // r13
  __int64 v92; // rbx
  __int64 (__fastcall *v93)(__int64, LPVOID *); // rdi
  int v94; // eax
  char *v95; // r8
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rcx
  _WORD *v98; // rcx
  __int64 v99; // rdx
  signed __int64 v100; // r8
  __int16 v101; // ax
  _WORD *v102; // rax
  __int64 v103; // rcx
  struct ImmersiveIcons::LoadIconParams *v104; // rcx
  __int64 v105; // rcx
  __int64 (__fastcall ***v106)(_QWORD, _QWORD, _QWORD); // rcx
  HSTRING v107; // rcx
  int v108; // edx
  unsigned int v109; // r8d
  HSTRING v110; // rdi
  __int64 v111; // rbx
  unsigned int v112; // eax
  UINT32 v113; // edx
  HRESULT v114; // eax
  int v115; // edx
  ShellMRTHelper::Common *v116; // rcx
  unsigned int v117; // r8d
  int v118; // eax
  __int64 v119; // rdx
  const WCHAR *StringRawBuffer; // rax
  __int64 v121; // r9
  char *v122; // rax
  __int64 v124; // rcx
  struct ImmersiveIcons::LoadIconParams *v125; // rcx
  __int64 v126; // rcx
  __int64 (__fastcall ***v127)(_QWORD, _QWORD, _QWORD); // rcx
  HSTRING v128; // rcx
  __int64 *j; // rbx
  void **ppv; // [rsp+20h] [rbp-E0h]
  __int64 v131; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v132; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v133; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v134; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v135)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-B0h] BYREF
  struct ImmersiveIcons::LoadIconParams *v136; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v138; // [rsp+68h] [rbp-98h]
  __int64 v139; // [rsp+70h] [rbp-90h]
  HSTRING v140; // [rsp+78h] [rbp-88h] BYREF
  PCWSTR sourceString; // [rsp+80h] [rbp-80h] BYREF
  UINT32 length[2]; // [rsp+88h] [rbp-78h]
  __int64 v143; // [rsp+90h] [rbp-70h]
  HSTRING__ v144[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v145; // [rsp+B0h] [rbp-50h]
  int v146; // [rsp+C0h] [rbp-40h]
  LPVOID v147; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v148; // [rsp+D0h] [rbp-30h]
  __int64 v149; // [rsp+D8h] [rbp-28h]
  PCWSTR v150; // [rsp+E0h] [rbp-20h] BYREF
  UINT32 v151[2]; // [rsp+E8h] [rbp-18h]
  __int64 v152; // [rsp+F0h] [rbp-10h]
  LPVOID v153; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v154; // [rsp+100h] [rbp+0h] BYREF
  __int64 v155; // [rsp+108h] [rbp+8h] BYREF
  __int64 v156; // [rsp+110h] [rbp+10h] BYREF
  __int64 v157; // [rsp+118h] [rbp+18h] BYREF
  void *v158; // [rsp+120h] [rbp+20h] BYREF
  __int64 v159; // [rsp+128h] [rbp+28h] BYREF
  __int64 v160; // [rsp+130h] [rbp+30h]
  __int64 v161; // [rsp+138h] [rbp+38h]
  const unsigned __int16 *v162; // [rsp+140h] [rbp+40h]
  __int64 v163; // [rsp+148h] [rbp+48h] BYREF
  __int64 v164; // [rsp+150h] [rbp+50h]
  __int64 v165; // [rsp+158h] [rbp+58h]
  __int64 v166; // [rsp+160h] [rbp+60h] BYREF
  __int64 v167; // [rsp+168h] [rbp+68h]
  __int64 v168; // [rsp+170h] [rbp+70h]
  HSTRING_HEADER hstringHeader; // [rsp+178h] [rbp+78h] BYREF
  HSTRING string; // [rsp+190h] [rbp+90h] BYREF
  HSTRING_HEADER propvarIn; // [rsp+198h] [rbp+98h] BYREF
  HSTRING v172; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v173[5]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v174; // [rsp+1E0h] [rbp+E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v5 = a2;
  v162 = a2;
  v158 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v158);
  v7 = SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4000u,
         pszItem,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         &v158);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDE,
      (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)(unsigned int)v7);
LABEL_223:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v158);
    return (unsigned int)v8;
  }
  v131 = 0LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v131);
  v9 = wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(
         (unsigned int)&v131,
         (_DWORD)v158,
         1,
         (unsigned int)&unk_180753890,
         4);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = (unsigned int)v9;
    v11 = 237LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)v10);
LABEL_222:
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v131);
    goto LABEL_223;
  }
  *((_DWORD *)a3 + 3) = 0;
  LOWORD(propvarIn.Reserved.Reserved1) = 0;
  *(_OWORD *)&v144[0].unused = PKEY_Tile_Background;
  LODWORD(v145) = 4;
  v8 = (*(__int64 (__fastcall **)(__int64, HSTRING__ *, HSTRING_HEADER *))(*(_QWORD *)v131 + 40LL))(
         v131,
         v144,
         &propvarIn);
  if ( v8 >= 0 )
  {
    if ( LOWORD(propvarIn.Reserved.Reserved1) )
    {
      *((_DWORD *)a3 + 3) = 0;
      v8 = PropVariantToUInt32(&propvarIn.Reserved.Reserved1, (ULONG *)a3 + 3);
    }
    else
    {
      v8 = -2147023728;
    }
  }
  PropVariantClear(&propvarIn.Reserved.Reserved1);
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 239LL;
    goto LABEL_5;
  }
  sourceString = 0LL;
  *(_QWORD *)length = -1LL;
  v143 = -1LL;
  *(_OWORD *)&v144[0].unused = PKEY_Tile_SmallLogoPath;
  LODWORD(v145) = 2;
  v12 = wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(&v131, v144, &sourceString);
  v8 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF2,
      (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)(unsigned int)v12);
LABEL_221:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
    goto LABEL_222;
  }
  v15 = (WCHAR *)sourceString;
  v16 = *(_QWORD *)length;
  if ( *(_QWORD *)length == -1LL )
  {
    if ( sourceString )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( sourceString[v16] );
      *(_QWORD *)length = v16;
    }
    else
    {
      v16 = 0LL;
      *(_QWORD *)length = 0LL;
    }
  }
  string = 0LL;
  v17 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v16, v13, v14);
  v18 = v17 - 1;
  if ( (unsigned int)v16 < v17 )
    v18 = v16;
  v19 = WindowsCreateStringReference(v15, v18, &hstringHeader, &string);
  if ( v19 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19, (int)v20, v21);
    __debugbreak();
  }
  pv = 0LL;
  v138 = 0LL;
  v139 = 0LL;
  if ( ShellMRTHelper::Common::HasFileUriScheme((ShellMRTHelper::Common *)string, v20) )
  {
    if ( pv )
      CoTaskMemFree(pv);
    v138 = -1LL;
    v139 = -1LL;
    v24 = TileUtils::ConvertFileUriToFilePath(v15, (const unsigned __int16 *)&pv, v23);
    v8 = v24;
    if ( v24 < 0 )
    {
      v25 = 260LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v24);
LABEL_220:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pv);
      string = 0LL;
      goto LABEL_221;
    }
  }
  else
  {
    if ( ShellMRTHelper::Common::HasMsAppDataUriScheme((ShellMRTHelper::Common *)string, v22) )
    {
      v153 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v153);
      v26 = CoCreateInstance(
              &GUID_a8ca4495_65ab_4333_9ff9_4feb6fbf5169,
              0LL,
              1u,
              &GUID_428bb582_2a87_4ea0_b529_30067cc4a4d7,
              &v153);
      v8 = v26;
      if ( v26 >= 0 )
      {
        v147 = 0LL;
        v148 = 0LL;
        v149 = 0LL;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v147);
        v148 = -1LL;
        v149 = -1LL;
        PackageFullNameForAppsFolderItem = ImmersiveIcons::GetPackageFullNameForAppsFolderItem((CallerIdentity *)pszItem);
        v8 = PackageFullNameForAppsFolderItem;
        if ( PackageFullNameForAppsFolderItem >= 0 )
        {
          v29 = v153;
          v30 = *(__int64 (__fastcall **)(LPVOID, WCHAR *, LPVOID, _QWORD, LPVOID *))(*(_QWORD *)v153 + 48LL);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pv);
          v138 = -1LL;
          v139 = -1LL;
          PackageFullNameForAppsFolderItem = v30(v29, v15, v147, 0LL, &pv);
          v8 = PackageFullNameForAppsFolderItem;
          if ( PackageFullNameForAppsFolderItem >= 0 )
          {
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v147);
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v153);
            goto LABEL_40;
          }
          v28 = 270LL;
        }
        else
        {
          v28 = 268LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v28,
          (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)PackageFullNameForAppsFolderItem);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v147);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x109,
          (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v26);
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v153);
      goto LABEL_220;
    }
    if ( !PathIsRelativeW(v15) )
    {
      v24 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
              &pv,
              (__int64 *)&sourceString);
      v8 = v24;
      if ( v24 < 0 )
      {
        v25 = 276LL;
        goto LABEL_29;
      }
    }
  }
LABEL_40:
  if ( !pv || !*(_WORD *)pv )
  {
    v132 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v132);
    Instance = CoCreateInstance(
                 &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
                 0LL,
                 1u,
                 &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
                 (LPVOID *)&v132);
    v8 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11D,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)Instance);
LABEL_219:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v132);
      goto LABEL_220;
    }
    v150 = 0LL;
    *(_QWORD *)v151 = -1LL;
    v152 = -1LL;
    v32 = ImmersiveIcons::GetPackageFullNameForAppsFolderItem((CallerIdentity *)pszItem);
    v8 = v32;
    if ( v32 < 0 )
    {
      v33 = 288LL;
LABEL_52:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v33,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v32);
LABEL_218:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v150);
      goto LABEL_219;
    }
    v34 = (WCHAR *)v150;
    v32 = (*(__int64 (__fastcall **)(HSTRING, PCWSTR))(*(_QWORD *)v132 + 40LL))(v132, v150);
    v8 = v32;
    if ( v32 < 0 )
    {
      v33 = 290LL;
      goto LABEL_52;
    }
    v135 = 0LL;
    v35 = v132;
    v36 = *(__int64 (__fastcall **)(HSTRING, GUID *, _QWORD))(*(_QWORD *)v132 + 56LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v135);
    v37 = v36(v35, &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd, &v135);
    v8 = v37;
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x125,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v37);
LABEL_217:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v135);
      goto LABEL_218;
    }
    v134 = 0LL;
    v38 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v135;
    v39 = **v135;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v134);
    v40 = v39(v38, &GUID_2fe6ec6e_da7e_4b2a_a8f9_90b289061f20, &v134);
    v8 = v40;
    if ( v40 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x128,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v40);
LABEL_216:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v134);
      goto LABEL_217;
    }
    memset(v144, 0, sizeof(v144));
    v145 = 0LL;
    if ( ShellMRTHelper::Common::HasMsAppXUriScheme((ShellMRTHelper::Common *)string, v41) )
    {
      *(_QWORD *)&v144[2].unused = -1LL;
      v145 = -1LL;
      v44 = ShellMRTHelper::Common::ConvertMsAppXUriToMsResourceUri((ShellMRTHelper::Common *)string, v144, v43);
      v8 = v44;
      if ( v44 < 0 )
      {
        v45 = 303LL;
LABEL_62:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v45,
          (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v44);
LABEL_215:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v144);
        goto LABEL_216;
      }
    }
    else
    {
      if ( !ShellMRTHelper::Common::HasMsResourceUriScheme((ShellMRTHelper::Common *)string, v42) )
      {
        if ( v16 == -1 )
        {
          if ( v15 )
          {
            do
              ++v16;
            while ( v15[v16] );
            *(_QWORD *)length = v16;
          }
          else
          {
            v16 = 0LL;
            *(_QWORD *)length = 0LL;
          }
        }
        v47 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                (__int64)v144,
                (__int64)L"Files\\",
                v16 + 7);
        v8 = v47;
        if ( v47 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x13D,
            (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v47);
          if ( *(_QWORD *)&v144[0].unused )
            CoTaskMemFree(*(LPVOID *)&v144[0].unused);
          v48 = v134;
          if ( v134 )
          {
            v134 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
          }
          v49 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v135;
          if ( v135 )
          {
            v135 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v49)[2])(v49);
          }
          if ( v34 )
            CoTaskMemFree(v34);
          v50 = v132;
          if ( v132 )
          {
            v132 = 0LL;
            (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v50 + 16LL))(v50);
          }
          if ( pv )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
          }
          v138 = 0LL;
          v139 = 0LL;
          string = 0LL;
          if ( v15 )
            CoTaskMemFree(v15);
          goto LABEL_87;
        }
        v44 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
                v144,
                &sourceString);
        v8 = v44;
        if ( v44 < 0 )
        {
          v45 = 318LL;
          goto LABEL_62;
        }
        v46 = *(_WORD **)&v144[0].unused;
        v51 = *(_QWORD *)&v144[2].unused;
        if ( *(_QWORD *)&v144[2].unused == -1LL )
        {
          if ( *(_QWORD *)&v144[0].unused )
          {
            v51 = -1LL;
            do
              ++v51;
            while ( *(_WORD *)(*(_QWORD *)&v144[0].unused + 2 * v51) );
          }
          else
          {
            v51 = 0LL;
          }
          *(_QWORD *)&v144[2].unused = v51;
        }
        for ( i = 0LL; i < v51; ++i )
        {
          if ( v46[i] == 47 )
            v46[i] = 92;
        }
LABEL_101:
        v136 = 0LL;
        v53 = v132;
        v54 = *(__int64 (__fastcall **)(HSTRING, GUID *, struct ImmersiveIcons::LoadIconParams **))(*(_QWORD *)v132
                                                                                                  + 72LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v136);
        v55 = v54(v53, &GUID_e3c22b30_8502_4b2f_9133_559674587e51, &v136);
        v8 = v55;
        if ( v55 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x145,
            (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v55);
LABEL_214:
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v136);
          goto LABEL_215;
        }
        v133 = 0LL;
        v146 = 0;
        LODWORD(v140) = 0;
        LOBYTE(v56) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
          v56);
        if ( *((_DWORD *)v5 + 11) == 1 && *((_DWORD *)v5 + 10) != 1 && *((_DWORD *)v5 + 9) != 2 )
        {
          inited = ImmersiveIcons::InitResourceContextForLightTheme((ImmersiveIcons *)v5, v136, v57);
          v8 = inited;
          if ( inited < 0 )
          {
            v59 = 345LL;
LABEL_108:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v59,
              (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)(unsigned int)inited);
LABEL_213:
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v133);
            goto LABEL_214;
          }
          v156 = 0LL;
          v60 = v134;
          v61 = *(int (__fastcall **)(__int64, struct ImmersiveIcons::LoadIconParams *, _WORD *, __int64 *))(*(_QWORD *)v134 + 48LL);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v156);
          if ( v61(v60, v136, v46, &v156) >= 0 )
          {
            v155 = 0LL;
            v62 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(&v156, &v155);
            v8 = v62;
            if ( v62 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x15F,
                (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                (const char *)(unsigned int)v62);
              Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v155);
              v63 = &v156;
LABEL_112:
              Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v63);
              goto LABEL_213;
            }
            v163 = 0LL;
            v164 = 0LL;
            v165 = 0LL;
            v64 = v155;
            v65 = *(int (__fastcall **)(__int64, const wchar_t *, __int64 *))(*(_QWORD *)v155 + 64LL);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v163);
            v164 = -1LL;
            v165 = -1LL;
            if ( v65(v64, L"AlternateForm", &v163) >= 0
              && (unsigned int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinalIgnoreCase(
                                 &v163,
                                 L"lightunplated") == 2 )
            {
              v146 = 2;
              LODWORD(v140) = 1;
              v66 = v133;
              v67 = v155;
              if ( v133 != v155 )
              {
                if ( v155 )
                {
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v155 + 8LL))(v155);
                  v66 = v133;
                }
                v154 = v66;
                v133 = v67;
                Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v154);
              }
            }
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v163);
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v155);
          }
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v156);
        }
        v68 = v133 == 0;
        if ( !v133 )
        {
          inited = ImmersiveIcons::InitResourceContextForAllThemes((ImmersiveIcons *)v5, v136, v57);
          v8 = inited;
          if ( inited < 0 )
          {
            v59 = 369LL;
            goto LABEL_108;
          }
          v157 = 0LL;
          v69 = v134;
          v70 = *(int (__fastcall **)(__int64, struct ImmersiveIcons::LoadIconParams *, _WORD *, __int64 *))(*(_QWORD *)v134 + 48LL);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v157);
          if ( v70(v69, v136, v46, &v157) >= 0 )
          {
            v71 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(&v157, &v133);
            v8 = v71;
            if ( v71 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x175,
                (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                (const char *)(unsigned int)v71);
              v63 = &v157;
              goto LABEL_112;
            }
            v166 = 0LL;
            v167 = 0LL;
            v168 = 0LL;
            v72 = v133;
            v73 = *(__int64 (__fastcall **)(__int64, const wchar_t *, __int64 *))(*(_QWORD *)v133 + 64LL);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v166);
            v167 = -1LL;
            v168 = -1LL;
            v74 = v73(v72, L"AlternateForm", &v166);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v166);
            v146 = (v74 >> 31) + 2;
            v5 = (unsigned __int16 *)v162;
          }
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v157);
          v68 = v133 == 0;
        }
        if ( !v68 )
        {
          ContrastForParams = ImmersiveIcons::GetContrastForParams(v5);
          v77 = ContrastForParams;
          if ( v146 == 1 && !ContrastForParams )
          {
            v154 = 0LL;
            v78 = (*(__int64 (__fastcall **)(struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)v136 + 112LL))(
                    v136,
                    v162[8]);
            if ( v78 >= 0 )
            {
              v79 = v134;
              v80 = *(__int64 (__fastcall **)(__int64, struct ImmersiveIcons::LoadIconParams *, _WORD *, __int64 *))(*(_QWORD *)v134 + 48LL);
              Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v154);
              v81 = v80(v79, v136, v46, &v154);
              if ( v81 >= 0 )
              {
                v82 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(&v154, &v133);
                v8 = v82;
                if ( v82 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x187,
                    (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                    (const char *)(unsigned int)v82);
                  v63 = &v154;
                  goto LABEL_112;
                }
                memset(&propvarIn, 0, sizeof(propvarIn));
                v83 = v133;
                v84 = *(__int64 (__fastcall **)(__int64, const wchar_t *, HSTRING_HEADER *))(*(_QWORD *)v133 + 64LL);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
                *(_QWORD *)&propvarIn.Reserved.Reserved2[8] = -1LL;
                *(_QWORD *)&propvarIn.Reserved.Reserved2[16] = -1LL;
                LODWORD(v83) = v84(v83, L"AlternateForm", &propvarIn);
                Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
                v146 = ((int)v83 >> 31) + 2;
              }
              else
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x185,
                  (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                  (const char *)(unsigned int)v81);
              }
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x184,
                (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                (const char *)(unsigned int)v78);
            }
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v154);
          }
          LOBYTE(v76) = 1;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
            v76);
          v159 = 0LL;
          v160 = 0LL;
          v161 = 0LL;
          v85 = v133;
          v86 = *(int (__fastcall **)(__int64, const wchar_t *, __int64 *))(*(_QWORD *)v133 + 64LL);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v159);
          v160 = -1LL;
          v161 = -1LL;
          if ( v86(v85, L"Theme", &v159) >= 0 )
          {
            if ( (unsigned int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinalIgnoreCase(
                                 &v159,
                                 L"dark") == 2 )
            {
              LODWORD(v140) = 2;
            }
            else
            {
              v87 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinalIgnoreCase(
                      &v159,
                      L"light");
              v88 = (int)v140;
              if ( v87 == 2 )
                v88 = 1;
              LODWORD(v140) = v88;
            }
          }
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v159);
          v147 = 0LL;
          v148 = 0LL;
          v149 = 0LL;
          v91 = 0;
          if ( v77 )
          {
            v89 = v133;
            v90 = *(int (__fastcall **)(__int64, const wchar_t *, LPVOID *))(*(_QWORD *)v133 + 64LL);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v147);
            v148 = -1LL;
            v149 = -1LL;
            if ( v90(v89, L"Contrast", &v147) >= 0 )
              v91 = 1;
          }
          v92 = v133;
          v93 = *(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v133 + 32LL);
          if ( pv )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
          }
          v138 = -1LL;
          v139 = -1LL;
          v94 = v93(v92, &pv);
          v8 = v94;
          if ( v94 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1A1,
              (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)(unsigned int)v94);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v147);
            goto LABEL_213;
          }
          v95 = (char *)pv;
          v96 = v138;
          if ( v138 == -1 )
          {
            if ( pv )
            {
              v96 = -1LL;
              do
                ++v96;
              while ( *((_WORD *)pv + v96) );
            }
            else
            {
              v96 = 0LL;
            }
            v138 = v96;
          }
          v97 = 0LL;
          if ( v96 )
          {
            do
            {
              if ( *(_WORD *)&v95[2 * v97] == 47 )
              {
                *(_WORD *)&v95[2 * v97] = 92;
                v96 = v138;
                v95 = (char *)pv;
              }
              ++v97;
            }
            while ( v97 < v96 );
            v15 = (WCHAR *)sourceString;
          }
          v98 = (_WORD *)((char *)a3 + 16);
          v99 = 260LL;
          v100 = v95 - ((char *)a3 + 16);
          do
          {
            if ( v99 == -2147483386 )
              break;
            v101 = *(_WORD *)((char *)v98 + v100);
            if ( !v101 )
              break;
            *v98++ = v101;
            --v99;
          }
          while ( v99 );
          v102 = v98 - 1;
          if ( v99 )
            v102 = v98;
          *v102 = 0;
          v8 = v99 == 0 ? 0x8007007A : 0;
          if ( !v99 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1A5,
              (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)(unsigned int)v8);
            if ( v147 )
            {
              CoTaskMemFree(v147);
              v147 = 0LL;
            }
            v148 = 0LL;
            v149 = 0LL;
            v103 = v133;
            if ( v133 )
            {
              v133 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 16LL))(v103);
            }
            v104 = v136;
            if ( v136 )
            {
              v136 = 0LL;
              (*(void (__fastcall **)(struct ImmersiveIcons::LoadIconParams *))(*(_QWORD *)v104 + 16LL))(v104);
            }
            if ( v46 )
              CoTaskMemFree(v46);
            v105 = v134;
            if ( v134 )
            {
              v134 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 16LL))(v105);
            }
            v106 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v135;
            if ( v135 )
            {
              v135 = 0LL;
              ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v106)[2])(v106);
            }
            if ( v34 )
              CoTaskMemFree(v34);
            v107 = v132;
            if ( v132 )
            {
              v132 = 0LL;
              (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v107 + 16LL))(v107);
            }
            if ( pv )
            {
              CoTaskMemFree(pv);
              pv = 0LL;
            }
            v138 = 0LL;
            v139 = 0LL;
            string = 0LL;
            if ( v15 )
              CoTaskMemFree(v15);
LABEL_87:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v131);
            goto LABEL_223;
          }
          *(_DWORD *)a3 = v146;
          *((_DWORD *)a3 + 1) = (_DWORD)v140;
          *((_BYTE *)a3 + 8) = v91;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v147);
LABEL_225:
          v124 = v133;
          if ( v133 )
          {
            v133 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v124 + 16LL))(v124);
          }
          v125 = v136;
          if ( v136 )
          {
            v136 = 0LL;
            (*(void (__fastcall **)(struct ImmersiveIcons::LoadIconParams *))(*(_QWORD *)v125 + 16LL))(v125);
          }
          if ( v46 )
            CoTaskMemFree(v46);
          v126 = v134;
          if ( v134 )
          {
            v134 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v126 + 16LL))(v126);
          }
          v127 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v135;
          if ( v135 )
          {
            v135 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v127)[2])(v127);
          }
          if ( v34 )
            CoTaskMemFree(v34);
          v128 = v132;
          if ( v132 )
          {
            v132 = 0LL;
            (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v128 + 16LL))(v128);
          }
          goto LABEL_239;
        }
        WindowsDeleteString(0LL);
        v140 = 0LL;
        v110 = string;
        v111 = *(_QWORD *)v151;
        if ( *(_QWORD *)v151 == -1LL )
        {
          if ( v34 )
          {
            do
              ++v111;
            while ( v34[v111] );
          }
          else
          {
            v111 = 0LL;
          }
          *(_QWORD *)v151 = v111;
        }
        v172 = 0LL;
        v112 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v111, v108, v109);
        v113 = v112 - 1;
        if ( (unsigned int)v111 < v112 )
          v113 = v111;
        v114 = WindowsCreateStringReference(v34, v113, &propvarIn, &v172);
        if ( v114 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v114, v115, v117);
          __debugbreak();
        }
        v118 = ShellMRTHelper::Common::TryFallbackToFilePath(v116, v172, v110, (HSTRING)&v140, (HSTRING *)ppv);
        v8 = v118;
        if ( v118 >= 0 )
        {
          StringRawBuffer = WindowsGetStringRawBuffer(v140, 0LL);
          if ( !PathFileExistsW(StringRawBuffer) )
          {
            v8 = -2147024893;
            v121 = 2147942403LL;
            v119 = 436LL;
LABEL_212:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v119,
              (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)v121);
            WindowsDeleteString(v140);
            v140 = 0LL;
            goto LABEL_213;
          }
          v122 = (char *)WindowsGetStringRawBuffer(v140, 0LL);
          v118 = StringCchCopyW((char *)a3 + 16, 260LL, v122);
          v8 = v118;
          if ( v118 >= 0 )
          {
            *(_QWORD *)a3 = 0LL;
            *((_BYTE *)a3 + 8) = 0;
            WindowsDeleteString(v140);
            goto LABEL_225;
          }
          v119 = 437LL;
        }
        else
        {
          v119 = 435LL;
        }
        v121 = (unsigned int)v118;
        goto LABEL_212;
      }
      v44 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
              (LPVOID *)v144,
              (__int64 *)&sourceString);
      v8 = v44;
      if ( v44 < 0 )
      {
        v45 = 310LL;
        goto LABEL_62;
      }
    }
    v46 = *(_WORD **)&v144[0].unused;
    goto LABEL_101;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ReplaceChars((__int64)&pv);
  v24 = StringCchCopyW((char *)a3 + 16, 260LL, (char *)pv);
  v8 = v24;
  if ( v24 < 0 )
  {
    v25 = 452LL;
    goto LABEL_29;
  }
  *(_QWORD *)a3 = 0LL;
  *((_BYTE *)a3 + 8) = 0;
LABEL_239:
  if ( !*(_DWORD *)a3 )
  {
    v147 = 0LL;
    v148 = 0LL;
    v149 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v147);
    v148 = -1LL;
    v149 = -1LL;
    *(_OWORD *)&v144[0].unused = PKEY_AppUserModel_ParentID;
    LODWORD(v145) = 19;
    if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(&v131, v144, &v147) >= 0 )
    {
      if ( (unsigned int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinalIgnoreCase(
                           &v147,
                           L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge") == 2 )
      {
LABEL_246:
        *(_DWORD *)a3 = 3;
      }
      else
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UnplateMicrosoftEdgeTiles_25482738>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_Servicing_UnplateMicrosoftEdgeTiles_25482738>::GetImpl'::`2'::impl,
          1LL);
        v173[0] = L"Microsoft.MicrosoftEdge.Stable_8wekyb3d8bbwe!App";
        v173[1] = L"Microsoft.MicrosoftEdge.Beta_8wekyb3d8bbwe!App";
        v173[2] = L"Microsoft.MicrosoftEdge.Dev_8wekyb3d8bbwe!App";
        v173[3] = L"Microsoft.MicrosoftEdge.Canary_8wekyb3d8bbwe!App";
        v173[4] = L"Microsoft.MicrosoftEdge.Internal_8wekyb3d8bbwe!App";
        for ( j = v173; j != &v174; ++j )
        {
          if ( (unsigned int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinalIgnoreCase(
                               &v147,
                               *j) == 2 )
            goto LABEL_246;
        }
      }
      if ( (unsigned int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinalIgnoreCase(
                           &v147,
                           L"Microsoft.YourPhone_8wekyb3d8bbwe!App") == 2 )
        *(_DWORD *)a3 = 3;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v147);
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v138 = 0LL;
  v139 = 0LL;
  string = 0LL;
  if ( v15 )
    CoTaskMemFree(v15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v131);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v158);
  return 0LL;
}
