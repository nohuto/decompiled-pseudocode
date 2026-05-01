/*
 * XREFs of ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1800ABDC8
 * Callers:
 *     ?_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@1@@Z @ 0x18067F6B0 (-_LoadImmersiveIcon@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAPEAUHBITMAP__@@PEAUIconData2@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065220 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x18007192C (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AAC98 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x1800AD488 (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 *     ImmersiveIcons::GetPackageFullNameForAppsFolderItem @ 0x1800AD568 (ImmersiveIcons--GetPackageFullNameForAppsFolderItem.c)
 *     ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x1800AD664 (-ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x1800EC0C0 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV12.c)
 *     ?CompareOrdinalIgnoreCase@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x180143868 (-CompareOrdinalIgnoreCase@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Window.c)
 *     ?ReplaceChars@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z @ 0x1801CD9D8 (-ReplaceChars@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAXGG@Z.c)
 *     ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z @ 0x180299CE8 (-GetContrastForParams@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180299D48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4.c)
 *     ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1802A8C18 (--$GetString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x1802B12AC (-TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z.c)
 *     ?ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z @ 0x1802B451C (-ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z.c)
 *     ?HasFileUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1802C063C (-HasFileUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1802C0788 (-HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?HasMsResourceUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1802C0874 (-HasMsResourceUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$As@UIResourceCandidate@@@?$ComPtr@UIResourceCandidate2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIResourceCandidate@@@WRL@Microsoft@@@Details@12@@Z @ 0x18067D730 (--$As@UIResourceCandidate@@@-$ComPtr@UIResourceCandidate2@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?HasMsAppDataUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x18067E8F0 (-HasMsAppDataUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z.c)
 *     ?InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x18067E950 (-InitResourceContextForAllThemes@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@.c)
 *     ?InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@@Z @ 0x18067EAE0 (-InitResourceContextForLightTheme@ImmersiveIcons@@YAJAEBULoadIconParams@1@PEAUIResourceContext@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UnplateMicrosoftEdgeTiles_25482738@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18067F280 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_UnplateMicrosoftEdgeTiles_25482.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ImmersiveIcons::GetIconData(
        WCHAR *pszItem,
        ImmersiveIcons *this,
        const struct ImmersiveIcons::LoadIconParams *a3,
        struct ImmersiveIcons::IconData2 *a4)
{
  ImmersiveIcons *v5; // r13
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
  __int64 v68; // rbx
  int (__fastcall *v69)(__int64, struct ImmersiveIcons::LoadIconParams *, _WORD *, __int64 *); // rdi
  int v70; // eax
  __int64 v71; // rbx
  __int64 (__fastcall *v72)(__int64, const wchar_t *, __int64 *); // rdi
  int v73; // r13d
  int v74; // edx
  unsigned int v75; // r8d
  HSTRING v76; // rdi
  __int64 v77; // rbx
  unsigned int v78; // eax
  UINT32 v79; // edx
  HRESULT v80; // eax
  int v81; // edx
  ShellMRTHelper::Common *v82; // rcx
  unsigned int v83; // r8d
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // r9
  const WCHAR *StringRawBuffer; // rax
  char *v88; // rax
  int ContrastForParams; // eax
  __int64 v90; // rdx
  int v91; // r13d
  int v92; // eax
  __int64 v93; // rbx
  __int64 (__fastcall *v94)(__int64, struct ImmersiveIcons::LoadIconParams *, _WORD *, __int64 *); // rdi
  int v95; // eax
  int v96; // eax
  __int64 v97; // rbx
  __int64 (__fastcall *v98)(__int64, const wchar_t *, HSTRING_HEADER *); // rdi
  __int64 v99; // rbx
  int (__fastcall *v100)(__int64, const wchar_t *, __int64 *); // rdi
  int v101; // eax
  int v102; // ebx
  __int64 v103; // rbx
  int (__fastcall *v104)(__int64, const wchar_t *, LPVOID *); // rdi
  bool v105; // r13
  __int64 v106; // rbx
  __int64 (__fastcall *v107)(__int64, LPVOID *); // rdi
  int v108; // eax
  char *v109; // r8
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rcx
  _WORD *v112; // rcx
  __int64 v113; // rdx
  signed __int64 v114; // r8
  __int16 v115; // ax
  _WORD *v116; // rax
  __int64 v117; // rcx
  struct ImmersiveIcons::LoadIconParams *v118; // rcx
  __int64 v119; // rcx
  __int64 (__fastcall ***v120)(_QWORD, _QWORD, _QWORD); // rcx
  HSTRING v121; // rcx
  __int64 v123; // rcx
  struct ImmersiveIcons::LoadIconParams *v124; // rcx
  __int64 v125; // rcx
  __int64 (__fastcall ***v126)(_QWORD, _QWORD, _QWORD); // rcx
  HSTRING v127; // rcx
  HSTRING_HEADER *j; // rbx
  void **ppv; // [rsp+20h] [rbp-E0h]
  __int64 v130; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v131; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v132; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v133; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v134)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-B0h] BYREF
  struct ImmersiveIcons::LoadIconParams *v135; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v137; // [rsp+68h] [rbp-98h]
  __int64 v138; // [rsp+70h] [rbp-90h]
  HSTRING v139; // [rsp+78h] [rbp-88h] BYREF
  PCWSTR sourceString; // [rsp+80h] [rbp-80h] BYREF
  UINT32 length[2]; // [rsp+88h] [rbp-78h]
  __int64 v142; // [rsp+90h] [rbp-70h]
  HSTRING__ v143[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v144; // [rsp+B0h] [rbp-50h]
  int v145; // [rsp+C0h] [rbp-40h]
  LPVOID v146; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v147; // [rsp+D0h] [rbp-30h]
  __int64 v148; // [rsp+D8h] [rbp-28h]
  PCWSTR v149; // [rsp+E0h] [rbp-20h] BYREF
  UINT32 v150[2]; // [rsp+E8h] [rbp-18h]
  __int64 v151; // [rsp+F0h] [rbp-10h]
  LPVOID v152; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v153; // [rsp+100h] [rbp+0h] BYREF
  __int64 v154; // [rsp+108h] [rbp+8h] BYREF
  __int64 v155; // [rsp+110h] [rbp+10h] BYREF
  __int64 v156; // [rsp+118h] [rbp+18h] BYREF
  void *v157; // [rsp+120h] [rbp+20h] BYREF
  __int64 v158; // [rsp+128h] [rbp+28h] BYREF
  __int64 v159; // [rsp+130h] [rbp+30h]
  __int64 v160; // [rsp+138h] [rbp+38h]
  ImmersiveIcons *v161; // [rsp+140h] [rbp+40h]
  __int64 v162; // [rsp+148h] [rbp+48h] BYREF
  __int64 v163; // [rsp+150h] [rbp+50h]
  __int64 v164; // [rsp+158h] [rbp+58h]
  __int64 v165; // [rsp+160h] [rbp+60h] BYREF
  __int64 v166; // [rsp+168h] [rbp+68h]
  __int64 v167; // [rsp+170h] [rbp+70h]
  _QWORD v168[5]; // [rsp+178h] [rbp+78h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+1A0h] [rbp+A0h] BYREF
  HSTRING string; // [rsp+1B8h] [rbp+B8h] BYREF
  HSTRING_HEADER propvarIn; // [rsp+1C0h] [rbp+C0h] BYREF
  HSTRING v172; // [rsp+1D8h] [rbp+D8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v5 = this;
  v161 = this;
  v157 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v157);
  v7 = SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4000u,
         pszItem,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         &v157);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDE,
      (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)(unsigned int)v7);
LABEL_222:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v157);
    return (unsigned int)v8;
  }
  v130 = 0LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v130);
  v9 = wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(
         (unsigned int)&v130,
         (_DWORD)v157,
         1,
         (unsigned int)&unk_18077F160,
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
LABEL_6:
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v130);
    goto LABEL_222;
  }
  *((_DWORD *)a3 + 3) = 0;
  LOWORD(propvarIn.Reserved.Reserved1) = 0;
  *(_OWORD *)&v143[0].unused = PKEY_Tile_Background;
  LODWORD(v144) = 4;
  v8 = (*(__int64 (__fastcall **)(__int64, HSTRING__ *, HSTRING_HEADER *))(*(_QWORD *)v130 + 40LL))(
         v130,
         v143,
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
  v142 = -1LL;
  *(_OWORD *)&v143[0].unused = PKEY_Tile_SmallLogoPath;
  LODWORD(v144) = 2;
  v12 = wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(&v130, v143, &sourceString);
  v8 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF2,
      (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)(unsigned int)v12);
LABEL_15:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
    goto LABEL_6;
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
  v137 = 0LL;
  v138 = 0LL;
  if ( ShellMRTHelper::Common::HasFileUriScheme((ShellMRTHelper::Common *)string, v20) )
  {
    if ( pv )
      CoTaskMemFree(pv);
    v137 = -1LL;
    v138 = -1LL;
    v24 = TileUtils::ConvertFileUriToFilePath(v15, (const unsigned __int16 *)&pv, v23);
    v8 = v24;
    if ( v24 < 0 )
    {
      v25 = 260LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v24);
LABEL_32:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pv);
      string = 0LL;
      goto LABEL_15;
    }
  }
  else
  {
    if ( ShellMRTHelper::Common::HasMsAppDataUriScheme((ShellMRTHelper::Common *)string, v22) )
    {
      v152 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v152);
      v26 = CoCreateInstance(
              &GUID_a8ca4495_65ab_4333_9ff9_4feb6fbf5169,
              0LL,
              1u,
              &GUID_428bb582_2a87_4ea0_b529_30067cc4a4d7,
              &v152);
      v8 = v26;
      if ( v26 >= 0 )
      {
        v146 = 0LL;
        v147 = 0LL;
        v148 = 0LL;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v146);
        v147 = -1LL;
        v148 = -1LL;
        PackageFullNameForAppsFolderItem = ImmersiveIcons::GetPackageFullNameForAppsFolderItem((CallerIdentity *)pszItem);
        v8 = PackageFullNameForAppsFolderItem;
        if ( PackageFullNameForAppsFolderItem >= 0 )
        {
          v29 = v152;
          v30 = *(__int64 (__fastcall **)(LPVOID, WCHAR *, LPVOID, _QWORD, LPVOID *))(*(_QWORD *)v152 + 48LL);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pv);
          v137 = -1LL;
          v138 = -1LL;
          PackageFullNameForAppsFolderItem = v30(v29, v15, v146, 0LL, &pv);
          v8 = PackageFullNameForAppsFolderItem;
          if ( PackageFullNameForAppsFolderItem >= 0 )
          {
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v146);
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v152);
            goto LABEL_43;
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
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v146);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x109,
          (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v26);
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v152);
      goto LABEL_32;
    }
    if ( !PathIsRelativeW(v15) )
    {
      v24 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
              &pv,
              &sourceString);
      v8 = v24;
      if ( v24 < 0 )
      {
        v25 = 276LL;
        goto LABEL_31;
      }
    }
  }
LABEL_43:
  if ( !pv || !*(_WORD *)pv )
  {
    v131 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v131);
    Instance = CoCreateInstance(
                 &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
                 0LL,
                 1u,
                 &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
                 (LPVOID *)&v131);
    v8 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11D,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)Instance);
LABEL_53:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v131);
      goto LABEL_32;
    }
    v149 = 0LL;
    *(_QWORD *)v150 = -1LL;
    v151 = -1LL;
    v32 = ImmersiveIcons::GetPackageFullNameForAppsFolderItem((CallerIdentity *)pszItem);
    v8 = v32;
    if ( v32 < 0 )
    {
      v33 = 288LL;
LABEL_56:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v33,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v32);
LABEL_57:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v149);
      goto LABEL_53;
    }
    v34 = (WCHAR *)v149;
    v32 = (*(__int64 (__fastcall **)(HSTRING, PCWSTR))(*(_QWORD *)v131 + 40LL))(v131, v149);
    v8 = v32;
    if ( v32 < 0 )
    {
      v33 = 290LL;
      goto LABEL_56;
    }
    v134 = 0LL;
    v35 = v131;
    v36 = *(__int64 (__fastcall **)(HSTRING, GUID *, _QWORD))(*(_QWORD *)v131 + 56LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v134);
    v37 = v36(v35, &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd, &v134);
    v8 = v37;
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x125,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v37);
LABEL_62:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v134);
      goto LABEL_57;
    }
    v133 = 0LL;
    v38 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v134;
    v39 = **v134;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v133);
    v40 = v39(v38, &GUID_2fe6ec6e_da7e_4b2a_a8f9_90b289061f20, &v133);
    v8 = v40;
    if ( v40 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x128,
        (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v40);
LABEL_65:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v133);
      goto LABEL_62;
    }
    memset(v143, 0, sizeof(v143));
    v144 = 0LL;
    if ( ShellMRTHelper::Common::HasMsAppXUriScheme((ShellMRTHelper::Common *)string, v41) )
    {
      *(_QWORD *)&v143[2].unused = -1LL;
      v144 = -1LL;
      v44 = ShellMRTHelper::Common::ConvertMsAppXUriToMsResourceUri((ShellMRTHelper::Common *)string, v143, v43);
      v8 = v44;
      if ( v44 < 0 )
      {
        v45 = 303LL;
LABEL_69:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v45,
          (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v44);
LABEL_70:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v143);
        goto LABEL_65;
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
                (__int64)v143,
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
          if ( *(_QWORD *)&v143[0].unused )
            CoTaskMemFree(*(LPVOID *)&v143[0].unused);
          v48 = v133;
          if ( v133 )
          {
            v133 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
          }
          v49 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v134;
          if ( v134 )
          {
            v134 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v49)[2])(v49);
          }
          if ( v34 )
            CoTaskMemFree(v34);
          v50 = v131;
          if ( v131 )
          {
            v131 = 0LL;
            (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v50 + 16LL))(v50);
          }
          if ( pv )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
          }
          v137 = 0LL;
          v138 = 0LL;
          string = 0LL;
          if ( v15 )
            CoTaskMemFree(v15);
          goto LABEL_221;
        }
        v44 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(
                v143,
                (__int64 *)&sourceString);
        v8 = v44;
        if ( v44 < 0 )
        {
          v45 = 318LL;
          goto LABEL_69;
        }
        v46 = *(_WORD **)&v143[0].unused;
        v51 = *(_QWORD *)&v143[2].unused;
        if ( *(_QWORD *)&v143[2].unused == -1LL )
        {
          if ( *(_QWORD *)&v143[0].unused )
          {
            v51 = -1LL;
            do
              ++v51;
            while ( *(_WORD *)(*(_QWORD *)&v143[0].unused + 2 * v51) );
          }
          else
          {
            v51 = 0LL;
          }
          *(_QWORD *)&v143[2].unused = v51;
        }
        for ( i = 0LL; i < v51; ++i )
        {
          if ( v46[i] == 47 )
            v46[i] = 92;
        }
LABEL_109:
        v135 = 0LL;
        v53 = v131;
        v54 = *(__int64 (__fastcall **)(HSTRING, GUID *, struct ImmersiveIcons::LoadIconParams **))(*(_QWORD *)v131
                                                                                                  + 72LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v135);
        v55 = v54(v53, &GUID_e3c22b30_8502_4b2f_9133_559674587e51, &v135);
        v8 = v55;
        if ( v55 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x145,
            (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v55);
LABEL_111:
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v135);
          goto LABEL_70;
        }
        v132 = 0LL;
        v145 = 0;
        LODWORD(v139) = 0;
        LOBYTE(v56) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
          v56);
        if ( *((_DWORD *)v5 + 11) == 1 && *((_DWORD *)v5 + 10) != 1 && *((_DWORD *)v5 + 9) != 2 )
        {
          inited = ImmersiveIcons::InitResourceContextForLightTheme(v5, v135, v57);
          v8 = inited;
          if ( inited < 0 )
          {
            v59 = 345LL;
LABEL_117:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v59,
              (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)(unsigned int)inited);
LABEL_118:
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v132);
            goto LABEL_111;
          }
          v155 = 0LL;
          v60 = v133;
          v61 = *(int (__fastcall **)(__int64, struct ImmersiveIcons::LoadIconParams *, _WORD *, __int64 *))(*(_QWORD *)v133 + 48LL);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v155);
          if ( v61(v60, v135, v46, &v155) >= 0 )
          {
            v154 = 0LL;
            v62 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(&v155, &v154);
            v8 = v62;
            if ( v62 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x15F,
                (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                (const char *)(unsigned int)v62);
              Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v154);
              v63 = &v155;
LABEL_122:
              Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v63);
              goto LABEL_118;
            }
            v162 = 0LL;
            v163 = 0LL;
            v164 = 0LL;
            v64 = v154;
            v65 = *(int (__fastcall **)(__int64, const wchar_t *, __int64 *))(*(_QWORD *)v154 + 64LL);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v162);
            v163 = -1LL;
            v164 = -1LL;
            if ( v65(v64, L"AlternateForm", &v162) >= 0
              && (unsigned int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinalIgnoreCase(
                                 &v162,
                                 L"lightunplated") == 2 )
            {
              v145 = 2;
              LODWORD(v139) = 1;
              v66 = v132;
              v67 = v154;
              if ( v132 != v154 )
              {
                if ( v154 )
                {
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v154 + 8LL))(v154);
                  v66 = v132;
                }
                v153 = v66;
                v132 = v67;
                Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v153);
              }
            }
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v162);
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v154);
          }
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v155);
        }
        if ( !v132 )
        {
          inited = ImmersiveIcons::InitResourceContextForAllThemes(v5, v135, v57);
          v8 = inited;
          if ( inited < 0 )
          {
            v59 = 369LL;
            goto LABEL_117;
          }
          v156 = 0LL;
          v68 = v133;
          v69 = *(int (__fastcall **)(__int64, struct ImmersiveIcons::LoadIconParams *, _WORD *, __int64 *))(*(_QWORD *)v133 + 48LL);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v156);
          if ( v69(v68, v135, v46, &v156) >= 0 )
          {
            v70 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(&v156, &v132);
            v8 = v70;
            if ( v70 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x175,
                (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                (const char *)(unsigned int)v70);
              v63 = &v156;
              goto LABEL_122;
            }
            v165 = 0LL;
            v166 = 0LL;
            v167 = 0LL;
            v71 = v132;
            v72 = *(__int64 (__fastcall **)(__int64, const wchar_t *, __int64 *))(*(_QWORD *)v132 + 64LL);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v165);
            v166 = -1LL;
            v167 = -1LL;
            v73 = v72(v71, L"AlternateForm", &v165);
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v165);
            v145 = (v73 >> 31) + 2;
            v5 = v161;
          }
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v156);
          if ( !v132 )
          {
            WindowsDeleteString(0LL);
            v139 = 0LL;
            v76 = string;
            v77 = *(_QWORD *)v150;
            if ( *(_QWORD *)v150 == -1LL )
            {
              if ( v34 )
              {
                do
                  ++v77;
                while ( v34[v77] );
              }
              else
              {
                v77 = 0LL;
              }
              *(_QWORD *)v150 = v77;
            }
            v172 = 0LL;
            v78 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v77, v74, v75);
            v79 = v78 - 1;
            if ( (unsigned int)v77 < v78 )
              v79 = v77;
            v80 = WindowsCreateStringReference(v34, v79, &propvarIn, &v172);
            if ( v80 < 0 )
            {
              Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v80, v81, v83);
              __debugbreak();
            }
            v84 = ShellMRTHelper::Common::TryFallbackToFilePath(v82, v172, v76, (HSTRING)&v139, (HSTRING *)ppv);
            v8 = v84;
            if ( v84 < 0 )
            {
              v85 = 435LL;
LABEL_151:
              v86 = (unsigned int)v84;
LABEL_152:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v85,
                (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                (const char *)v86);
              WindowsDeleteString(v139);
              v139 = 0LL;
              goto LABEL_118;
            }
            StringRawBuffer = WindowsGetStringRawBuffer(v139, 0LL);
            if ( !PathFileExistsW(StringRawBuffer) )
            {
              v8 = -2147024893;
              v86 = 2147942403LL;
              v85 = 436LL;
              goto LABEL_152;
            }
            v88 = (char *)WindowsGetStringRawBuffer(v139, 0LL);
            v84 = StringCchCopyW((char *)a3 + 16, 260LL, v88);
            v8 = v84;
            if ( v84 < 0 )
            {
              v85 = 437LL;
              goto LABEL_151;
            }
            *(_QWORD *)a3 = 0LL;
            *((_BYTE *)a3 + 8) = 0;
            WindowsDeleteString(v139);
LABEL_224:
            v123 = v132;
            if ( v132 )
            {
              v132 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v123 + 16LL))(v123);
            }
            v124 = v135;
            if ( v135 )
            {
              v135 = 0LL;
              (*(void (__fastcall **)(struct ImmersiveIcons::LoadIconParams *))(*(_QWORD *)v124 + 16LL))(v124);
            }
            if ( v46 )
              CoTaskMemFree(v46);
            v125 = v133;
            if ( v133 )
            {
              v133 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v125 + 16LL))(v125);
            }
            v126 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v134;
            if ( v134 )
            {
              v134 = 0LL;
              ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v126)[2])(v126);
            }
            if ( v34 )
              CoTaskMemFree(v34);
            v127 = v131;
            if ( v131 )
            {
              v131 = 0LL;
              (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v127 + 16LL))(v127);
            }
            goto LABEL_238;
          }
        }
        ContrastForParams = ImmersiveIcons::GetContrastForParams(v5);
        v91 = ContrastForParams;
        if ( v145 == 1 && !ContrastForParams )
        {
          v153 = 0LL;
          v92 = (*(__int64 (__fastcall **)(struct ImmersiveIcons::LoadIconParams *, _QWORD))(*(_QWORD *)v135 + 112LL))(
                  v135,
                  *((unsigned __int16 *)v161 + 8));
          if ( v92 >= 0 )
          {
            v93 = v133;
            v94 = *(__int64 (__fastcall **)(__int64, struct ImmersiveIcons::LoadIconParams *, _WORD *, __int64 *))(*(_QWORD *)v133 + 48LL);
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v153);
            v95 = v94(v93, v135, v46, &v153);
            if ( v95 >= 0 )
            {
              v96 = Microsoft::WRL::ComPtr<IResourceCandidate2>::As<IResourceCandidate>(&v153, &v132);
              v8 = v96;
              if ( v96 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x187,
                  (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                  (const char *)(unsigned int)v96);
                v63 = &v153;
                goto LABEL_122;
              }
              memset(&propvarIn, 0, sizeof(propvarIn));
              v97 = v132;
              v98 = *(__int64 (__fastcall **)(__int64, const wchar_t *, HSTRING_HEADER *))(*(_QWORD *)v132 + 64LL);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
              *(_QWORD *)&propvarIn.Reserved.Reserved2[8] = -1LL;
              *(_QWORD *)&propvarIn.Reserved.Reserved2[16] = -1LL;
              LODWORD(v97) = v98(v97, L"AlternateForm", &propvarIn);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&propvarIn);
              v145 = ((int)v97 >> 31) + 2;
            }
            else
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x185,
                (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
                (const char *)(unsigned int)v95);
            }
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x184,
              (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
              (const char *)(unsigned int)v92);
          }
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v153);
        }
        LOBYTE(v90) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
          v90);
        v158 = 0LL;
        v159 = 0LL;
        v160 = 0LL;
        v99 = v132;
        v100 = *(int (__fastcall **)(__int64, const wchar_t *, __int64 *))(*(_QWORD *)v132 + 64LL);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v158);
        v159 = -1LL;
        v160 = -1LL;
        if ( v100(v99, L"Theme", &v158) >= 0 )
        {
          if ( (unsigned int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinalIgnoreCase(
                               &v158,
                               L"dark") == 2 )
          {
            LODWORD(v139) = 2;
          }
          else
          {
            v101 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinalIgnoreCase(
                     &v158,
                     L"light");
            v102 = (int)v139;
            if ( v101 == 2 )
              v102 = 1;
            LODWORD(v139) = v102;
          }
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v158);
        v146 = 0LL;
        v147 = 0LL;
        v148 = 0LL;
        v105 = 0;
        if ( v91 )
        {
          v103 = v132;
          v104 = *(int (__fastcall **)(__int64, const wchar_t *, LPVOID *))(*(_QWORD *)v132 + 64LL);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v146);
          v147 = -1LL;
          v148 = -1LL;
          if ( v104(v103, L"Contrast", &v146) >= 0 )
            v105 = 1;
        }
        v106 = v132;
        v107 = *(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v132 + 32LL);
        if ( pv )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
        }
        v137 = -1LL;
        v138 = -1LL;
        v108 = v107(v106, &pv);
        v8 = v108;
        if ( v108 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1A1,
            (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
            (const char *)(unsigned int)v108);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v146);
          goto LABEL_118;
        }
        v109 = (char *)pv;
        v110 = v137;
        if ( v137 == -1 )
        {
          if ( pv )
          {
            v110 = -1LL;
            do
              ++v110;
            while ( *((_WORD *)pv + v110) );
          }
          else
          {
            v110 = 0LL;
          }
          v137 = v110;
        }
        v111 = 0LL;
        if ( v110 )
        {
          do
          {
            if ( *(_WORD *)&v109[2 * v111] == 47 )
            {
              *(_WORD *)&v109[2 * v111] = 92;
              v110 = v137;
              v109 = (char *)pv;
            }
            ++v111;
          }
          while ( v111 < v110 );
          v15 = (WCHAR *)sourceString;
        }
        v112 = (_WORD *)((char *)a3 + 16);
        v113 = 260LL;
        v114 = v109 - ((char *)a3 + 16);
        do
        {
          if ( v113 == -2147483386 )
            break;
          v115 = *(_WORD *)((char *)v112 + v114);
          if ( !v115 )
            break;
          *v112++ = v115;
          --v113;
        }
        while ( v113 );
        v116 = v112 - 1;
        if ( v113 )
          v116 = v112;
        *v116 = 0;
        v8 = v113 == 0 ? 0x8007007A : 0;
        if ( v113 )
        {
          *(_DWORD *)a3 = v145;
          *((_DWORD *)a3 + 1) = (_DWORD)v139;
          *((_BYTE *)a3 + 8) = v105;
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v146);
          goto LABEL_224;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1A5,
          (int)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v8);
        if ( v146 )
        {
          CoTaskMemFree(v146);
          v146 = 0LL;
        }
        v147 = 0LL;
        v148 = 0LL;
        v117 = v132;
        if ( v132 )
        {
          v132 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v117 + 16LL))(v117);
        }
        v118 = v135;
        if ( v135 )
        {
          v135 = 0LL;
          (*(void (__fastcall **)(struct ImmersiveIcons::LoadIconParams *))(*(_QWORD *)v118 + 16LL))(v118);
        }
        if ( v46 )
          CoTaskMemFree(v46);
        v119 = v133;
        if ( v133 )
        {
          v133 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v119 + 16LL))(v119);
        }
        v120 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v134;
        if ( v134 )
        {
          v134 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v120)[2])(v120);
        }
        if ( v34 )
          CoTaskMemFree(v34);
        v121 = v131;
        if ( v131 )
        {
          v131 = 0LL;
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v121 + 16LL))(v121);
        }
        if ( pv )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
        }
        v137 = 0LL;
        v138 = 0LL;
        string = 0LL;
        if ( v15 )
          CoTaskMemFree(v15);
LABEL_221:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v130);
        goto LABEL_222;
      }
      v44 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
              v143,
              &sourceString);
      v8 = v44;
      if ( v44 < 0 )
      {
        v45 = 310LL;
        goto LABEL_69;
      }
    }
    v46 = *(_WORD **)&v143[0].unused;
    goto LABEL_109;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ReplaceChars(&pv);
  v24 = StringCchCopyW((char *)a3 + 16, 260LL, (char *)pv);
  v8 = v24;
  if ( v24 < 0 )
  {
    v25 = 452LL;
    goto LABEL_31;
  }
  *(_QWORD *)a3 = 0LL;
  *((_BYTE *)a3 + 8) = 0;
LABEL_238:
  if ( !*(_DWORD *)a3 )
  {
    v146 = 0LL;
    v147 = 0LL;
    v148 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v146);
    v147 = -1LL;
    v148 = -1LL;
    *(_OWORD *)&v143[0].unused = PKEY_AppUserModel_ParentID;
    LODWORD(v144) = 19;
    if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(&v130, v143, &v146) >= 0 )
    {
      if ( (unsigned int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinalIgnoreCase(
                           &v146,
                           L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge") == 2 )
      {
LABEL_245:
        *(_DWORD *)a3 = 3;
      }
      else
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_UnplateMicrosoftEdgeTiles_25482738>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_Servicing_UnplateMicrosoftEdgeTiles_25482738>::GetImpl'::`2'::impl,
          1LL);
        v168[0] = L"Microsoft.MicrosoftEdge.Stable_8wekyb3d8bbwe!App";
        v168[1] = L"Microsoft.MicrosoftEdge.Beta_8wekyb3d8bbwe!App";
        v168[2] = L"Microsoft.MicrosoftEdge.Dev_8wekyb3d8bbwe!App";
        v168[3] = L"Microsoft.MicrosoftEdge.Canary_8wekyb3d8bbwe!App";
        v168[4] = L"Microsoft.MicrosoftEdge.Internal_8wekyb3d8bbwe!App";
        for ( j = (HSTRING_HEADER *)v168; j != &hstringHeader; j = (HSTRING_HEADER *)((char *)j + 8) )
        {
          if ( (unsigned int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinalIgnoreCase(
                               &v146,
                               j->Reserved.Reserved1) == 2 )
            goto LABEL_245;
        }
      }
      if ( (unsigned int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinalIgnoreCase(
                           &v146,
                           L"Microsoft.YourPhone_8wekyb3d8bbwe!App") == 2 )
        *(_DWORD *)a3 = 3;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v146);
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v137 = 0LL;
  v138 = 0LL;
  string = 0LL;
  if ( v15 )
    CoTaskMemFree(v15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v130);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v157);
  return 0LL;
}
