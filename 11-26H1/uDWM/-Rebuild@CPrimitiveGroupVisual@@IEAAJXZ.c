/*
 * XREFs of ?Rebuild@CPrimitiveGroupVisual@@IEAAJXZ @ 0x18005A67C
 * Callers:
 *     ?ValidateVisual@CPrimitiveGroupVisual@@UEAAJXZ @ 0x18005A5F0 (-ValidateVisual@CPrimitiveGroupVisual@@UEAAJXZ.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180016EA0 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?SetSize@CPrimitive@@QEAAXAEBUtagSIZE@@@Z @ 0x180072CDC (-SetSize@CPrimitive@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?SetOffset@CPrimitive@@QEAAXAEBUtagPOINT@@@Z @ 0x1800BD890 (-SetOffset@CPrimitive@@QEAAXAEBUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPrimitiveGroupVisual::Rebuild(CPrimitiveGroupVisual *this)
{
  __int128 *v2; // r14
  __int64 v3; // rax
  __int64 (__fastcall *v4)(__int64, GUID *, __int64); // r9
  __int64 v5; // r10
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, char *); // rdi
  int v10; // eax
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v17; // [rsp+20h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  struct tagPOINT v19; // [rsp+38h] [rbp-38h] BYREF
  tagSIZE v20; // [rsp+40h] [rbp-30h] BYREF
  CPrimitiveGroupVisual *v21; // [rsp+48h] [rbp-28h]
  char v22; // [rsp+50h] [rbp-20h]
  __int128 v23; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v23 = 0LL;
  v2 = 0LL;
  if ( *((_BYTE *)this + 256) )
  {
    LODWORD(v23) = *((_DWORD *)this + 60);
    DWORD1(v23) = *((_DWORD *)this + 62);
    DWORD2(v23) = *((_DWORD *)this + 16) - *((_DWORD *)this + 61);
    HIDWORD(v23) = *((_DWORD *)this + 17) - *((_DWORD *)this + 63);
    v2 = &v23;
  }
  v18 = 0LL;
  v3 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v18);
  v6 = v4(v5, &GUID_7bd36c9a_56ee_4fdd_ac4e_76bbd16ec8e4, v3);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\primitivegroupvisual.cpp",
      (const char *)(unsigned int)v6,
      v17);
LABEL_19:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v18);
    return v7;
  }
  v8 = v18;
  v9 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v18 + 96LL);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((__int64 *)this + 29);
  v10 = v9(v8, (char *)this + 232);
  v7 = v10;
  if ( v10 >= 0 )
  {
    *((_BYTE *)this + 257) = 1;
    v21 = this;
    v22 = 1;
    v11 = (_QWORD *)*((_QWORD *)this + 27);
    while ( v11 != *((_QWORD **)this + 26) )
    {
      v12 = *--v11;
      v20 = 0LL;
      v19 = 0LL;
      if ( CVisual::DoCanvasLayout(
             (const struct tagSIZE *)this + 8,
             (const struct _MARGINS *)(v12 + 40),
             (const struct tagSIZE *)(v12 + 32),
             &v19,
             &v20) )
      {
        CPrimitive::SetOffset((CPrimitive *)v12, &v19);
        CPrimitive::SetSize((CPrimitive *)v12, &v20);
      }
      v13 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 16LL))(v12, v2);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9B,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\primitivegroupvisual.cpp",
          (const char *)(unsigned int)v13,
          v17);
        v7 = v14;
        goto LABEL_18;
      }
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 32LL) + 120LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 32LL),
            *((_QWORD *)this + 29));
    v7 = v15;
    if ( v15 >= 0 )
      v7 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9F,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\primitivegroupvisual.cpp",
        (const char *)(unsigned int)v15,
        v17);
LABEL_18:
    *((_BYTE *)this + 257) = 0;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x82,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\primitivegroupvisual.cpp",
    (const char *)(unsigned int)v10,
    v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return v7;
}
