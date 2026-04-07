/*
 * XREFs of ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18000D360
 * Callers:
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18000C210 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000BD84 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D064 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x18000E35C (-CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@.c)
 *     ?GetShadowParameters@CWindowBorder@@CAXW4ShadowStyle@1@HPEAM111@Z @ 0x180010240 (-GetShadowParameters@CWindowBorder@@CAXW4ShadowStyle@1@HPEAM111@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Set_ptr_rep_and_enable_shared@VCCachedBorderBrush@CWindowBorder@@@?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@AEAAXQEAVCCachedBorderBrush@CWindowBorder@@QEAV_Ref_count_base@1@@Z @ 0x18007A4B8 (--$_Set_ptr_rep_and_enable_shared@VCCachedBorderBrush@CWindowBorder@@@-$shared_ptr@VCCachedBorde.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CWindowBorder::CCachedBorderBrush::CreateBorderBrush(
        float a1,
        unsigned int a2,
        _OWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64); // rbx
  __int64 v10; // rax
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64); // r9
  int v12; // eax
  unsigned int v13; // edi
  __int64 (__fastcall *v14)(_QWORD, GUID *, __int64); // rdi
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // r14
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64); // r9
  int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  int BorderSurface; // eax
  int v30; // eax
  float v32; // xmm7_4
  float v33; // xmm9_4
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  char *v37; // rax
  char *v38; // r8
  __int64 v39; // rax
  std::_Ref_count_base *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rdx
  int v43; // [rsp+28h] [rbp-79h]
  int v44; // [rsp+28h] [rbp-79h]
  int v45; // [rsp+28h] [rbp-79h]
  __int64 v46; // [rsp+38h] [rbp-69h] BYREF
  __int64 v47; // [rsp+40h] [rbp-61h] BYREF
  __int64 v48; // [rsp+48h] [rbp-59h] BYREF
  __int64 *v49; // [rsp+50h] [rbp-51h] BYREF
  __int64 *v50; // [rsp+58h] [rbp-49h] BYREF
  __int64 v51; // [rsp+60h] [rbp-41h]
  float v52; // [rsp+68h] [rbp-39h] BYREF
  int v53; // [rsp+6Ch] [rbp-35h] BYREF
  _BYTE v54[4]; // [rsp+70h] [rbp-31h] BYREF
  _BYTE v55[4]; // [rsp+74h] [rbp-2Dh] BYREF
  std::_Ref_count_base *v56[2]; // [rsp+78h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+4Fh]

  v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                           + 32LL);
  v50 = 0LL;
  v49 = 0LL;
  v10 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v50);
  v12 = v11(v9, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8, v10);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FE,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v12,
      v43);
    if ( v50 )
      (*(void (__fastcall **)(__int64 *))(*v50 + 16))(v50);
    return v13;
  }
  v14 = **v9;
  v49 = 0LL;
  v15 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v49);
  v16 = v14(v9, &GUID_735081dc_5e24_45da_a38f_e32cc349a9a0, v15);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FF,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v16,
      v43);
LABEL_108:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v49);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v50);
    return v17;
  }
  v46 = 0LL;
  v18 = *v49;
  v46 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v18 + 112))(v49, &v46);
  v17 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x203,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v19,
      v43);
LABEL_107:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v46);
    goto LABEL_108;
  }
  v47 = 0LL;
  v20 = *v50;
  v47 = 0LL;
  v21 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v20 + 184))(v50, &v47);
  v17 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x206,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v21,
      v43);
    if ( v47 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    if ( v46 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    if ( v49 )
      (*(void (__fastcall **)(__int64 *))(*v49 + 16))(v49);
    if ( v50 )
      (*(void (__fastcall **)(__int64 *))(*v50 + 16))(v50);
    return v17;
  }
  v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v47 + 88LL))(v47, 1LL);
  v17 = v22;
  if ( v22 < 0 )
  {
    v41 = 519LL;
LABEL_102:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v41,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v22,
      v43);
LABEL_106:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v47);
    goto LABEL_107;
  }
  v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v47 + 56LL))(v47, 0LL);
  v17 = v22;
  if ( v22 < 0 )
  {
    v41 = 520LL;
    goto LABEL_102;
  }
  v48 = 0LL;
  v23 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v48);
  v25 = (**v24)(v24, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, v23);
  v17 = v25;
  if ( v25 < 0 )
  {
    v42 = 524LL;
LABEL_105:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v42,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v25,
      v43);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v48);
    goto LABEL_106;
  }
  v25 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v46 + 168LL))(v46, v48);
  v17 = v25;
  if ( v25 < 0 )
  {
    v42 = 525LL;
    goto LABEL_105;
  }
  LOBYTE(v26) = 1;
  v27 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v46 + 88LL))(v46, v26);
  v17 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20E,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v27,
      v43);
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    if ( v47 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    if ( v46 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    if ( v49 )
      (*(void (__fastcall **)(__int64 *))(*v49 + 16))(v49);
    if ( v50 )
      (*(void (__fastcall **)(__int64 *))(*v50 + 16))(v50);
    return v17;
  }
  v51 = 0LL;
  v44 = a5;
  BorderSurface = CWindowBorder::CCachedBorderBrush::CreateBorderSurface(v28, a2, a3, a4);
  if ( BorderSurface < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x21A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)BorderSurface,
      a5);
  v30 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v47 + 104LL))(v47, v51);
  v17 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21D,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v30,
      v44);
    if ( v51 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    if ( v47 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    if ( v46 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    if ( v49 )
      (*(void (__fastcall **)(__int64 *))(*v49 + 16))(v49);
    if ( v50 )
      (*(void (__fastcall **)(__int64 *))(*v50 + 16))(v50);
    return v17;
  }
  v52 = 0.0;
  v53 = 0;
  CWindowBorder::GetShadowParameters(a5, a2, &v52, &v53, v55, v54);
  v32 = v52;
  v33 = v52 * 0.5;
  *(float *)&v45 = (float)((float)((float)((float)((float)((float)(int)a2 / 96.0) * a1) + (float)(v52 * 0.5)) + 2.0)
                         + (float)(v52 * 0.5))
                 + (float)(v52 * 0.5);
  v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 216LL))(v46);
  v17 = v34;
  if ( v34 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x231,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v34,
      v45);
    if ( v51 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    if ( v47 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    if ( v46 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    if ( v49 )
      (*(void (__fastcall **)(__int64 *))(*v49 + 16))(v49);
    if ( v50 )
      (*(void (__fastcall **)(__int64 *))(*v50 + 16))(v50);
    return v17;
  }
  v35 = v48;
  v48 = 0LL;
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  v36 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v46)(
          v46,
          &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46,
          v23);
  v17 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x234,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
      (const char *)(unsigned int)v36,
      v45);
    if ( v51 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    if ( v48 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    if ( v47 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    if ( v46 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    if ( v49 )
      (*(void (__fastcall **)(__int64 *))(*v49 + 16))(v49);
    if ( v50 )
      (*(void (__fastcall **)(__int64 *))(*v50 + 16))(v50);
    return v17;
  }
  v37 = (char *)operator new(0x58uLL);
  v38 = v37;
  if ( v37 )
  {
    *((_DWORD *)v37 + 2) = 1;
    *((_DWORD *)v37 + 3) = 1;
    *(_QWORD *)v37 = &std::_Ref_count_obj2<CWindowBorder::CCachedBorderBrush>::`vftable';
    *((_QWORD *)v37 + 2) = 0LL;
    *((_QWORD *)v37 + 3) = 0LL;
    *((float *)v37 + 8) = a1;
    *((_DWORD *)v37 + 9) = a2;
    *((_DWORD *)v37 + 10) = a5;
    *(_OWORD *)(v37 + 44) = *a3;
    *((_DWORD *)v37 + 15) = a4;
    *((float *)v37 + 16) = v32;
    *((float *)v37 + 17) = v33;
    *((float *)v37 + 18) = v32 * 2.0;
    v39 = v48;
    v48 = 0LL;
    *((_QWORD *)v38 + 10) = v39;
  }
  else
  {
    v38 = 0LL;
  }
  *(_OWORD *)v56 = 0LL;
  std::shared_ptr<CWindowBorder::CCachedBorderBrush>::_Set_ptr_rep_and_enable_shared<CWindowBorder::CCachedBorderBrush>(
    v56,
    v38 + 16);
  std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=(a6, (__int64 *)v56);
  v40 = v56[1];
  if ( v56[1] && _InterlockedExchangeAdd((volatile signed __int32 *)v56[1] + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(std::_Ref_count_base *))v40)(v40);
    std::_Ref_count_base::_Decwref(v40);
  }
  if ( v51 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  if ( v47 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  if ( v46 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  if ( v49 )
    (*(void (__fastcall **)(__int64 *))(*v49 + 16))(v49);
  if ( v50 )
    (*(void (__fastcall **)(__int64 *))(*v50 + 16))(v50);
  return 0LL;
}
