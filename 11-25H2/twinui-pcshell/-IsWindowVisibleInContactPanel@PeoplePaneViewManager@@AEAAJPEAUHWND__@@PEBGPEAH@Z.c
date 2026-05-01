/*
 * XREFs of ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1804014B8
 * Callers:
 *     ?IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x1801FECD0 (-IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??_D?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800651EC (--_D-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18010CA98 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x1801A78F0 (--0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1801E73CC (--1RoVariant@@QEAA@XZ.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802C28B8 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x18033B100 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1803408B0 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1803539B8 (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x18037BA60 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
__int64 __fastcall PeoplePaneViewManager::IsWindowVisibleInContactPanel(
        PeoplePaneViewManager *this,
        HWND a2,
        const unsigned __int16 *a3,
        int *a4)
{
  int v7; // ebx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64, struct IInspectable **); // rdi
  int v19; // r14d
  WCHAR *v20; // rsi
  HSTRING v21; // rbx
  HSTRING v22; // rax
  int v23; // edx
  int v24; // ebx
  int v25; // ebx
  HSTRING v26; // rcx
  __int64 v27; // rax
  const WCHAR *p_lpStringValue; // rbx
  const WCHAR *StringRawBuffer; // rax
  int StringOrdinal; // ebx
  int v31; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v32; // [rsp+38h] [rbp-1D0h] BYREF
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-1C8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-1C0h] BYREF
  HSTRING string; // [rsp+50h] [rbp-1B8h] BYREF
  int v36; // [rsp+58h] [rbp-1B0h]
  __int64 v37; // [rsp+60h] [rbp-1A8h] BYREF
  const WCHAR *v38; // [rsp+68h] [rbp-1A0h] BYREF
  int v39; // [rsp+70h] [rbp-198h]
  _QWORD v40[2]; // [rsp+80h] [rbp-188h] BYREF
  _BYTE v41[8]; // [rsp+90h] [rbp-178h] BYREF
  _BYTE v42[232]; // [rsp+98h] [rbp-170h] BYREF
  LPCWSTR lpStringValue; // [rsp+180h] [rbp-88h] BYREF
  struct IInspectable *v44[3]; // [rsp+188h] [rbp-80h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+1A0h] [rbp-68h] BYREF
  __int64 v46; // [rsp+1B8h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  *a4 = 0;
  v32 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  v7 = CoreQueryWindowService(
         a2,
         &GUID_c56c5799_4bb3_7fae_7fad_4db2f6a53eff,
         &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da,
         &v32);
  if ( v7 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    return (unsigned int)v7;
  }
  v33 = 0LL;
  v46 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v9 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v46,
         (__int64 *)&v33);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x419,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    return v10;
  }
  v34 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
  v11 = RoCreatePropertySetSerializer(&v34);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41D,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    return v12;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v34 + 56LL))(v34, v33, v32);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41E,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    return v14;
  }
  v37 = 0LL;
  v15 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
          &v33,
          &v37);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x421,
      (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    return v16;
  }
  v38 = 0LL;
  v39 = 0;
  v17 = v37;
  v18 = *(__int64 (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v37 + 48LL);
  lpStringValue = (LPCWSTR)&v38;
  v44[0] = 0LL;
  v46 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"RunningComponentUIApplicationList",
    0x22u,
    0x21u);
  v19 = v18(v17, v46, v44);
  v46 = 0LL;
  v20 = (WCHAR *)lpStringValue;
  RoVariant::RoVariant((RoVariant *)&string, v44[0]);
  v21 = string;
  string = 0LL;
  LODWORD(v18) = v36;
  v36 = 0;
  RoVariant::~RoVariant((RoVariant *)&string);
  v22 = *(HSTRING *)v20;
  *(_QWORD *)v20 = v21;
  string = v22;
  LODWORD(v22) = *((_DWORD *)v20 + 2);
  *((_DWORD *)v20 + 2) = (_DWORD)v18;
  v36 = (int)v22;
  RoVariant::~RoVariant((RoVariant *)&string);
  if ( v19 < 0 )
  {
    RoVariant::~RoVariant((RoVariant *)&v38);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    return (unsigned int)v19;
  }
  v23 = 0;
  v31 = 0;
  v24 = v39;
  if ( v39 < 0 )
    goto LABEL_18;
  if ( v39 )
  {
    if ( v39 == 1 || v39 == 3 )
    {
      v23 = 13;
      v31 = 13;
    }
    else
    {
      v24 = (*(__int64 (__fastcall **)(const WCHAR *, int *))(*(_QWORD *)v38 + 48LL))(v38, &v31);
      if ( v24 < 0 )
      {
LABEL_18:
        RoVariant::~RoVariant((RoVariant *)&v38);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
        return (unsigned int)v24;
      }
      v24 = v39;
      v23 = v31;
    }
  }
  if ( v23 == 12 )
  {
    string = 0LL;
    lpStringValue = v38;
    LODWORD(v44[0]) = v24;
    WindowsDeleteString(0LL);
    string = 0LL;
    v25 = RoVariant::Accessor::GetString((RoVariant::Accessor *)&lpStringValue, &string);
    if ( v25 < 0 )
    {
      WindowsDeleteString(string);
      string = 0LL;
      RoVariant::~RoVariant((RoVariant *)&v38);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
      return (unsigned int)v25;
    }
    v26 = string;
    if ( string )
    {
      std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(v40);
      v27 = std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v41, (__int64)a3);
      std::operator<<<unsigned short,std::char_traits<unsigned short>>(v27, (__int64)L";");
      std::basic_stringbuf<unsigned short>::str((__int64)v42, (__int64)&lpStringValue);
      p_lpStringValue = (const WCHAR *)&lpStringValue;
      if ( v44[2] > (struct IInspectable *)7 )
        p_lpStringValue = lpStringValue;
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      StringOrdinal = FindStringOrdinal(0x400000u, StringRawBuffer, -1, p_lpStringValue, -1, 1);
      std::wstring::_Tidy_deallocate((void **)&lpStringValue);
      if ( StringOrdinal != -1 )
        *a4 = 1;
      std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vbase destructor'((__int64)v40);
      v26 = string;
    }
    WindowsDeleteString(v26);
  }
  RoVariant::~RoVariant((RoVariant *)&v38);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  return 0LL;
}
