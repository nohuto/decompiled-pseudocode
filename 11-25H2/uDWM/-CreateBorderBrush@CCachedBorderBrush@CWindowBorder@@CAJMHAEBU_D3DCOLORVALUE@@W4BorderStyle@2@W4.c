/*
 * XREFs of ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18003BB18
 * Callers:
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18003E3B0 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetShadowParameters@CWindowBorder@@CAXW4ShadowStyle@1@HPEAM111@Z @ 0x18003A9D0 (-GetShadowParameters@CWindowBorder@@CAXW4ShadowStyle@1@HPEAM111@Z.c)
 *     ?CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x18003AABC (-CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@.c)
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18003BAB0 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18003D79C (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003D7C8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A0908 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CWindowBorder::CCachedBorderBrush::CreateBorderBrush(
        float a1,
        int a2,
        _OWORD *a3,
        int a4,
        int a5,
        _QWORD *a6)
{
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64); // rdi
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64); // rbx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 (__fastcall *v14)(_QWORD, GUID *, __int64); // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v19; // eax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 (__fastcall ***v25)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v26)(_QWORD, GUID *, __int64 *); // rdi
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  float v33; // xmm7_4
  float v34; // xmm9_4
  int v35; // eax
  __int64 (__fastcall ***v36)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v37)(_QWORD, GUID *, __int64 *); // rdi
  int v38; // eax
  const struct std::nothrow_t *v39; // rdx
  char *v40; // rax
  std::_Ref_count_base *v41; // rbx
  __int64 v42; // rcx
  std::_Ref_count_base *v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 (__fastcall ***v46)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v47)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 (__fastcall ***v53)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v54)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 (__fastcall ***v58)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v59)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 (__fastcall ***v64)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v65)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 (__fastcall ***v68)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v69)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 (__fastcall ***v72)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v73)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 (__fastcall ***v78)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v79)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 (__fastcall ***v83)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v84)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rcx
  int v88; // [rsp+28h] [rbp-79h]
  int v89; // [rsp+28h] [rbp-79h]
  int v90; // [rsp+28h] [rbp-79h]
  __int64 (__fastcall ***v91)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-69h] BYREF
  __int64 (__fastcall ***v92)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-61h] BYREF
  __int64 v93; // [rsp+48h] [rbp-59h] BYREF
  __int64 v94; // [rsp+50h] [rbp-51h] BYREF
  __int64 v95; // [rsp+58h] [rbp-49h] BYREF
  __int64 v96; // [rsp+60h] [rbp-41h] BYREF
  float v97; // [rsp+68h] [rbp-39h] BYREF
  int v98; // [rsp+6Ch] [rbp-35h] BYREF
  __int64 v99; // [rsp+70h] [rbp-31h] BYREF
  std::_Ref_count_base *v100; // [rsp+78h] [rbp-29h]
  int v101; // [rsp+80h] [rbp-21h] BYREF
  _DWORD v102[17]; // [rsp+84h] [rbp-1Dh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+4Fh]

  v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                           + 32LL);
  v94 = 0LL;
  v93 = 0LL;
  v10 = **v9;
  v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>(&v94);
  v12 = v10(v9, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8, v11);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x222,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v12,
      v88);
    v87 = v94;
    if ( v94 )
    {
      v94 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 16LL))(v87);
    }
    return v13;
  }
  v14 = **v9;
  v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>(&v93);
  v16 = v14(v9, &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0, v15);
  v13 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x223,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v16,
      v88);
    v76 = v93;
    if ( v93 )
    {
      v93 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
    }
    v77 = v94;
    if ( v94 )
    {
      v94 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
    }
    return v13;
  }
  v92 = 0LL;
  v17 = v93;
  v18 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v93 + 112LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v92);
  v19 = v18(v17, &v92);
  v13 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x227,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v19,
      v88);
LABEL_122:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v92);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v93);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v94);
    return v13;
  }
  v91 = 0LL;
  v20 = v94;
  v21 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v94 + 184LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v91);
  v22 = v21(v20, &v91);
  v13 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v22,
      v88);
    v72 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v91;
    if ( v91 )
    {
      v91 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v72)[2])(v72);
    }
    v73 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v92;
    if ( v92 )
    {
      v92 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v73)[2])(v73);
    }
    v74 = v93;
    if ( v93 )
    {
      v93 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
    }
    v75 = v94;
    if ( v94 )
    {
      v94 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
    }
    return v13;
  }
  v23 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v91)[11])(v91, 1LL);
  v13 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22B,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v23,
      v88);
    v78 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v91;
    if ( v91 )
    {
      v91 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v78)[2])(v78);
    }
    v79 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v92;
    if ( v92 )
    {
      v92 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v79)[2])(v79);
    }
    v80 = v93;
    if ( v93 )
    {
      v93 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
    }
    v81 = v94;
    if ( v94 )
    {
      v94 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
    }
    return v13;
  }
  v24 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v91)[7])(v91, 0LL);
  v13 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v24,
      v88);
    v68 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v91;
    if ( v91 )
    {
      v91 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v68)[2])(v68);
    }
    v69 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v92;
    if ( v92 )
    {
      v92 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v69)[2])(v69);
    }
    v70 = v93;
    if ( v93 )
    {
      v93 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
    }
    v71 = v94;
    if ( v94 )
    {
      v94 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
    }
    return v13;
  }
  v95 = 0LL;
  v25 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v91;
  v26 = **v91;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v95);
  v27 = v26(v25, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, &v95);
  v13 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x230,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v27,
      v88);
    v82 = v95;
    if ( v95 )
    {
      v95 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
    }
    v83 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v91;
    if ( v91 )
    {
      v91 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v83)[2])(v83);
    }
    v84 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v92;
    if ( v92 )
    {
      v92 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v84)[2])(v84);
    }
    v85 = v93;
    if ( v93 )
    {
      v93 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v85 + 16LL))(v85);
    }
    v86 = v94;
    if ( v94 )
    {
      v94 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 16LL))(v86);
    }
    return v13;
  }
  v28 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v92)[21])(v92, v95);
  v13 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x231,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v28,
      v88);
    v57 = v95;
    if ( v95 )
    {
      v95 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    }
    v58 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v91;
    if ( v91 )
    {
      v91 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v58)[2])(v58);
    }
    v59 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v92;
    if ( v92 )
    {
      v92 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v59)[2])(v59);
    }
    v60 = v93;
    if ( v93 )
    {
      v93 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
    }
    v61 = v94;
    if ( v94 )
    {
      v94 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
    }
    return v13;
  }
  LOBYTE(v29) = 1;
  v30 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v92)[11])(v92, v29);
  v13 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x232,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v30,
      v88);
LABEL_121:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v95);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v91);
    goto LABEL_122;
  }
  v96 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v96);
  v31 = CWindowBorder::CCachedBorderBrush::CreateBorderSurface(a1, a2, (__int64)a3, a4, a5, &v96);
  if ( v31 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x23E,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v31,
      v89);
  v32 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v91)[13])(v91, v96);
  v13 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x241,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v32,
      v89);
    v62 = v96;
    if ( v96 )
    {
      v96 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
    }
    v63 = v95;
    if ( v95 )
    {
      v95 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
    }
    v64 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v91;
    if ( v91 )
    {
      v91 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v64)[2])(v64);
    }
    v65 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v92;
    if ( v92 )
    {
      v92 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v65)[2])(v65);
    }
    v66 = v93;
    if ( v93 )
    {
      v93 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
    }
    v67 = v94;
    if ( v94 )
    {
      v94 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
    }
    return v13;
  }
  v97 = 0.0;
  v98 = 0;
  CWindowBorder::GetShadowParameters(a5, a2, &v97, (float *)&v98, v102, &v101);
  v33 = v97;
  v34 = v97 * 0.5;
  *(float *)&v90 = (float)(v97 * 0.5)
                 + (float)((float)(v97 * 0.5)
                         + (float)((float)((float)(v97 * 0.5) + (float)((float)((float)a2 / 96.0) * a1)) + 2.0));
  v35 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v92)[27])(v92);
  v13 = v35;
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x255,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v35,
      v90);
    v51 = v96;
    if ( v96 )
    {
      v96 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    }
    v52 = v95;
    if ( v95 )
    {
      v95 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
    }
    v53 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v91;
    if ( v91 )
    {
      v91 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v53)[2])(v53);
    }
    v54 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v92;
    if ( v92 )
    {
      v92 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v54)[2])(v54);
    }
    v55 = v93;
    if ( v93 )
    {
      v93 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    }
    v56 = v94;
    if ( v94 )
    {
      v94 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    }
    return v13;
  }
  v36 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v92;
  v37 = **v92;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v95);
  v38 = v37(v36, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, &v95);
  v13 = v38;
  if ( v38 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x258,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v38,
      v90);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v96);
    goto LABEL_121;
  }
  v40 = (char *)operator new[](0x48uLL, v39);
  v41 = (std::_Ref_count_base *)v40;
  if ( v40 )
  {
    *((_DWORD *)v40 + 2) = 1;
    *((_DWORD *)v40 + 3) = 1;
    *(_QWORD *)v40 = &std::_Ref_count_obj2<CWindowBorder::CCachedBorderBrush>::`vftable';
    *((float *)v40 + 4) = a1;
    *((_DWORD *)v40 + 5) = a2;
    *((_DWORD *)v40 + 6) = a5;
    *(_OWORD *)(v40 + 28) = *a3;
    *((_DWORD *)v40 + 11) = a4;
    *((float *)v40 + 12) = v33;
    *((float *)v40 + 13) = v34;
    *((float *)v40 + 14) = v33 * 2.0;
    v42 = v95;
    *((_QWORD *)v40 + 8) = v95;
    if ( v42 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42);
  }
  else
  {
    v41 = 0LL;
  }
  v99 = (__int64)v41 + 16;
  v100 = v41;
  std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=(a6, &v99);
  if ( v100 && _InterlockedExchangeAdd((volatile signed __int32 *)v100 + 2, 0xFFFFFFFF) == 1 )
  {
    v43 = v100;
    (**(void (__fastcall ***)(std::_Ref_count_base *))v100)(v100);
    std::_Ref_count_base::_Decwref(v43);
  }
  v44 = v96;
  if ( v96 )
  {
    v96 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
  v45 = v95;
  if ( v95 )
  {
    v95 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  }
  v46 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v91;
  if ( v91 )
  {
    v91 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v46)[2])(v46);
  }
  v47 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v92;
  if ( v92 )
  {
    v92 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v47)[2])(v47);
  }
  v48 = v93;
  if ( v93 )
  {
    v93 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  }
  v49 = v94;
  if ( v94 )
  {
    v94 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  }
  return 0LL;
}
