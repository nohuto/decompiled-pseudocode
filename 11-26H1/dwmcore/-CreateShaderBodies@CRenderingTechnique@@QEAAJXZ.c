/*
 * XREFs of ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800FCDF8
 * Callers:
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x18015C550 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x18000A17C (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800FC7AC (-clear_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@US.c)
 *     ?clear_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800FC898 (-clear_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTech.c)
 *     ?resize@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x1800FC984 (-resize@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurface.c)
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x1800FCA84 (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x1800FD03C (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTech.c)
 *     ?pop_back@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAXXZ @ 0x1800FDBC4 (-pop_back@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@CFrag.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800FDFB0 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x1801C57F0 (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTechni.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x1802B39A4 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 */

__int64 __fastcall CRenderingTechnique::CreateShaderBodies(CRenderingTechnique *this)
{
  unsigned __int64 v1; // rdx
  unsigned int v3; // edi
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  void *v10; // rcx
  CRenderingTechniqueFragment *v11; // rsi
  int EffectShaderBody; // ebx
  __int64 v13; // r8
  unsigned __int64 v14; // r8
  __int64 v15; // r8
  unsigned int v17; // eax
  void *v18[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h]
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  int v21; // [rsp+58h] [rbp-B0h]
  char *v22; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE *v23; // [rsp+70h] [rbp-98h]
  char *v24; // [rsp+78h] [rbp-90h]
  _BYTE v25[48]; // [rsp+80h] [rbp-88h] BYREF
  char v26; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE *v27; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE *v28; // [rsp+C0h] [rbp-48h]
  __int64 *v29; // [rsp+C8h] [rbp-40h]
  _BYTE v30[128]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v31; // [rsp+150h] [rbp+48h] BYREF

  v1 = *((unsigned int *)this + 65);
  v22 = v25;
  v3 = 0;
  v23 = v25;
  v24 = &v26;
  detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::resize(
    (__int64 *)&v22,
    v1);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 65); v8[v6 + 2] = v4 )
  {
    v6 = 3 * i;
    v7 = 44LL * (unsigned int)i;
    v8 = v22;
    i = (unsigned int)(i + 1);
    v4 = *(unsigned int *)((char *)this + v7 + 88);
    *(_QWORD *)&v22[4 * v6] = *(_QWORD *)((char *)this + v7 + 80);
  }
  v19 = 0LL;
  v27 = v30;
  v21 = 0;
  v28 = v30;
  v29 = &v31;
  v20 = *((_QWORD *)this + 1);
  *(_OWORD *)v18 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
    v18,
    &v20,
    v4,
    i);
LABEL_4:
  CFragmentIterator::FindFirst((CFragmentIterator *)v18);
  v9 = (__int64)v18[1];
  v10 = v18[0];
  while ( (v9 - (__int64)v10) >> 4 )
  {
    v11 = *(CRenderingTechniqueFragment **)(v9 - 16);
    if ( *(_QWORD *)v11 )
    {
      EffectShaderBody = CRenderingTechniqueFragment::CreateEffectShaderBody(v11);
      v3 = EffectShaderBody;
      if ( EffectShaderBody < 0 )
      {
        v17 = 503;
        goto LABEL_20;
      }
    }
    else
    {
      EffectShaderBody = CRenderingTechniqueFragment::CreateMaskShaderBody(v11, &v27, &v22);
      v3 = EffectShaderBody;
      if ( EffectShaderBody < 0 )
      {
        v17 = 508;
LABEL_20:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, v17, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, EffectShaderBody, 0x149u, 0LL);
        v10 = v18[0];
        break;
      }
    }
    v3 = EffectShaderBody;
    *(_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                 (__int64 *)&v27,
                 (v28 - v27) >> 3,
                 v13) = v11;
    std::vector<CFragmentIterator::FragmentStackEntry>::pop_back(v18);
    v9 = (__int64)v18[1];
    v10 = v18[0];
    if ( ((char *)v18[1] - (char *)v18[0]) >> 4 )
    {
      ++*((_DWORD *)v18[1] - 2);
      goto LABEL_4;
    }
  }
  if ( v10 )
  {
    std::_Deallocate<16>(v10, (v19 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF0uLL);
    v19 = 0LL;
    *(_OWORD *)v18 = 0LL;
  }
  v14 = (v28 - v27) >> 3;
  if ( v14 )
    detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v27,
      v9,
      v14);
  detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v27);
  v15 = 0xAAAAAAAAAAAAAAABuLL * ((v23 - v22) >> 2);
  if ( v15 )
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v22,
      0LL,
      v15);
  detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v22);
  return v3;
}
