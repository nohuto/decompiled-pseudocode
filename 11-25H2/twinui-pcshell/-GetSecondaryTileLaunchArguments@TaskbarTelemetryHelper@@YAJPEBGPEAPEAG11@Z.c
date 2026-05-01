/*
 * XREFs of ?GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z @ 0x18066B1B8
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x18066C480 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@0@Z @ 0x18066E81C (-PinnedListAdded@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG0W4PINNEDLISTMODIFYCALLER@@0@.c)
 *     ?TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806716AC (-TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180086830 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180181C58 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$ActivateInstance@UITileQueryFilter@Tiles@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUITileQueryFilter@Tiles@Internal@1@@Z @ 0x180664BF8 (--$ActivateInstance@UITileQueryFilter@Tiles@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRIN.c)
 *     ?GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBGPEAPEAG1@Z @ 0x1806689E8 (-GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@Y.c)
 *     ?IsFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YA_NPEBG@Z @ 0x18066D3D4 (-IsFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YA_NPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarTelemetryHelper::GetSecondaryTileLaunchArguments(
        wchar_t *Str,
        unsigned __int16 *a2,
        unsigned __int16 **a3,
        unsigned __int16 **a4)
{
  unsigned __int16 *v8; // rsi
  void **v9; // rbx
  unsigned __int16 *v10; // rax
  unsigned __int16 **v11; // r9
  int AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier; // eax
  unsigned int v13; // ebx
  __int64 v14; // rbx
  int ActivationFactory; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64 *); // rdi
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  unsigned int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, PVOID); // rdi
  HSTRING_HEADER *v25; // rax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, __int64 *); // rdi
  int v28; // eax
  __int64 v29; // rdx
  unsigned int v30; // r8d
  __int64 v31; // rbx
  __int64 (__fastcall *v32)(__int64, PVOID); // rdi
  HSTRING_HEADER *v33; // rax
  __int64 v34; // rbx
  __int64 (__fastcall *v35)(__int64, _QWORD, __int64, __int64 *); // rdi
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // rbx
  __int64 (__fastcall *v40)(__int64, _QWORD, _QWORD); // rdi
  int v41; // eax
  __int64 (__fastcall ***v42)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v43)(_QWORD, GUID *, __int64 *); // rdi
  int v44; // eax
  __int64 v45; // rbx
  __int64 (__fastcall *v46)(__int64, HSTRING *); // rdi
  int v47; // eax
  __int64 v48; // r14
  unsigned __int16 *v49; // rdi
  const WCHAR *StringRawBuffer; // rax
  LPWSTR *v51; // rbx
  int v52; // esi
  __int64 *v53; // rdi
  char *v54; // rax
  unsigned __int16 *v55; // rcx
  int v56; // r8d
  int v57; // edx
  int v58; // r14d
  const wchar_t *v59; // rcx
  unsigned __int64 v60; // rax
  wchar_t *v61; // rax
  __int64 v62; // rcx
  const wchar_t *v63; // r14
  wchar_t *v64; // rax
  __int64 v65; // rdx
  char *v66; // r8
  int v67; // edx
  int v68; // ecx
  const WCHAR *v70; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v72; // [rsp+50h] [rbp-B0h]
  __int64 v73; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v74; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v75; // [rsp+68h] [rbp-98h] BYREF
  __int64 v76; // [rsp+70h] [rbp-90h] BYREF
  HSTRING string; // [rsp+78h] [rbp-88h] BYREF
  __int64 v78; // [rsp+80h] [rbp-80h] BYREF
  __int64 (__fastcall ***v79)(_QWORD, GUID *, __int64 *); // [rsp+88h] [rbp-78h] BYREF
  __int64 v80; // [rsp+90h] [rbp-70h] BYREF
  int pNumArgs; // [rsp+98h] [rbp-68h] BYREF
  int v82; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned __int16 *v83; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v84; // [rsp+A8h] [rbp-58h]
  __int64 v85; // [rsp+B0h] [rbp-50h]
  const WCHAR *v86; // [rsp+B8h] [rbp-48h] BYREF
  const WCHAR *v87; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 *v88; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v89; // [rsp+D0h] [rbp-30h]
  __int64 v90; // [rsp+D8h] [rbp-28h]
  __int64 v91; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v92; // [rsp+E8h] [rbp-18h]
  __int64 v93; // [rsp+F0h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v8 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  if ( !Str || !SecondaryTileIdentifierHelpers::IsFullyQualifiedTileIdentifier(Str, a2) )
    return 2147943569LL;
  v87 = 0LL;
  v86 = 0LL;
  v9 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v86);
  v10 = (unsigned __int16 *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v87);
  AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier = SecondaryTileIdentifierHelpers::GetAumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier(
                                                                 Str,
                                                                 v10,
                                                                 (unsigned __int16 **)v9,
                                                                 v11);
  v13 = AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier;
  if ( AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)AumidAndAppSpecifiedTileIdFromFullyQualifiedTileIdentifier);
LABEL_78:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v86);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v87);
    return v13;
  }
  v74 = 0LL;
  v72 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Tiles.TileStore",
    0x21u,
    0x20u);
  v14 = v72;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v74);
  ActivationFactory = RoGetActivationFactory(v14, &GUID_3a1f4546_cb54_4968_a3f8_fa93f2fe6b40, &v74);
  v13 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)ActivationFactory);
LABEL_7:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v74);
    goto LABEL_78;
  }
  v75 = 0LL;
  v16 = v74;
  v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v74 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v75);
  v18 = v17(v16, 0LL, &v75);
  v13 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v18);
LABEL_10:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v75);
    goto LABEL_7;
  }
  v73 = 0LL;
  v72 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Tiles.TileQueryFilter",
    0x27u,
    0x26u);
  v19 = v72;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v73);
  v20 = Windows::Foundation::ActivateInstance<Windows::Internal::Tiles::ITileQueryFilter>(v19, &v73);
  v13 = v20;
  if ( v20 < 0 )
  {
    v22 = 45LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v20);
LABEL_14:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v73);
    goto LABEL_10;
  }
  v23 = v73;
  v24 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v73 + 88LL);
  v70 = v87;
  v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v70, v21);
  v20 = v24(v23, v25[1].Reserved.Reserved1);
  v13 = v20;
  if ( v20 < 0 )
  {
    v22 = 47LL;
    goto LABEL_13;
  }
  v76 = 0LL;
  v26 = v73;
  v27 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v73 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v76);
  v28 = v27(v26, &v76);
  v13 = v28;
  if ( v28 < 0 )
  {
    v29 = 50LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v28);
LABEL_20:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v76);
    goto LABEL_14;
  }
  v28 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v76 + 104LL))(v76, 1LL);
  v13 = v28;
  if ( v28 < 0 )
  {
    v29 = 52LL;
    goto LABEL_19;
  }
  v31 = v73;
  v32 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v73 + 104LL);
  v70 = v86;
  v33 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v70, v30);
  v28 = v32(v31, v33[1].Reserved.Reserved1);
  v13 = v28;
  if ( v28 < 0 )
  {
    v29 = 53LL;
    goto LABEL_19;
  }
  v78 = 0LL;
  v34 = v75;
  v35 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v75 + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v78);
  v36 = v35(v34, 0LL, v73, &v78);
  v13 = v36;
  if ( v36 < 0 )
  {
    v37 = 56LL;
LABEL_27:
    v38 = (unsigned int)v36;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)v38);
LABEL_29:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v78);
    goto LABEL_20;
  }
  v82 = 0;
  v36 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v78 + 56LL))(v78, &v82);
  v13 = v36;
  if ( v36 < 0 )
  {
    v37 = 59LL;
    goto LABEL_27;
  }
  if ( v82 != 1 )
  {
    v13 = -2147024883;
    v38 = 2147942413LL;
    v37 = 60LL;
    goto LABEL_28;
  }
  v79 = 0LL;
  v39 = v78;
  v40 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v78 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v79);
  v41 = v40(v39, 0LL, &v79);
  v13 = v41;
  if ( v41 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v41);
LABEL_36:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v79);
    goto LABEL_29;
  }
  v80 = 0LL;
  v42 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v79;
  v43 = **v79;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v80);
  v44 = v43(v42, &GUID_f10ff47a_c551_404d_9a7f_379d7d40b973, &v80);
  v13 = v44;
  if ( v44 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v44);
LABEL_39:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v80);
    goto LABEL_36;
  }
  v45 = v80;
  v46 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v80 + 64LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v47 = v46(v45, &string);
  v13 = v47;
  if ( v47 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
      (const char *)(unsigned int)v47);
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_39;
  }
  v48 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v49 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  pNumArgs = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v51 = CommandLineToArgvW(StringRawBuffer, &pNumArgs);
  if ( !v51 )
    goto LABEL_74;
  v52 = 1;
  v53 = (__int64 *)(v51 + 2);
  while ( v52 - 1 < pNumArgs )
  {
    v54 = (char *)*(v53 - 2);
    v55 = (unsigned __int16 *)v54;
    do
    {
      v56 = *(unsigned __int16 *)((char *)v55 + (char *)L"-url" - v54);
      v57 = *v55 - v56;
      if ( v57 )
        break;
      ++v55;
    }
    while ( v56 );
    if ( v57 )
    {
      v66 = (char *)((char *)L"-tbPinSource" - v54);
      do
      {
        v67 = *(unsigned __int16 *)&v66[(_QWORD)v54];
        v68 = *(unsigned __int16 *)v54 - v67;
        if ( v68 )
          break;
        v54 += 2;
      }
      while ( v67 );
      if ( !v68 && v52 < pNumArgs )
      {
        v58 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                (__int64)&v88,
                *(v53 - 1),
                0xFFFFFFFFFFFFFFFFuLL);
        if ( v58 < 0 )
        {
          v65 = 124LL;
          goto LABEL_70;
        }
      }
    }
    else if ( v52 + 1 < pNumArgs )
    {
      v58 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (__int64)&v91,
              *v53,
              0xFFFFFFFFFFFFFFFFuLL);
      if ( v58 < 0 )
      {
        v65 = 92LL;
        goto LABEL_70;
      }
      v59 = (const wchar_t *)*v53;
      v60 = -1LL;
      do
        ++v60;
      while ( v59[v60] );
      if ( v60 > 1 )
      {
        v61 = wcsstr(v59, L"msSrc=");
        if ( v61 )
        {
          v62 = -1LL;
          do
            ++v62;
          while ( aMssrc[v62] );
          v63 = &v61[v62];
          v64 = wcsstr(v63, L"&");
          if ( v64 )
          {
            v58 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                    (__int64)&v83,
                    (__int64)v63,
                    v64 - v63);
            if ( v58 < 0 )
            {
              v65 = 108LL;
LABEL_70:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v65,
                (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarTelemetryHelper.h",
                (const char *)(unsigned int)v58);
              LocalFree(v51);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v88);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v83);
              Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v91);
              WindowsDeleteString(string);
              string = 0LL;
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v80);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v79);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v78);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v76);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v73);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v75);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v74);
              v13 = v58;
              goto LABEL_78;
            }
          }
          else
          {
            v58 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                    (__int64)&v83,
                    (__int64)v63,
                    0xFFFFFFFFFFFFFFFFuLL);
            if ( v58 < 0 )
            {
              v65 = 112LL;
              goto LABEL_70;
            }
          }
        }
      }
    }
    ++v52;
    ++v53;
  }
  v48 = v91;
  v49 = v83;
  v8 = v88;
  if ( !v91 )
  {
LABEL_74:
    if ( !v49 && !v8 )
    {
      if ( v51 )
        LocalFree(v51);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v88);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v83);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v91);
      WindowsDeleteString(string);
      string = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v80);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v79);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v78);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v76);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v73);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v75);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v74);
      v13 = -2147023727;
      goto LABEL_78;
    }
  }
  v91 = 0LL;
  v93 = 0LL;
  v92 = 0LL;
  *(_QWORD *)a2 = v48;
  v83 = 0LL;
  v85 = 0LL;
  v84 = 0LL;
  *a3 = v49;
  v88 = 0LL;
  v90 = 0LL;
  v89 = 0LL;
  *a4 = v8;
  if ( v51 )
    LocalFree(v51);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v88);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v83);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v91);
  WindowsDeleteString(string);
  string = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v80);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v79);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v78);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v76);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v73);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v75);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v74);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v86);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v87);
  return 0LL;
}
