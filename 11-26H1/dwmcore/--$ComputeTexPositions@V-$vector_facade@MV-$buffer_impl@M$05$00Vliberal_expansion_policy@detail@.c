/*
 * XREFs of ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18003AFAC
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x18003B6F0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x18000A17C (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x18003C7F0 (--$ComputeTexPositionsWorker@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@d.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAURampPair@CoordMap@@@std@@V?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@V?$move_iterator@PEAURampPair@CoordMap@@@0@0V12@@Z @ 0x1801AA5E8 (--$uninitialized_move@V-$move_iterator@PEAURampPair@CoordMap@@@std@@V-$checked_array_iterator@PE.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAM@std@@V?$checked_array_iterator@PEAM@stdext@@@std@@YA?AV?$checked_array_iterator@PEAM@stdext@@V?$move_iterator@PEAM@0@0V12@@Z @ 0x180206F90 (--$uninitialized_move@V-$move_iterator@PEAM@std@@V-$checked_array_iterator@PEAM@stdext@@@std@@YA.c)
 *     ??C?$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@QEBAPEAURampPair@CoordMap@@XZ @ 0x18021FE04 (--C-$checked_array_iterator@PEAURampPair@CoordMap@@@stdext@@QEBAPEAURampPair@CoordMap@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x18025B2F4 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall CoordMap::ComputeTexPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        __int64 *a5,
        __int64 *a6)
{
  _BYTE *v6; // r12
  char *v7; // r15
  unsigned int *v8; // r9
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rbx
  unsigned __int64 v25; // r15
  char *v26; // r15
  _BYTE *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rbx
  unsigned __int64 v30; // r13
  __int64 v31; // r14
  unsigned int v32; // r8d
  __int64 v33; // rax
  char *v34; // rdi
  unsigned __int64 v35; // r13
  __int64 v36; // r14
  __int64 v37; // r8
  __int64 v38; // rax
  char *v39; // rdi
  __int64 v40; // rcx
  unsigned __int64 v41; // r15
  __int64 v42; // r8
  __int64 v43; // r8
  unsigned __int64 v45; // rdi
  SIZE_T v46; // r10
  SIZE_T v47; // rax
  LPVOID v48; // rbx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 *v51; // rcx
  __int64 v52; // rcx
  unsigned __int64 v53; // rdi
  SIZE_T v54; // r10
  SIZE_T v55; // rax
  LPVOID v56; // rbx
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 *v59; // rcx
  __int64 v60; // rcx
  char *v61; // rsi
  __int64 v62; // rax
  char *v63; // rsi
  __int64 v64; // rax
  unsigned __int64 v65; // r14
  char *v66; // rdi
  void *v67; // rcx
  bool v68; // zf
  unsigned __int64 v69; // r14
  char *v70; // rdi
  void *v71; // rcx
  __int128 v72; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v73; // [rsp+30h] [rbp-D0h]
  __int128 v74; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v75; // [rsp+50h] [rbp-B0h]
  __int128 v76; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v77; // [rsp+70h] [rbp-90h]
  _QWORD v78[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v79; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v80[2]; // [rsp+A0h] [rbp-60h] BYREF
  detail::liberal_expansion_policy *v81; // [rsp+B0h] [rbp-50h]
  unsigned int *v82; // [rsp+B8h] [rbp-48h]
  __int128 v83; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v84; // [rsp+D0h] [rbp-30h]
  __int64 *v85; // [rsp+E0h] [rbp-20h]
  char *v86; // [rsp+F0h] [rbp-10h] BYREF
  char *v87; // [rsp+F8h] [rbp-8h]
  char *v88; // [rsp+100h] [rbp+0h]
  _BYTE v89[72]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v90; // [rsp+150h] [rbp+50h] BYREF

  v6 = v89;
  v7 = v89;
  *(_QWORD *)&v79 = a3;
  v82 = a4;
  v8 = a3;
  v9 = (a5[1] - *a5) >> 2;
  v81 = a1;
  v85 = a6;
  v80[0] = a5;
  v86 = v89;
  v87 = v89;
  v88 = (char *)&v90;
  if ( v9 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v74, *a5, v9);
    v7 = v87;
    v6 = v86;
    a5[1] += -4 * v10;
  }
  v11 = (a6[1] - *a6) >> 2;
  if ( v11 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v74, *a6, v11);
    v7 = v87;
    v6 = v86;
    a6[1] += -4 * v12;
  }
  v13 = *v8;
  v14 = (a5[1] - *a5) >> 2;
  if ( v13 > v14 )
  {
    a2 = a5[2];
    v15 = (a2 - a5[1]) >> 2;
    if ( v15 < (unsigned int)v13 - v14 )
    {
      v45 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)v15, (a2 - *a5) >> 2, v13);
      v47 = 4 * v45;
      if ( !is_mul_ok(v45, 4uLL) )
        v47 = v46;
      v48 = operator new[](v47);
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v76, (__int64)v48, v14);
      v49 = a5[1];
      v50 = *a5;
      v72 = v76;
      v73 = v77;
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::uninitialized_move<std::move_iterator<float *>,stdext::checked_array_iterator<float *>>)(
        &v74,
        v50,
        v49,
        &v72);
      v51 = (__int64 *)*a5;
      *a5 = (__int64)v48;
      v78[0] = 0LL;
      if ( v51 == a5 + 3 )
        v51 = 0LL;
      operator delete(v51);
      v52 = *a5;
      a5[1] = *a5 + 4 * v14;
      a5[2] = v52 + 4 * v45;
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v78);
      v7 = v87;
      v6 = v86;
    }
  }
  v16 = (a6[1] - *a6) >> 2;
  v17 = *v82;
  if ( v17 > v16 )
  {
    a2 = a6[2];
    v18 = (unsigned int)v17 - v16;
    if ( (a2 - a6[1]) >> 2 < v18 )
    {
      v53 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)v18, (a2 - *a6) >> 2, v17);
      v55 = 4 * v53;
      if ( !is_mul_ok(v53, 4uLL) )
        v55 = v54;
      v56 = operator new[](v55);
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v76, (__int64)v56, v16);
      v57 = a6[1];
      v58 = *a6;
      v72 = v76;
      v73 = v77;
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::uninitialized_move<std::move_iterator<float *>,stdext::checked_array_iterator<float *>>)(
        &v74,
        v58,
        v57,
        &v72);
      v59 = (__int64 *)*a6;
      *a6 = (__int64)v56;
      v78[0] = 0LL;
      if ( v59 == a6 + 3 )
        v59 = 0LL;
      operator delete(v59);
      v60 = *a6;
      a6[1] = *a6 + 4 * v16;
      a6[2] = v60 + 4 * v53;
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v78);
      v7 = v87;
      v6 = v86;
    }
  }
  v19 = 0xAAAAAAAAAAAAAAABuLL;
  v20 = 0xAAAAAAAAAAAAAAABuLL * ((v7 - v6) >> 2);
  if ( v20 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v74, (__int64)v6, v20);
    v6 = v86;
    v7 = &v87[-12 * v21];
    v19 = 0xAAAAAAAAAAAAAAABuLL;
    v87 = v7;
  }
  v22 = 1LL;
  v23 = *((_QWORD *)v81 + 1);
  v24 = *(_QWORD *)v81;
  v78[0] = v23;
  while ( v24 != v23 )
  {
    if ( !*(_DWORD *)(v24 + 12) )
    {
      v35 = 0xAAAAAAAAAAAAAAABuLL * ((v7 - v6) >> 2);
      if ( !(0xAAAAAAAAAAAAAAABuLL * ((v88 - v7) >> 2)) )
      {
        if ( v35 + 1 < v35 )
        {
LABEL_69:
          std::_Xoverflow_error("overflow");
          __debugbreak();
          JUMPOUT(0x1802BF75BLL);
        }
        v65 = detail::liberal_expansion_policy::expand(
                (detail::liberal_expansion_policy *)0xAAAAAAAAAAAAAAABLL,
                0xAAAAAAAAAAAAAAABuLL * ((v88 - v6) >> 2),
                v35 + 1);
        v66 = (char *)operator new[](saturated_mul(v65, 0xCuLL));
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v76, (__int64)v66, v35);
        v72 = v76;
        v73 = v77;
        ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::uninitialized_move<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>)(
          &v76,
          v86,
          v87,
          &v72);
        v67 = v86;
        v68 = v86 == v89;
        v86 = v66;
        if ( v68 )
          v67 = 0LL;
        operator delete(v67);
        v6 = v86;
        v7 = &v86[12 * v35];
        v87 = v7;
        v88 = &v86[12 * v65];
      }
      v36 = 0xAAAAAAAAAAAAAAABuLL * ((v7 - v6) >> 2);
      *(_QWORD *)&v83 = v36 - v35;
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(
        &v74,
        (__int64)&v6[4 * ((v7 - v6) >> 2)],
        1LL);
      v72 = v74;
      v73 = v75;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v72, v37);
      v38 = v36 - v35;
      v22 = 1LL;
      v76 = v72;
      if ( v36 - v35 > 1 )
        v38 = 1LL;
      v77 = v73;
      v39 = &v7[-12 * v38];
      if ( v7 != v39 )
      {
        do
        {
          v61 = v7;
          v7 -= 12;
          stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v76);
          v62 = stdext::checked_array_iterator<CoordMap::RampPair *>::operator->(&v76);
          *(_QWORD *)v62 = *(_QWORD *)v7;
          *(_DWORD *)(v62 + 8) = *((_DWORD *)v7 + 2);
        }
        while ( v61 - 12 != v39 );
        v23 = v78[0];
        v22 = 1LL;
      }
      if ( (unsigned __int64)v83 > 1 )
      {
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v74, (__int64)v6, v36);
        v72 = v74;
        v73 = v75;
        stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v72, v36);
        v74 = v72;
        v75 = v73;
        std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
          &v76,
          &v6[12 * v35],
          &v6[12 * v36 - 12],
          &v74);
        v22 = 1LL;
      }
      v87 += 12;
      v40 = 3 * v35;
      *(_QWORD *)&v6[4 * v40] = *(_QWORD *)v24;
      *(_DWORD *)&v6[4 * v40 + 8] = *(_DWORD *)(v24 + 8);
      v7 = v87;
      v6 = v86;
    }
    v24 += 16LL;
    v19 = 0xAAAAAAAAAAAAAAABuLL;
  }
  v25 = 0xAAAAAAAAAAAAAAABuLL * ((v7 - v6) >> 2);
  if ( v25 == -1LL || !v6 && v25 )
    goto LABEL_42;
  *(_QWORD *)&v83 = v25;
  v79 = *(_OWORD *)v79;
  *((_QWORD *)&v83 + 1) = v6;
  CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    &v79,
    &v83,
    v80[0]);
  v26 = v87;
  v27 = v86;
  v22 = 0xAAAAAAAAAAAAAAABuLL * ((v87 - v86) >> 2);
  if ( v22 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v74, (__int64)v86, v22);
    v27 = v86;
    v26 = &v87[-12 * v22];
    v87 = v26;
  }
  v19 = (__int64)v81;
  v28 = *((_QWORD *)v81 + 24);
  v29 = *((_QWORD *)v81 + 23);
  v80[0] = v28;
  while ( v29 != v28 )
  {
    if ( !*(_DWORD *)(v29 + 12) )
    {
      v30 = 0xAAAAAAAAAAAAAAABuLL * ((v26 - v27) >> 2);
      if ( !(0xAAAAAAAAAAAAAAABuLL * ((v88 - v26) >> 2)) )
      {
        if ( v30 + 1 < v30 )
          goto LABEL_69;
        v69 = detail::liberal_expansion_policy::expand(
                (detail::liberal_expansion_policy *)v19,
                0xAAAAAAAAAAAAAAABuLL * ((v88 - v27) >> 2),
                v30 + 1);
        v70 = (char *)operator new[](saturated_mul(v69, 0xCuLL));
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(
          &v74,
          (__int64)v70,
          0xAAAAAAAAAAAAAAABuLL * ((v26 - v27) >> 2));
        v76 = v74;
        v77 = v75;
        std::uninitialized_move<std::move_iterator<CoordMap::RampPair *>,stdext::checked_array_iterator<CoordMap::RampPair *>>(
          &v74,
          v86,
          v87,
          &v76,
          v72,
          *((_QWORD *)&v72 + 1),
          v73);
        v71 = v86;
        v68 = v86 == v89;
        v86 = v70;
        if ( v68 )
          v71 = 0LL;
        operator delete(v71);
        v27 = v86;
        v26 = &v86[12 * v30];
        v87 = v26;
        v88 = &v86[12 * v69];
      }
      v31 = 0xAAAAAAAAAAAAAAABuLL * ((v26 - v27) >> 2);
      *(_QWORD *)&v79 = v31 - v30;
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(
        &v83,
        (__int64)&v27[4 * ((v26 - v27) >> 2)],
        1LL);
      v72 = v83;
      v73 = v84;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v72, v32);
      v33 = v31 - v30;
      v76 = v72;
      if ( v31 - v30 > 1 )
        v33 = 1LL;
      v77 = v73;
      v34 = &v26[-12 * v33];
      if ( v26 != v34 )
      {
        do
        {
          v63 = v26;
          v26 -= 12;
          stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v76);
          v64 = stdext::checked_array_iterator<CoordMap::RampPair *>::operator->(&v76);
          *(_QWORD *)v64 = *(_QWORD *)v26;
          *(_DWORD *)(v64 + 8) = *((_DWORD *)v26 + 2);
        }
        while ( v63 - 12 != v34 );
        v28 = v80[0];
      }
      if ( (unsigned __int64)v79 > 1 )
      {
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v74, (__int64)v27, v31);
        v72 = v74;
        v73 = v75;
        stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v72, v31);
        v74 = v72;
        v75 = v73;
        std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
          &v76,
          &v27[12 * v30],
          &v27[12 * v31 - 12],
          &v74);
      }
      v87 += 12;
      v19 = 3 * v30;
      *(_QWORD *)&v27[4 * v19] = *(_QWORD *)v29;
      *(_DWORD *)&v27[4 * v19 + 8] = *(_DWORD *)(v29 + 8);
      v26 = v87;
      v27 = v86;
    }
    v29 += 16LL;
  }
  v41 = 0xAAAAAAAAAAAAAAABuLL * ((v26 - v27) >> 2);
  if ( v41 == -1LL || !v27 && v41 )
  {
LABEL_42:
    ((void (__fastcall *)(__int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(v19, a2, v22);
    __debugbreak();
  }
  v80[0] = v41;
  v79 = *(_OWORD *)v82;
  v80[1] = v27;
  CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    &v79,
    v80,
    v85);
  v42 = 0xAAAAAAAAAAAAAAABuLL * ((v87 - v86) >> 2);
  if ( v42 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v74, (__int64)v86, v42);
    v87 -= 12 * v43;
  }
  return detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v86);
}
