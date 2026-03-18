/*
 * XREFs of ?reserve_region@?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUBounds@CCpuClipAntialiasSink@@_K0@Z @ 0x1800C45DC
 * Callers:
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1800C1C44 (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800C2D20 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800C3820 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAURampPair@CoordMap@@@std@@V?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@V?$move_iterator@PEAURampPair@CoordMap@@@0@0V12@@Z @ 0x1801AA5E8 (--$uninitialized_move@V-$move_iterator@PEAURampPair@CoordMap@@@std@@V-$checked_array_iterator@PE.c)
 *     ??C?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@QEBAPEAURampPair@CoordMap@@XZ @ 0x18021FE04 (--C-$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@QEBAPEAURampPair@CoordMap@@XZ.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x18025B2F4 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

__int64 __fastcall detail::vector_facade<CCpuClipAntialiasSink::Bounds,detail::buffer_impl<CCpuClipAntialiasSink::Bounds,4,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  LPVOID v13; // rdi
  __int64 v14; // r8
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+30h] [rbp-50h]
  __int128 v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h]
  char v22[32]; // [rsp+60h] [rbp-20h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  if ( !(0xAAAAAAAAAAAAAAABuLL * ((*((_QWORD *)a1 + 2) - v2) >> 2)) )
  {
    v11 = 0xAAAAAAAAAAAAAAABuLL * ((v2 - *(_QWORD *)a1) >> 2);
    if ( v11 + 1 < v11 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1800C47D4LL);
    }
    v12 = detail::liberal_expansion_policy::expand(
            a1,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 2),
            v11 + 1);
    v13 = operator new[](saturated_mul(v12, 0xCuLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v20, (__int64)v13, v11);
    v14 = *((_QWORD *)a1 + 1);
    v15 = *(_QWORD **)a1;
    v18 = v20;
    v19 = v21;
    ((void (__fastcall *)(__int128 *, _QWORD *, __int64, __int128 *))std::uninitialized_move<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>)(
      &v20,
      v15,
      v14,
      &v18);
    v16 = *(_QWORD **)a1;
    *(_QWORD *)a1 = v13;
    if ( v16 == (_QWORD *)((char *)a1 + 24) )
      v16 = 0LL;
    operator delete(v16);
    v17 = *(_QWORD **)a1;
    v2 = *(_QWORD *)a1 + 12 * v11;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = (char *)v17 + 12 * v12;
  }
  v5 = *(_QWORD *)a1;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((v2 - *(_QWORD *)a1) >> 2);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(
    &v20,
    *(_QWORD *)a1 + 4 * ((v2 - *(_QWORD *)a1) >> 2),
    1LL);
  v18 = v20;
  v19 = v21;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v18, 1LL);
  v7 = v6 - a2;
  if ( (unsigned __int64)(v6 - a2) > 1 )
    v7 = 1LL;
  v20 = v18;
  v21 = v19;
  v8 = v2 - 12 * v7;
  while ( v2 != v8 )
  {
    v2 -= 12LL;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v20);
    v10 = stdext::checked_array_iterator<CoordMap::RampPair *>::operator->(&v20);
    *(_QWORD *)v10 = *(_QWORD *)v2;
    *(_DWORD *)(v10 + 8) = *(_DWORD *)(v2 + 8);
  }
  if ( (unsigned __int64)(v6 - a2) > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v20, v5, v6);
    v18 = v20;
    v19 = v21;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v18, v6);
    v20 = v18;
    v21 = v19;
    std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
      v22,
      v5 + 12 * a2,
      v5 + 12 * (v6 - 1),
      &v20);
  }
  *((_QWORD *)a1 + 1) += 12LL;
  return v5 + 12 * a2;
}
