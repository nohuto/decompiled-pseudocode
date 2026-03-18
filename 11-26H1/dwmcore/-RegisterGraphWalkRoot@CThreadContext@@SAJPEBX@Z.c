/*
 * XREFs of ?RegisterGraphWalkRoot@CThreadContext@@SAJPEBX@Z @ 0x18009FE40
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091390 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18009F2E0 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?last@?$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ @ 0x180018840 (-last@-$pointer_buffer_impl@PEAVCVisual@@$0A@@detail@@QEBAPEAPEAVCVisual@@XZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@PEBXV?$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@IEAAPEAPEBX_K0@Z @ 0x18009FA24 (-reserve_region@-$vector_facade@PEBXV-$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@IEAAPEAPEBX.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CThreadContext::RegisterGraphWalkRoot(const void *a1)
{
  __int64 *Value; // rbx
  __int64 *v3; // rsi
  unsigned __int64 v4; // rax
  const void **v5; // rbx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  void *v8; // r8
  CThreadContext *v10; // rax
  CThreadContext *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Value = (__int64 *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v10 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v10 || (v11 = CThreadContext::CThreadContext(v10), (Value = (__int64 *)v11) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v11);
  }
  v3 = Value + 4;
  v4 = detail::pointer_buffer_impl<CVisual *,0>::last(Value + 4);
  if ( (Value[4] & 3) != 0 )
  {
    if ( (Value[4] & 3) == 1 )
    {
      v5 = (const void **)(*v3 & 0xFFFFFFFFFFFFFFFCuLL);
      goto LABEL_7;
    }
    if ( (Value[4] & 3) == 2 )
    {
      v5 = 0LL;
      goto LABEL_7;
    }
    if ( (Value[4] & 3) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v5 = (const void **)(Value + 4);
LABEL_7:
  while ( v5 != (const void **)v4 && *v5 != a1 )
    ++v5;
  if ( v5 == (const void **)detail::pointer_buffer_impl<CVisual *,0>::last(v3) )
  {
    v6 = detail::pointer_buffer_impl<CVisual *,0>::last(v3);
    v7 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v3);
    *(_QWORD *)detail::vector_facade<void const *,detail::pointer_buffer_impl<void const *,0>>::reserve_region(
                 v3,
                 (__int64)(v6 - v7) >> 3,
                 v8) = a1;
    detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(v3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
      (const char *)0x80004004LL);
    return 2147500036LL;
  }
}
