/*
 * XREFs of ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x18015B51C
 * Callers:
 *     ?Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@W4D2D1_BORDER_MODE@@PEAPEAV1@@Z @ 0x18015B11C (-Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x18015B7D4 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x18015B9C8 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x18015BA24 (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x18015BC9C (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 *     ?GenerateTaps@CGaussianKernel@@SAXAEAV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@MM@Z @ 0x18015C098 (-GenerateTaps@CGaussianKernel@@SAXAEAV-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x18015C550 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBlurRenderingGraphBuilder::Build(CBlurRenderingGraphBuilder *this, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  _QWORD *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rdx
  int ShaderBodies; // eax
  int *v17; // rdx
  int *i; // rcx
  int v19; // xmm0_4
  __int128 v20; // [rsp+20h] [rbp-79h] BYREF
  __int64 v21; // [rsp+30h] [rbp-69h]
  _QWORD v22[7]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD *v23; // [rsp+78h] [rbp-21h]
  _QWORD v24[7]; // [rsp+80h] [rbp-19h] BYREF
  _QWORD *v25; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v4 = CBlurRenderingGraphBuilder::BuildPrescale(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v7 = *(_QWORD *)this;
  v20 = 0LL;
  v21 = 0LL;
  CGaussianKernel::GenerateTaps(&v20, 0LL);
  CBlurRenderingGraphBuilder::BuildOnePass(this, a2, &v20, 0LL);
  v8 = *(_QWORD *)(v7 + 504) - *(_QWORD *)(v7 + 496);
  v22[0] = off_1802DBE90;
  v23 = v22;
  v9 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
         v7 + 496,
         v8 >> 6);
  *(_QWORD *)(v9 + 56) = 0LL;
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v9, v22);
  if ( v23 )
  {
    v12 = v22;
    LOBYTE(v12) = v23 != v22;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v23 + 32LL))(v23, v12);
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v7 + 1568) - *(float *)(v7 + 1572)) & _xmm) <= 0.0000011920929 )
  {
    v17 = (int *)*((_QWORD *)&v20 + 1);
    for ( i = (int *)v20; i != v17; i += 3 )
    {
      v19 = *i;
      *i = i[1];
      i[1] = v19;
    }
  }
  else
  {
    if ( (_QWORD)v20 != *((_QWORD *)&v20 + 1) )
      *((_QWORD *)&v20 + 1) = v20;
    LOBYTE(v10) = 1;
    CGaussianKernel::GenerateTaps(&v20, v10);
  }
  LOBYTE(v11) = 1;
  CBlurRenderingGraphBuilder::BuildOnePass(this, a2, &v20, v11);
  v13 = *(_QWORD *)(v7 + 504) - *(_QWORD *)(v7 + 496);
  v24[0] = off_1802DBE60;
  v25 = v24;
  v14 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
          v7 + 496,
          v13 >> 6);
  *(_QWORD *)(v14 + 56) = 0LL;
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v14, v24);
  if ( v25 )
  {
    v15 = v24;
    LOBYTE(v15) = v25 != v24;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v25 + 32LL))(v25, v15);
  }
  ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
  v5 = ShaderBodies;
  if ( ShaderBodies < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)ShaderBodies);
    if ( (_QWORD)v20 )
      std::_Deallocate<16>((void *)v20, 4 * ((v21 - (__int64)v20) >> 2));
    return v5;
  }
  if ( (_QWORD)v20 )
    std::_Deallocate<16>((void *)v20, 4 * ((v21 - (__int64)v20) >> 2));
  return 0LL;
}
