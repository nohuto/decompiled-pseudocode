/*
 * XREFs of ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x18003C544
 * Callers:
 *     ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x18003A7B4 (-EnableBorder@CWindowBorder@@QEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x1800078BC (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18000A81C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z @ 0x18000A8F4 (-SetClipRectangle@CWindowBorder@@AEAAXPEAVCRectangleGeometryProxy@@AEBUtagRECT@@@Z.c)
 *     ?SetSize@CVisualProxy@@QEAAJNN@Z @ 0x18000BFD0 (-SetSize@CVisualProxy@@QEAAJNN@Z.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x180011894 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003D7C8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIExpCompositionProjectedShadow@Composition@UI@Windows@@@WRL@Mi.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x18003D7E8 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003E0FC (-CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z @ 0x18003E108 (-CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18003E74C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180071818 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x180074D04 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=23
__int64 __fastcall CWindowBorder::CreateBorderStructure(CWindowBorder *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  LONG v4; // ecx
  int v5; // eax
  double v6; // xmm2_8
  int v7; // eax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64); // r14
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64); // rbx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, HANDLE, GUID *, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rdi
  __int64 (__fastcall *v14)(_QWORD, GUID *, __int64); // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, struct Windows::UI::Composition::ISpriteVisual **); // rdi
  int v19; // eax
  struct Windows::UI::Composition::ISpriteVisual *v20; // rbx
  __int64 (__fastcall *v21)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *); // rdi
  int v22; // eax
  int v23; // eax
  struct Windows::UI::Composition::ISpriteVisual *v24; // rbx
  __int64 (__fastcall *v25)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *); // rdi
  int v26; // eax
  int v27; // eax
  struct Windows::UI::Composition::ISpriteVisual *v28; // rbx
  __int64 (__fastcall *v29)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *); // rdi
  int v30; // eax
  __int64 (__fastcall ***v31)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v32)(_QWORD, GUID *, __int64 *); // rdi
  int v33; // eax
  int v34; // eax
  CCompositor *v35; // rbx
  int v36; // eax
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  int v40; // eax
  int inserted; // eax
  CBaseObject *v42; // rax
  CBaseObject *v43; // rcx
  __int64 (__fastcall ***v44)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v45; // rcx
  struct Windows::UI::Composition::ISpriteVisual *v46; // rax
  __int64 v47; // rcx
  CBaseObject *v48; // rax
  CBaseObject *v49; // rcx
  CBaseObject *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  struct Windows::UI::Composition::ISpriteVisual *v57; // rcx
  __int64 (__fastcall ***v58)(_QWORD, _QWORD, _QWORD); // rcx
  CBaseObject *v59; // rcx
  CBaseObject *v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  struct Windows::UI::Composition::ISpriteVisual *v68; // rcx
  __int64 (__fastcall ***v69)(_QWORD, _QWORD, _QWORD); // rcx
  CBaseObject *v70; // rcx
  CBaseObject *v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  struct Windows::UI::Composition::ISpriteVisual *v78; // rcx
  __int64 (__fastcall ***v79)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // rcx
  struct Windows::UI::Composition::ISpriteVisual *v84; // rcx
  __int64 (__fastcall ***v85)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rcx
  struct Windows::UI::Composition::ISpriteVisual *v92; // rcx
  __int64 (__fastcall ***v93)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // rcx
  struct Windows::UI::Composition::ISpriteVisual *v99; // rcx
  __int64 (__fastcall ***v100)(_QWORD, _QWORD, _QWORD); // rcx
  CBaseObject *v101; // rcx
  __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 v104; // rcx
  __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // rcx
  struct Windows::UI::Composition::ISpriteVisual *v108; // rcx
  __int64 (__fastcall ***v109)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v110; // rcx
  __int64 v111; // rcx
  __int64 v112; // rcx
  struct Windows::UI::Composition::ISpriteVisual *v113; // rcx
  __int64 (__fastcall ***v114)(_QWORD, _QWORD, _QWORD); // rcx
  CBaseObject *v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // rcx
  __int64 v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // rcx
  struct Windows::UI::Composition::ISpriteVisual *v122; // rcx
  __int64 (__fastcall ***v123)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v124; // rcx
  __int64 v125; // rcx
  __int64 v126; // rcx
  struct Windows::UI::Composition::ISpriteVisual *v127; // rcx
  __int64 (__fastcall ***v128)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v129; // rcx
  __int64 v130; // rcx
  struct Windows::UI::Composition::ISpriteVisual *v131; // rcx
  __int64 (__fastcall ***v132)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v133; // rdx
  __int64 v134; // rdx
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rcx
  __int64 v138; // rax
  int v139; // [rsp+20h] [rbp-49h]
  __int64 v140; // [rsp+30h] [rbp-39h] BYREF
  __int64 (__fastcall ***v141)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-31h] BYREF
  __int64 v142; // [rsp+40h] [rbp-29h] BYREF
  CBaseObject *v143; // [rsp+48h] [rbp-21h] BYREF
  __int64 v144; // [rsp+50h] [rbp-19h] BYREF
  __int64 v145; // [rsp+58h] [rbp-11h] BYREF
  __int64 v146; // [rsp+60h] [rbp-9h] BYREF
  HANDLE hObject; // [rsp+68h] [rbp-1h] BYREF
  struct tagPOINT v148; // [rsp+70h] [rbp+7h] BYREF
  CBaseObject **v149; // [rsp+78h] [rbp+Fh]
  CWindowBorder *v150; // [rsp+80h] [rbp+17h]
  char v151; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  struct Windows::UI::Composition::ISpriteVisual *v153; // [rsp+D8h] [rbp+6Fh] BYREF
  CBaseObject *v154; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v155; // [rsp+E8h] [rbp+7Fh] BYREF

  v154 = 0LL;
  v141 = 0LL;
  v153 = 0LL;
  hObject = 0LL;
  v2 = DCompositionCreateSharedVisualHandle(&hObject);
  v3 = v2;
  if ( v2 < 0 )
  {
    v133 = 95LL;
LABEL_234:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v133,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v2,
      v139);
LABEL_253:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v153);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v141);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v154);
    return v3;
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v154);
  v2 = CVisual::CreateFromSharedHandle(hObject, &v154);
  v3 = v2;
  if ( v2 < 0 )
  {
    v133 = 98LL;
    goto LABEL_234;
  }
  *((_BYTE *)v154 + 36) |= 8u;
  v4 = *((_DWORD *)this + 65);
  v148.x = *((_DWORD *)this + 64);
  v148.y = v4;
  CVisual::SetOffset((struct tagPOINT *)v154, &v148);
  v5 = 0;
  if ( *((_DWORD *)this + 67) - *((_DWORD *)this + 65) >= 0 )
    v5 = *((_DWORD *)this + 67) - *((_DWORD *)this + 65);
  v6 = (double)v5;
  v7 = 0;
  if ( *((_DWORD *)this + 66) - *((_DWORD *)this + 64) >= 0 )
    v7 = *((_DWORD *)this + 66) - *((_DWORD *)this + 64);
  CVisualProxy::SetSize(*((CVisualProxy **)v154 + 2), (double)v7, v6);
  v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                           + 32LL);
  v155 = 0LL;
  v9 = **v8;
  v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>(&v155);
  v11 = v9(v8, &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0, v10);
  v3 = v11;
  if ( v11 < 0 )
  {
    v134 = 108LL;
LABEL_237:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v134,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v11,
      v139);
LABEL_252:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v155);
    goto LABEL_253;
  }
  v12 = v155;
  v13 = *(__int64 (__fastcall **)(__int64, HANDLE, GUID *, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v155 + 232LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v141);
  v11 = v13(
          v12,
          hObject,
          &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89,
          (__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v141);
  v3 = v11;
  if ( v11 < 0 )
  {
    v134 = 109LL;
    goto LABEL_237;
  }
  v140 = 0LL;
  v14 = **v8;
  v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::UI::Composition::IExpCompositionProjectedShadow>>(&v140);
  v16 = v14(v8, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8, v15);
  v3 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v16,
      v139);
LABEL_251:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v140);
    goto LABEL_252;
  }
  v17 = v140;
  v18 = *(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ISpriteVisual **))(*(_QWORD *)v140 + 176LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v153);
  v19 = v18(v17, &v153);
  v3 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v19,
      v139);
    v129 = v140;
    if ( v140 )
    {
      v140 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v129 + 16LL))(v129);
    }
    v130 = v155;
    if ( v155 )
    {
      v155 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v130 + 16LL))(v130);
    }
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v131 = v153;
    if ( v153 )
    {
      v153 = 0LL;
      (*(void (__fastcall **)(struct Windows::UI::Composition::ISpriteVisual *))(*(_QWORD *)v131 + 16LL))(v131);
    }
    v132 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v141;
    if ( v141 )
    {
      v141 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v132)[2])(v132);
    }
    goto LABEL_77;
  }
  v142 = 0LL;
  v20 = v153;
  v21 = **(__int64 (__fastcall ***)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *))v153;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v142);
  v22 = v21(v20, &GUID_3052b611_56c3_4c3e_8bf3_f6e1ad473f06, &v142);
  v3 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v22,
      v139);
    v110 = v142;
    if ( v142 )
    {
      v142 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v110 + 16LL))(v110);
    }
    v111 = v140;
    if ( v140 )
    {
      v140 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v111 + 16LL))(v111);
    }
    v112 = v155;
    if ( v155 )
    {
      v155 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v112 + 16LL))(v112);
    }
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v113 = v153;
    if ( v153 )
    {
      v153 = 0LL;
      (*(void (__fastcall **)(struct Windows::UI::Composition::ISpriteVisual *))(*(_QWORD *)v113 + 16LL))(v113);
    }
    v114 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v141;
    if ( v141 )
    {
      v141 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v114)[2])(v114);
    }
    goto LABEL_77;
  }
  v23 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v142 + 88LL))(
          v142,
          _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0]);
  v3 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v23,
      v139);
    v124 = v142;
    if ( v142 )
    {
      v142 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v124 + 16LL))(v124);
    }
    v125 = v140;
    if ( v140 )
    {
      v140 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v125 + 16LL))(v125);
    }
    v126 = v155;
    if ( v155 )
    {
      v155 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v126 + 16LL))(v126);
    }
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v127 = v153;
    if ( v153 )
    {
      v153 = 0LL;
      (*(void (__fastcall **)(struct Windows::UI::Composition::ISpriteVisual *))(*(_QWORD *)v127 + 16LL))(v127);
    }
    v128 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v141;
    if ( v141 )
    {
      v141 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v128)[2])(v128);
    }
    goto LABEL_77;
  }
  v144 = 0LL;
  v24 = v153;
  v25 = **(__int64 (__fastcall ***)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *))v153;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v144);
  v26 = v25(v24, &GUID_30be580d_f4b6_4ab7_80dd_3738cbac9f2c, &v144);
  v3 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v26,
      v139);
    v80 = v144;
    if ( v144 )
    {
      v144 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
    }
    v81 = v142;
    if ( v142 )
    {
      v142 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
    }
    v82 = v140;
    if ( v140 )
    {
      v140 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
    }
    v83 = v155;
    if ( v155 )
    {
      v155 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v83 + 16LL))(v83);
    }
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v84 = v153;
    if ( v153 )
    {
      v153 = 0LL;
      (*(void (__fastcall **)(struct Windows::UI::Composition::ISpriteVisual *))(*(_QWORD *)v84 + 16LL))(v84);
    }
    v85 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v141;
    if ( v141 )
    {
      v141 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v85)[2])(v85);
    }
    goto LABEL_77;
  }
  v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v144 + 56LL))(v144, 0LL);
  v3 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v27,
      v139);
LABEL_250:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v144);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v142);
    goto LABEL_251;
  }
  v145 = 0LL;
  v28 = v153;
  v29 = **(__int64 (__fastcall ***)(struct Windows::UI::Composition::ISpriteVisual *, GUID *, __int64 *))v153;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v145);
  v30 = v29(v28, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, &v145);
  v3 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v30,
      v139);
    v94 = v145;
    if ( v145 )
    {
      v145 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v94 + 16LL))(v94);
    }
    v95 = v144;
    if ( v144 )
    {
      v144 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v95 + 16LL))(v95);
    }
    v96 = v142;
    if ( v142 )
    {
      v142 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v96 + 16LL))(v96);
    }
    v97 = v140;
    if ( v140 )
    {
      v140 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v97 + 16LL))(v97);
    }
    v98 = v155;
    if ( v155 )
    {
      v155 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v98 + 16LL))(v98);
    }
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v99 = v153;
    if ( v153 )
    {
      v153 = 0LL;
      (*(void (__fastcall **)(struct Windows::UI::Composition::ISpriteVisual *))(*(_QWORD *)v99 + 16LL))(v99);
    }
    v100 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v141;
    if ( v141 )
    {
      v141 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v100)[2])(v100);
    }
    goto LABEL_77;
  }
  v146 = 0LL;
  v31 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v141;
  v32 = **v141;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v146);
  v33 = v32(v31, &GUID_a1bea8ba_d726_4663_8129_6b5e7927ffa6, &v146);
  v3 = v33;
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v33,
      v139);
LABEL_249:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v146);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v145);
    goto LABEL_250;
  }
  v34 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v146 + 56LL))(v146, v145);
  v3 = v34;
  if ( v34 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v34,
      v139);
    v86 = v146;
    if ( v146 )
    {
      v146 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 16LL))(v86);
    }
    v87 = v145;
    if ( v145 )
    {
      v145 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v87 + 16LL))(v87);
    }
    v88 = v144;
    if ( v144 )
    {
      v144 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v88 + 16LL))(v88);
    }
    v89 = v142;
    if ( v142 )
    {
      v142 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 16LL))(v89);
    }
    v90 = v140;
    if ( v140 )
    {
      v140 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v90 + 16LL))(v90);
    }
    v91 = v155;
    if ( v155 )
    {
      v155 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v91 + 16LL))(v91);
    }
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v92 = v153;
    if ( v153 )
    {
      v153 = 0LL;
      (*(void (__fastcall **)(struct Windows::UI::Composition::ISpriteVisual *))(*(_QWORD *)v92 + 16LL))(v92);
    }
    v93 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v141;
    if ( v141 )
    {
      v141 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v93)[2])(v93);
    }
    goto LABEL_77;
  }
  v143 = 0LL;
  v35 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v143);
  v36 = CCompositor::CreateRectangleGeometryProxy(v35, &v143);
  v3 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v36,
      v139);
    v115 = v143;
    if ( v143 )
    {
      v143 = 0LL;
      CBaseObject::Release(v115);
    }
    v116 = v146;
    if ( v146 )
    {
      v146 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v116 + 16LL))(v116);
    }
    v117 = v145;
    if ( v145 )
    {
      v145 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v117 + 16LL))(v117);
    }
    v118 = v144;
    if ( v144 )
    {
      v144 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v118 + 16LL))(v118);
    }
    v119 = v142;
    if ( v142 )
    {
      v142 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v119 + 16LL))(v119);
    }
    v120 = v140;
    if ( v140 )
    {
      v140 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v120 + 16LL))(v120);
    }
    v121 = v155;
    if ( v155 )
    {
      v155 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v121 + 16LL))(v121);
    }
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v122 = v153;
    if ( v153 )
    {
      v153 = 0LL;
      (*(void (__fastcall **)(struct Windows::UI::Composition::ISpriteVisual *))(*(_QWORD *)v122 + 16LL))(v122);
    }
    v123 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v141;
    if ( v141 )
    {
      v141 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v123)[2])(v123);
    }
    goto LABEL_77;
  }
  CWindowBorder::SetClipRectangle(this, v143, (const struct tagRECT *)this + 16);
  v37 = CWindowBorder::CreateAndAttachBorderBrush(this, v153);
  v3 = v37;
  if ( v37 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v37,
      v139);
    v71 = v143;
    if ( v143 )
    {
      v143 = 0LL;
      CBaseObject::Release(v71);
    }
    v72 = v146;
    if ( v146 )
    {
      v146 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
    }
    v73 = v145;
    if ( v145 )
    {
      v145 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
    }
    v74 = v144;
    if ( v144 )
    {
      v144 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
    }
    v75 = v142;
    if ( v142 )
    {
      v142 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
    }
    v76 = v140;
    if ( v140 )
    {
      v140 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
    }
    v77 = v155;
    if ( v155 )
    {
      v155 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
    }
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v78 = v153;
    if ( v153 )
    {
      v153 = 0LL;
      (*(void (__fastcall **)(struct Windows::UI::Composition::ISpriteVisual *))(*(_QWORD *)v78 + 16LL))(v78);
    }
    v79 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v141;
    if ( v141 )
    {
      v141 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v79)[2])(v79);
    }
    goto LABEL_77;
  }
  v149 = &v143;
  v150 = this;
  v151 = 1;
  v38 = *((_QWORD *)this + 26);
  if ( !v38 )
    goto LABEL_23;
  v39 = CVisualProxy::SetClip(*(CVisualProxy **)(v38 + 16), v143);
  v3 = v39;
  if ( v39 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9D,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v39,
      v139);
    v61 = v143;
    if ( v143 )
    {
      v135 = *((_QWORD *)this + 26);
      if ( v135 )
      {
        CVisualProxy::SetClip(*(CVisualProxy **)(v135 + 16), 0LL);
        CVisual::SetIgnoreClipForHitTest(*((CVisual **)this + 26), 0);
        v61 = v143;
      }
    }
    if ( v61 )
    {
      v143 = 0LL;
      CBaseObject::Release(v61);
    }
    v62 = v146;
    if ( v146 )
    {
      v146 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
    }
    v63 = v145;
    if ( v145 )
    {
      v145 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
    }
    v64 = v144;
    if ( v144 )
    {
      v144 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
    }
    v65 = v142;
    if ( v142 )
    {
      v142 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
    }
    v66 = v140;
    if ( v140 )
    {
      v140 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
    }
    v67 = v155;
    if ( v155 )
    {
      v155 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
    }
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v68 = v153;
    if ( v153 )
    {
      v153 = 0LL;
      (*(void (__fastcall **)(struct Windows::UI::Composition::ISpriteVisual *))(*(_QWORD *)v68 + 16LL))(v68);
    }
    v69 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v141;
    if ( v141 )
    {
      v141 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v69)[2])(v69);
    }
    goto LABEL_77;
  }
  v40 = CVisual::SetIgnoreClipForHitTest(*((CVisual **)this + 26), 1);
  v3 = v40;
  if ( v40 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9E,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v40,
      v139);
    v101 = v143;
    if ( v143 )
    {
      v136 = *((_QWORD *)this + 26);
      if ( v136 )
      {
        CVisualProxy::SetClip(*(CVisualProxy **)(v136 + 16), 0LL);
        CVisual::SetIgnoreClipForHitTest(*((CVisual **)this + 26), 0);
        v101 = v143;
      }
    }
    if ( v101 )
    {
      v143 = 0LL;
      CBaseObject::Release(v101);
    }
    v102 = v146;
    if ( v146 )
    {
      v146 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v102 + 16LL))(v102);
    }
    v103 = v145;
    if ( v145 )
    {
      v145 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v103 + 16LL))(v103);
    }
    v104 = v144;
    if ( v144 )
    {
      v144 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 16LL))(v104);
    }
    v105 = v142;
    if ( v142 )
    {
      v142 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 16LL))(v105);
    }
    v106 = v140;
    if ( v140 )
    {
      v140 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v106 + 16LL))(v106);
    }
    v107 = v155;
    if ( v155 )
    {
      v155 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 16LL))(v107);
    }
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v108 = v153;
    if ( v153 )
    {
      v153 = 0LL;
      (*(void (__fastcall **)(struct Windows::UI::Composition::ISpriteVisual *))(*(_QWORD *)v108 + 16LL))(v108);
    }
    v109 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v141;
    if ( v141 )
    {
      v141 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v109)[2])(v109);
    }
LABEL_77:
    v70 = v154;
    if ( v154 )
    {
      v154 = 0LL;
      CBaseObject::Release(v70);
    }
    return v3;
  }
LABEL_23:
  inserted = CContainerVisual::InsertChildAfter(this, v154, 0LL);
  v3 = inserted;
  if ( inserted < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)inserted,
      v139);
    if ( v143 )
    {
      v137 = *((_QWORD *)this + 26);
      if ( v137 )
      {
        CVisualProxy::SetClip(*(CVisualProxy **)(v137 + 16), 0LL);
        CVisual::SetIgnoreClipForHitTest(*((CVisual **)this + 26), 0);
      }
    }
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v143);
    goto LABEL_249;
  }
  v42 = v154;
  v154 = 0LL;
  v43 = (CBaseObject *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = v42;
  if ( v43 )
    CBaseObject::Release(v43);
  v44 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v141;
  v141 = 0LL;
  v45 = *((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = v44;
  if ( v45 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  v46 = v153;
  v153 = 0LL;
  v47 = *((_QWORD *)this + 29);
  *((_QWORD *)this + 29) = v46;
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  v48 = v143;
  v143 = 0LL;
  v49 = (CBaseObject *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = v48;
  if ( v49 )
    CBaseObject::Release(v49);
  CWindowBorder::SetBorderModeForContentClip(this);
  v50 = v143;
  if ( v143 )
  {
    v138 = *((_QWORD *)this + 26);
    if ( v138 )
    {
      CVisualProxy::SetClip(*(CVisualProxy **)(v138 + 16), 0LL);
      CVisual::SetIgnoreClipForHitTest(*((CVisual **)this + 26), 0);
      v50 = v143;
    }
  }
  if ( v50 )
  {
    v143 = 0LL;
    CBaseObject::Release(v50);
  }
  v51 = v146;
  if ( v146 )
  {
    v146 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  }
  v52 = v145;
  if ( v145 )
  {
    v145 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  }
  v53 = v144;
  if ( v144 )
  {
    v144 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  }
  v54 = v142;
  if ( v142 )
  {
    v142 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  }
  v55 = v140;
  if ( v140 )
  {
    v140 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  }
  v56 = v155;
  if ( v155 )
  {
    v155 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  v57 = v153;
  if ( v153 )
  {
    v153 = 0LL;
    (*(void (__fastcall **)(struct Windows::UI::Composition::ISpriteVisual *))(*(_QWORD *)v57 + 16LL))(v57);
  }
  v58 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v141;
  if ( v141 )
  {
    v141 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v58)[2])(v58);
  }
  v59 = v154;
  if ( v154 )
  {
    v154 = 0LL;
    CBaseObject::Release(v59);
  }
  return 0LL;
}
