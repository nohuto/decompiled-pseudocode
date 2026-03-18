/*
 * XREFs of ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1800FB6AC
 * Callers:
 *     ?resize@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x1800FC984 (-resize@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurface.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@detail@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@detail@@YAXV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@0@0V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@Z @ 0x1800FB500 (--$move_backward_uninitialized@V-$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAURampPair@CoordMap@@@std@@V?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@V?$move_iterator@PEAURampPair@CoordMap@@@0@0V12@@Z @ 0x1801AA5E8 (--$uninitialized_move@V-$move_iterator@PEAURampPair@CoordMap@@@std@@V-$checked_array_iterator@PE.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x18025B2F4 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

__int64 __fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rsi
  __int64 v7; // r12
  char *v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 result; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdi
  LPVOID v17; // rbx
  __int64 v18; // r8
  _QWORD *v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // rdx
  __int128 v22; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+30h] [rbp-50h]
  __int128 v24; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+50h] [rbp-30h]
  char v26[32]; // [rsp+60h] [rbp-20h] BYREF
  void *v27; // [rsp+C0h] [rbp+40h] BYREF
  char *v28; // [rsp+D0h] [rbp+50h] BYREF

  v3 = a1[1];
  if ( 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - v3) >> 2) < a3 )
  {
    v14 = 0xAAAAAAAAAAAAAAABuLL * ((v3 - *a1) >> 2);
    v15 = v14 + a3;
    if ( v15 < v14 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1800FB7F6LL);
    }
    v16 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)0xAAAAAAAAAAAAAAABLL,
            0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 2),
            v15);
    v17 = operator new[](saturated_mul(v16, 0xCuLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v22, (__int64)v17, v14);
    v18 = a1[1];
    v19 = (_QWORD *)*a1;
    v24 = v22;
    v25 = v23;
    ((void (__fastcall *)(__int128 *, _QWORD *, __int64, __int128 *))std::uninitialized_move<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>)(
      &v22,
      v19,
      v18,
      &v24);
    v20 = (__int64 *)*a1;
    *a1 = (__int64)v17;
    v27 = 0LL;
    if ( v20 == a1 + 3 )
      v20 = 0LL;
    operator delete(v20);
    v21 = *a1;
    a1[1] = *a1 + 12 * v14;
    a1[2] = v21 + 12 * v16;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v27);
  }
  v7 = *a1;
  v8 = (char *)a1[1];
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v8[-*a1] >> 2);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(
    &v24,
    *a1 + 4 * ((__int64)&v8[-*a1] >> 2),
    a3);
  v22 = v24;
  v23 = v25;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v22, a3);
  v27 = v8;
  v24 = v22;
  v10 = v9 - a2;
  v25 = v23;
  if ( a3 < v9 - a2 )
    v10 = a3;
  v28 = &v8[-12 * v10];
  detail::move_backward_uninitialized<detail::basic_iterator<CRenderingTechniqueFragment::SurfaceDescription>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
    &v28,
    (__int64 *)&v27,
    &v24);
  v11 = 12 * a2;
  if ( v9 - a2 > a3 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v24, v7, v9);
    v22 = v24;
    v23 = v25;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v22, v9);
    v12 = v7 + v11;
    v24 = v22;
    v25 = v23;
    std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
      v26,
      v12,
      v7 + 12 * (v9 - a3),
      &v24);
  }
  else
  {
    v12 = v7 + v11;
  }
  result = v12;
  a1[1] += 12 * a3;
  return result;
}
