/*
 * XREFs of ?_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180031238
 * Callers:
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180031094 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     atexit @ 0x1800021D0 (atexit.c)
 *     _Init_thread_footer @ 0x1800024D0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180002538 (_Init_thread_header.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18000BD84 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000E904 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  __int64 (__fastcall *v5)(__int64, HSTRING *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  HRESULT v10; // eax
  HSTRING v11; // rbx
  __int64 v12; // rcx
  int ActivationFactory; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  HRESULT v31; // eax
  HSTRING v32; // rbx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  HRESULT v49; // eax
  HSTRING v50; // rbx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rbx
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rcx
  unsigned int v81; // r8d
  unsigned int v82; // r8d
  __int64 v83; // [rsp+40h] [rbp-39h] BYREF
  __int64 v84; // [rsp+48h] [rbp-31h] BYREF
  HSTRING string; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v86[8]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v87; // [rsp+60h] [rbp-19h] BYREF
  __int64 v88; // [rsp+68h] [rbp-11h] BYREF
  __int64 v89; // [rsp+70h] [rbp-9h] BYREF
  __int64 v90; // [rsp+78h] [rbp-1h] BYREF
  __int64 v91; // [rsp+80h] [rbp+7h] BYREF
  __int64 v92; // [rsp+88h] [rbp+Fh] BYREF
  int v93; // [rsp+90h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp+1Fh] BYREF
  HSTRING v95; // [rsp+B0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = 0LL;
  v83 = 0LL;
  v3 = *((_QWORD *)this + 32);
  if ( !v3 )
    goto LABEL_140;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 64LL))(v3, &v83);
  v2 = v83;
  if ( v4 < 0 || !v83 )
    goto LABEL_140;
  string = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v83 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = v5(v2, &string);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x127,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v6);
    WindowsDeleteString(string);
    string = 0LL;
    v8 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return v7;
  }
  v84 = 0LL;
  v95 = 0LL;
  v10 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Application", 0x2Cu, &hstringHeader, &v95);
  if ( v10 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
LABEL_153:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v31);
    goto LABEL_154;
  }
  v11 = v95;
  v12 = v84;
  if ( v84 )
  {
    v84 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  ActivationFactory = RoGetActivationFactory(v11, &GUID_07adcc9a_e505_48c2_b471_45af8561f6af, &v84);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x130,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)ActivationFactory);
    v14 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    WindowsDeleteString(string);
    string = 0LL;
    v15 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return v7;
  }
  v87 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v84 + 264LL))(v84, string, &v87);
  v7 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x135,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v16);
    v17 = v87;
    if ( v87 )
    {
      v87 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    WindowsDeleteString(string);
    string = 0LL;
    v19 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    return v7;
  }
  v93 = 0;
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v87 + 56LL))(v87, &v93) < 0 || !v93 )
  {
    v7 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x138,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x8000FFFFLL);
    v78 = v87;
    if ( v87 )
    {
      v87 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
    }
    v79 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 16LL))(v79);
    }
    WindowsDeleteString(string);
    string = 0LL;
    v80 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
    }
    return v7;
  }
  v88 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v87 + 48LL))(v87, 0LL, &v88);
  v7 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v20);
    v21 = v88;
    if ( v88 )
    {
      v88 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = v87;
    if ( v87 )
    {
      v87 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    WindowsDeleteString(string);
    string = 0LL;
    v24 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    return v7;
  }
  v90 = 0LL;
  v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v88 + 72LL))(v88, &v90);
  v7 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x140,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v25);
    v26 = v90;
    if ( v90 )
    {
      v90 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = v88;
    if ( v88 )
    {
      v88 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v28 = v87;
    if ( v87 )
    {
      v87 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v29 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    WindowsDeleteString(string);
    string = 0LL;
    v30 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    return v7;
  }
  v89 = 0LL;
  v95 = 0LL;
  v31 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.User", 0x25u, &hstringHeader, &v95);
  if ( v31 < 0 )
    goto LABEL_153;
  v32 = v95;
  v33 = v89;
  if ( v89 )
  {
    v89 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = RoGetActivationFactory(v32, &GUID_84103ccb_2fd7_4d6c_962e_5d8582b4c720, &v89);
  v7 = v34;
  if ( v34 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x149,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v34);
    v35 = v89;
    if ( v89 )
    {
      v89 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    v36 = v90;
    if ( v90 )
    {
      v90 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    v37 = v88;
    if ( v88 )
    {
      v88 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v38 = v87;
    if ( v87 )
    {
      v87 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
    v39 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
    }
    WindowsDeleteString(string);
    string = 0LL;
    v40 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    }
    return v7;
  }
  v92 = 0LL;
  v41 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v89 + 112LL))(v89, &v92);
  v7 = v41;
  if ( v41 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14C,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v41);
    v42 = v92;
    if ( v92 )
    {
      v92 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    }
    v43 = v89;
    if ( v89 )
    {
      v89 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    v44 = v90;
    if ( v90 )
    {
      v90 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    }
    v45 = v88;
    if ( v88 )
    {
      v88 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    }
    v46 = v87;
    if ( v87 )
    {
      v87 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    }
    v47 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    }
    WindowsDeleteString(string);
    string = 0LL;
    v48 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    }
    return v7;
  }
  v91 = 0LL;
  v95 = 0LL;
  v49 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackagePolicy", 0x2Eu, &hstringHeader, &v95);
  if ( v49 < 0 )
  {
LABEL_154:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v49);
    __debugbreak();
  }
  v50 = v95;
  v51 = v91;
  if ( v91 )
  {
    v91 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  }
  v52 = RoGetActivationFactory(v50, &GUID_93b105c2_0759_4c56_b8da_6e8f72ac464e, &v91);
  v7 = v52;
  if ( v52 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x151,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v52);
    v53 = v91;
    if ( v91 )
    {
      v91 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    }
    v54 = v92;
    if ( v92 )
    {
      v92 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    }
    v55 = v89;
    if ( v89 )
    {
      v89 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    }
    v56 = v90;
    if ( v90 )
    {
      v90 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    }
    v57 = v88;
    if ( v88 )
    {
      v88 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    }
    v58 = v87;
    if ( v87 )
    {
      v87 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    }
    v59 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    }
    WindowsDeleteString(string);
    string = 0LL;
    v60 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
    }
    return v7;
  }
  v61 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_18005A018 > *(_DWORD *)(v61 + 8) )
  {
    Init_thread_header(&dword_18005A018);
    if ( dword_18005A018 == -1 )
    {
      Microsoft::WRL::Wrappers::HStringReference::HStringReference(&stru_18005A020, (const WCHAR **)&off_18004A5A0, v82);
      atexit(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository_::_5_::_dynamic_atexit_destructor_for__appCategoryString__);
      Init_thread_footer(&dword_18005A018);
    }
  }
  if ( dword_18005A040 > *(_DWORD *)(v61 + 8) )
  {
    Init_thread_header(&dword_18005A040);
    if ( dword_18005A040 == -1 )
    {
      Microsoft::WRL::Wrappers::HStringReference::HStringReference(&stru_18005A048, (const WCHAR **)off_18004A598, v81);
      atexit(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository_::_5_::_dynamic_atexit_destructor_for__gameString__);
      Init_thread_footer(&dword_18005A040);
    }
  }
  v86[0] = 0;
  v62 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _BYTE *))(*(_QWORD *)v91 + 256LL))(
          v91,
          v92,
          v90,
          qword_18005A038,
          *(_QWORD *)&qword_18005A060,
          v86);
  v7 = v62;
  if ( v62 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v62);
    v63 = v91;
    if ( v91 )
    {
      v91 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
    }
    v64 = v92;
    if ( v92 )
    {
      v92 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
    }
    v65 = v89;
    if ( v89 )
    {
      v89 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
    }
    v66 = v90;
    if ( v90 )
    {
      v90 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
    }
    v67 = v88;
    if ( v88 )
    {
      v88 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
    }
    v68 = v87;
    if ( v87 )
    {
      v87 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
    }
    v69 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
    }
    WindowsDeleteString(string);
    string = 0LL;
    v70 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
    }
    return v7;
  }
  if ( v86[0] )
    *((_DWORD *)this + 36) = 1;
  v71 = v91;
  if ( v91 )
  {
    v91 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
  }
  v72 = v92;
  if ( v92 )
  {
    v92 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
  }
  v73 = v89;
  if ( v89 )
  {
    v89 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
  }
  v74 = v90;
  if ( v90 )
  {
    v90 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
  }
  v75 = v88;
  if ( v88 )
  {
    v88 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
  }
  v76 = v87;
  if ( v87 )
  {
    v87 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
  }
  v77 = v84;
  if ( v84 )
  {
    v84 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
  }
  WindowsDeleteString(string);
  v2 = v83;
LABEL_140:
  if ( v2 )
  {
    v83 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return 0LL;
}
