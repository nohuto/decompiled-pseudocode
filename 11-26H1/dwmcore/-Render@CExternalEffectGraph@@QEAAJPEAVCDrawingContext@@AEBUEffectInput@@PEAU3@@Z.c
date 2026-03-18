/*
 * XREFs of ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x180019868
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x180038EE8 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRealization@@PEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIRenderTargetBitmap@@PEAV6@@Z @ 0x18015A6EC (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVIBitmapRe.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180019610 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ??1?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800197AC (--1-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@de.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?SetInputSurface@CGraphRenderingContext@CExternalEffectGraph@@QEAAXAEBUEffectInput@@@Z @ 0x180019CA4 (-SetInputSurface@CGraphRenderingContext@CExternalEffectGraph@@QEAAXAEBUEffectInput@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalEffectGraph::Render(
        CExternalEffectGraph *this,
        struct CDrawingContext *a2,
        const struct EffectInput *a3,
        struct EffectInput *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  int v15; // [rsp+20h] [rbp-E0h]
  CDrawingContext **v16; // [rsp+30h] [rbp-D0h] BYREF
  CDrawingContext *v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+40h] [rbp-C0h]
  CExternalEffectGraph *v19; // [rsp+48h] [rbp-B8h]
  struct EffectInput *v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  _QWORD v22[3]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v23[448]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v24; // [rsp+240h] [rbp+140h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  v8 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
      (const char *)(unsigned int)v8,
      v15);
    return v9;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 16LL))((char *)a2 + 16);
    v17 = a2;
    v18 = *(_DWORD *)(v10 + 8);
    v22[0] = v23;
    v22[1] = v23;
    v22[2] = &v24;
    v19 = this;
    v20 = a4;
    v21 = -1LL;
    CExternalEffectGraph::CGraphRenderingContext::SetInputSurface(
      (CExternalEffectGraph::CGraphRenderingContext *)&v17,
      a3);
    v11 = *((_QWORD *)this + 62);
    v12 = *((_QWORD *)this + 63);
    while ( v11 != v12 )
    {
      v13 = *(_QWORD *)(v11 + 56);
      v16 = &v17;
      if ( !v13 )
      {
        std::_Xbad_function_call();
        __debugbreak();
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
          (const char *)(unsigned int)a4,
          v15);
        if ( HIDWORD(v21) != -1 )
          CDrawingContext::PopLayer(v17);
        detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::~vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>((__int64)v22);
        CDrawingContext::PopTransformInternal(a2, 1);
        return (unsigned int)a4;
      }
      LODWORD(a4) = (*(__int64 (__fastcall **)(__int64, CDrawingContext ***))(*(_QWORD *)v13 + 16LL))(v13, &v16);
      if ( (int)a4 < 0 )
        goto LABEL_11;
      v11 += 64LL;
    }
    if ( HIDWORD(v21) != -1 )
      CDrawingContext::PopLayer(v17);
    detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::~vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>((__int64)v22);
    CDrawingContext::PopTransformInternal(a2, 1);
    return 0LL;
  }
}
