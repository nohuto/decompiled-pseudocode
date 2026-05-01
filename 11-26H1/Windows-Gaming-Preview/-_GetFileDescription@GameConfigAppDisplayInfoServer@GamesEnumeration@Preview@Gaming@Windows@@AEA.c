/*
 * XREFs of ?_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@PEAPEAUHSTRING__@@@Z @ 0x18001306C
 * Callers:
 *     _lambda_d5146fe69570c6dcc5cf92f3d06ab487_::operator() @ 0x180011B94 (_lambda_d5146fe69570c6dcc5cf92f3d06ab487_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000E904 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800114C4 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAU-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collecti.c)
 *     ?Make@?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@SAJPEAPEAV12345@@Z @ 0x180012558 (-Make@-$AgileVector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collecti.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription(
        __int64 a1,
        _QWORD *a2,
        HSTRING *a3)
{
  HRESULT v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  HSTRING v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  HSTRING v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  HSTRING v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // rcx
  HSTRING v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  HSTRING v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  HSTRING v27; // rcx
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v29; // rcx
  DWORD v30; // edx
  int v31; // r8d
  __int64 v32; // rcx
  HSTRING v33; // rcx
  int v34; // eax
  __int64 (__fastcall ***v35)(_QWORD, GUID *, __int64 *); // rcx
  int v36; // eax
  __int64 v37; // rcx
  __int64 (__fastcall ***v38)(_QWORD, GUID *, __int64 *); // rcx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 (__fastcall ***v42)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 (__fastcall ***v49)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v50; // rbx
  __int64 (__fastcall *v51)(__int64, HSTRING *); // rdi
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 (__fastcall ***v56)(_QWORD, GUID *, __int64 *); // rcx
  HSTRING v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 (__fastcall ***v61)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 (__fastcall ***v66)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v67)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-60h] BYREF
  __int64 v68; // [rsp+28h] [rbp-58h] BYREF
  HSTRING v69; // [rsp+30h] [rbp-50h] BYREF
  __int64 v70; // [rsp+38h] [rbp-48h] BYREF
  __int64 v71; // [rsp+40h] [rbp-40h] BYREF
  __int64 v72; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  string = 0LL;
  v5 = WindowsCreateStringReference(L"System.FileDescription", 0x16u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    JUMPOUT(0x180013974LL);
  }
  v67 = 0LL;
  v69 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(*(_QWORD *)*a2 + 96LL))(*a2, &v69);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x148,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v6);
    v8 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return v7;
  }
  v68 = 0LL;
  v9 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, __int64 *))v69)(
         v69,
         &GUID_c54361b2_54cd_432b_bdbc_4b19c4b470d7,
         &v68);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v9);
    v10 = v68;
    if ( v68 )
    {
      v68 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return v7;
  }
  v72 = 0LL;
  v12 = Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>::Make(&v72);
  v7 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14E,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v12);
    if ( v72 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
    v13 = v68;
    if ( v68 )
    {
      v68 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v14 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return v7;
  }
  v15 = v72;
  v16 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v72 + 104LL))(v72, string);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x150,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v16);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v18 = v68;
    if ( v68 )
    {
      v68 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v19 + 16LL))(v19);
    }
    return v17;
  }
  v70 = 0LL;
  v20 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v15)(
          v15,
          &GUID_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e,
          &v70);
  v17 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x153,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v20);
    v21 = v70;
    if ( v70 )
    {
      v70 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v22 = v68;
    if ( v68 )
    {
      v68 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v23 + 16LL))(v23);
    }
    return v17;
  }
  v24 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v68 + 48LL))(v68, v70, &v67);
  v17 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x159,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v24);
    v25 = v70;
    if ( v70 )
    {
      v70 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v26 = v68;
    if ( v68 )
    {
      v68 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = v69;
    if ( v69 )
    {
      v69 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v28 = v67;
    if ( v67 )
    {
      v67 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v28)[2])(v28);
    }
    return v17;
  }
  v29 = v70;
  if ( v70 )
  {
    v70 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v32 = v68;
  if ( v68 )
  {
    v68 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = v69;
  if ( v69 )
  {
    v69 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *> *>(
          v67,
          v30,
          v31);
  v7 = v34;
  if ( v34 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v34);
    v35 = v67;
    if ( v67 )
    {
      v67 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v35)[2])(v35);
    }
    return v7;
  }
  v71 = 0LL;
  v36 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v67)[8])(v67, &v71);
  v7 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x164,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v36);
    v37 = v71;
    if ( v71 )
    {
      v71 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v38 = v67;
    if ( v67 )
    {
      v67 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v38)[2])(v38);
    }
    return v7;
  }
  v68 = 0LL;
  v39 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v71 + 48LL))(v71, string, &v68);
  v7 = v39;
  if ( v39 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x168,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v39);
    v40 = v68;
    if ( v68 )
    {
      v68 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    }
    v41 = v71;
    if ( v71 )
    {
      v71 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    }
    v42 = v67;
    if ( v67 )
    {
      v67 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v42)[2])(v42);
    }
    return v7;
  }
  if ( !v68 )
  {
    v7 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16C,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)0x80004005LL);
    v43 = v68;
    if ( v68 )
    {
      v68 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    }
    v44 = v71;
    if ( v71 )
    {
      v71 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    }
LABEL_113:
    v66 = v67;
    if ( v67 )
    {
      v67 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v66)[2])(v66);
    }
    return v7;
  }
  v70 = 0LL;
  v45 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v68)(
          v68,
          &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
          &v70);
  v7 = v45;
  if ( v45 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x170,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v45);
    v46 = v70;
    if ( v70 )
    {
      v70 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    }
    v47 = v68;
    if ( v68 )
    {
      v68 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    }
    v48 = v71;
    if ( v71 )
    {
      v71 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    }
    v49 = v67;
    if ( v67 )
    {
      v67 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v49)[2])(v49);
    }
    return v7;
  }
  v69 = 0LL;
  v50 = v70;
  v51 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v70 + 152LL);
  WindowsDeleteString(0LL);
  v69 = 0LL;
  v52 = v51(v50, &v69);
  v7 = v52;
  if ( v52 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x173,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v52);
    WindowsDeleteString(v69);
    v69 = 0LL;
    v53 = v70;
    if ( v70 )
    {
      v70 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    }
    v54 = v68;
    if ( v68 )
    {
      v68 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    }
    v55 = v71;
    if ( v71 )
    {
      v71 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    }
    v56 = v67;
    if ( v67 )
    {
      v67 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v56)[2])(v56);
    }
    return v7;
  }
  if ( !v69 || WindowsIsStringEmpty(v69) )
  {
    v7 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x175,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)0x80004005LL);
    WindowsDeleteString(v69);
    v69 = 0LL;
    v63 = v70;
    if ( v70 )
    {
      v70 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
    }
    v64 = v68;
    if ( v68 )
    {
      v68 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
    }
    v65 = v71;
    if ( v71 )
    {
      v71 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
    }
    goto LABEL_113;
  }
  v57 = v69;
  v69 = 0LL;
  *a3 = v57;
  WindowsDeleteString(0LL);
  v69 = 0LL;
  v58 = v70;
  if ( v70 )
  {
    v70 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  }
  v59 = v68;
  if ( v68 )
  {
    v68 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
  }
  v60 = v71;
  if ( v71 )
  {
    v71 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
  }
  v61 = v67;
  if ( v67 )
  {
    v67 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v61)[2])(v61);
  }
  return 0LL;
}
