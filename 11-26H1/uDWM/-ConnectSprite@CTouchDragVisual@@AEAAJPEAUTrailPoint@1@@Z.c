/*
 * XREFs of ?ConnectSprite@CTouchDragVisual@@AEAAJPEAUTrailPoint@1@@Z @ 0x1800CC60C
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18007D614 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?SetRect@CRectangleVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A8D8 (-SetRect@CRectangleVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x18004FE5C (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCSolidRectangleVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180078858 (--4-$com_ptr_t@VCSolidRectangleVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?pop_back@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@QEAAXXZ @ 0x18008790C (-pop_back@-$deque@UTrailPoint@CTouchDragVisual@@V-$allocator@UTrailPoint@CTouchDragVisual@@@std@.c)
 *     ??4?$com_ptr_t@UICompositionSurfaceBrush@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009B1EC (--4-$com_ptr_t@UICompositionSurfaceBrush@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTouchDragVisual::ConnectSprite(CTouchDragVisual *this, struct CTouchDragVisual::TrailPoint *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  struct CSolidRectangleVisual *v6; // rbx
  __m128 v7; // xmm6
  int v8; // r14d
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64); // r14
  __int64 (__fastcall *v14)(_QWORD, GUID *, __int64); // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  float v17; // xmm1_4
  __int128 v19; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v21; // [rsp+70h] [rbp+30h] BYREF
  struct CSolidRectangleVisual *v22; // [rsp+80h] [rbp+40h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  v4 = (_QWORD *)((char *)this + 352);
  v5 = *((_QWORD *)this + 48);
  if ( v5 )
  {
    wil::com_ptr_t<CSolidRectangleVisual,wil::err_returncode_policy>::operator=(
      &v22,
      *(CBaseObject ***)(*((_QWORD *)this + 45)
                       + 8 * ((*((_QWORD *)this + 46) - 1LL) & (*((_QWORD *)this + 47) - 1LL + v5))));
    wil::com_ptr_t<Windows::UI::Composition::ICompositionSurfaceBrush,wil::err_returncode_policy>::operator=(
      &v21,
      (__int64 *)(*(_QWORD *)(*((_QWORD *)this + 45)
                            + 8
                            * ((*((_QWORD *)this + 46) - 1LL) & (*((_QWORD *)this + 47) - 1LL + *((_QWORD *)this + 48))))
                + 8LL));
    std::deque<CTouchDragVisual::TrailPoint>::pop_back(v4);
    v6 = v22;
  }
  else
  {
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(&v22);
    v10 = CSolidRectangleVisual::Create(&v22);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 340LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"clientcore\\windows\\dwm\\udwm\\touchdragvisual.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_18;
    }
    v6 = v22;
    v8 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>(
           (__int64)v22,
           *((_QWORD *)this + 51));
    if ( v8 < 0 )
    {
      v9 = 341LL;
      goto LABEL_9;
    }
    v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(*((_QWORD *)v6 + 2) + 40LL);
    v14 = **v13;
    v15 = v21;
    v21 = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v16 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v21);
    v8 = v14(v13, &GUID_117e202d_a859_4c89_873b_c2aa566788e3, v16);
    if ( v8 < 0 )
    {
      v9 = 343LL;
      goto LABEL_9;
    }
  }
  v7 = (__m128)*((unsigned int *)a2 + 6);
  v7.m128_f32[0] = v7.m128_f32[0] * 0.5;
  *(_QWORD *)&v19 = _mm_unpacklo_ps(v7, v7).m128_u64[0];
  DWORD2(v19) = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v21 + 104LL))(v21, &v19);
  if ( v8 >= 0 )
  {
    v17 = *((float *)a2 + 5);
    *(float *)&v19 = *((float *)a2 + 4) - v7.m128_f32[0];
    *((float *)&v19 + 1) = v17 - v7.m128_f32[0];
    *((float *)&v19 + 2) = *(float *)&v19 + *((float *)a2 + 6);
    *((float *)&v19 + 3) = (float)(v17 - v7.m128_f32[0]) + *((float *)a2 + 6);
    CRectangleVisual::SetRect((__int64)v6, &v19);
    v10 = CContainerVisual::AddChild(this, v6);
    v11 = v10;
    if ( v10 >= 0 )
    {
      wil::com_ptr_t<CSolidRectangleVisual,wil::err_returncode_policy>::operator=((CBaseObject **)a2, &v22);
      wil::com_ptr_t<Windows::UI::Composition::ICompositionSurfaceBrush,wil::err_returncode_policy>::operator=(
        (__int64 *)a2 + 1,
        &v21);
      v11 = 0;
      goto LABEL_18;
    }
    v12 = 357LL;
    goto LABEL_16;
  }
  v9 = 347LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"clientcore\\windows\\dwm\\udwm\\touchdragvisual.cpp",
    (const char *)(unsigned int)v8);
  v11 = v8;
LABEL_18:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v22);
  return v11;
}
