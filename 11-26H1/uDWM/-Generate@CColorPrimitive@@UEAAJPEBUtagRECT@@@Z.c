/*
 * XREFs of ?Generate@CColorPrimitive@@UEAAJPEBUtagRECT@@@Z @ 0x1800BCEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?IsEmpty@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18000A9B8 (-IsEmpty@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PrependDCompPrimitive@CPrimitiveGroupVisual@@QEAAJPEAUIDCompositionPrimitivePartner@@@Z @ 0x1800719E4 (-PrependDCompPrimitive@CPrimitiveGroupVisual@@QEAAJPEAUIDCompositionPrimitivePartner@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CColorPrimitive::Generate(CColorPrimitive *this, const struct tagRECT *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64, GUID *, __int64); // r9
  __int64 v7; // r10
  int v8; // eax
  float v9; // xmm5_4
  float v10; // xmm6_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float bottom; // xmm2_4
  float right; // xmm3_4
  float top; // xmm4_4
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  struct IDCompositionPrimitivePartner *v20; // [rsp+58h] [rbp-9h] BYREF
  __int64 *v21; // [rsp+60h] [rbp-1h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp+7h] BYREF
  __int64 v23; // [rsp+70h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( *((_QWORD *)this + 2) )
  {
    v21 = 0LL;
    v5 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v21);
    v8 = v6(v7, &GUID_7bd36c9a_56ee_4fdd_ac4e_76bbd16ec8e4, v5);
    v4 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D,
        (int)"clientcore\\windows\\dwm\\udwm\\primitive.cpp",
        (const char *)(unsigned int)v8);
LABEL_23:
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v21);
      return v4;
    }
    v9 = (float)*((int *)this + 7);
    v10 = (float)*((int *)this + 6);
    v22 = __PAIR64__(LODWORD(v9), LODWORD(v10));
    v11 = (float)*((int *)this + 8) + v10;
    *(float *)&v23 = v11;
    v12 = (float)*((int *)this + 9) + v9;
    *((float *)&v23 + 1) = v12;
    if ( a2 )
    {
      bottom = (float)a2->bottom;
      right = (float)a2->right;
      top = (float)a2->top;
      if ( (float)a2->left > v10 )
        *(float *)&v22 = (float)a2->left;
      if ( top > v9 )
        *((float *)&v22 + 1) = top;
      if ( v11 > right )
        *(float *)&v23 = right;
      if ( v12 > bottom )
        *((float *)&v23 + 1) = bottom;
      if ( TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsEmpty((float *)&v22) )
      {
        v23 = 0LL;
        v22 = 0LL;
LABEL_22:
        v4 = 0;
        goto LABEL_23;
      }
    }
    v20 = 0LL;
    v16 = *v21;
    v20 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *, void *))(v16 + 88))(v21, &v22, &unk_180114E48);
    v4 = v17;
    if ( v17 >= 0 )
    {
      v17 = CPrimitiveGroupVisual::PrependDCompPrimitive(*((CPrimitiveGroupVisual **)this + 2), v20);
      v4 = v17;
      if ( v17 >= 0 )
      {
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v20);
        goto LABEL_22;
      }
      v18 = 144LL;
    }
    else
    {
      v18 = 142LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"clientcore\\windows\\dwm\\udwm\\primitive.cpp",
      (const char *)(unsigned int)v17);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v20);
    goto LABEL_23;
  }
  v4 = -2147020579;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x68,
    (int)"clientcore\\windows\\dwm\\udwm\\primitive.cpp",
    (const char *)0x800710DDLL);
  return v4;
}
