/*
 * XREFs of ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800BA030
 * Callers:
 *     <none>
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@@std@@@std@@QEAA@XZ @ 0x18002D63C (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UtagCOMPOSITION_TARGET_ID_AND_STATS@@@detail@@U-$d.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x18002D6AC (--$uninitialized_move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800DDD80 (-Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ??C?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ @ 0x180142FD8 (--C-$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180203284 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRectangleGeometry::GetShapeDataCore(
        CRectangleGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  float *v4; // rbx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  char v7; // al
  float v8; // xmm6_4
  float v9; // xmm8_4
  float v10; // xmm7_4
  float v11; // xmm9_4
  _DWORD *Value; // rbx
  int v13; // ecx
  _QWORD *v14; // rsi
  HANDLE v15; // rax
  __int64 result; // rax
  char v17; // dl
  bool v18; // al
  DWORD v19; // ecx
  int v20; // ecx
  HANDLE v21; // rax
  __int64 v22; // r8
  __int64 v23; // r8
  detail::liberal_expansion_policy *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int64 v28; // r14
  _DWORD *v29; // rdi
  int v30; // ecx
  HANDLE v31; // rax
  struct CRoundedRectangleShape::SharedData *v32; // rax
  HANDLE ProcessHeap; // rax
  CThreadContext *v34; // rax
  CThreadContext *v35; // rax
  __int64 v36; // r15
  _OWORD *v37; // rbx
  __int64 v38; // rdi
  unsigned __int64 v39; // r13
  unsigned int v40; // r8d
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // xmm6_8
  signed __int64 v44; // rbx
  _OWORD *v45; // r14
  HANDLE v46; // rax
  CThreadContext *v47; // rax
  CThreadContext *v48; // rax
  CThreadContext *v49; // rax
  CThreadContext *v50; // rax
  unsigned __int64 v51; // rdi
  LPVOID v52; // rbx
  __int64 v53; // r8
  void *v54; // rdx
  _QWORD *v55; // rcx
  __int64 v56; // rdi
  _QWORD v57[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v58; // [rsp+48h] [rbp-C0h]
  _QWORD v59[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+68h] [rbp-A0h]
  __int128 v61; // [rsp+78h] [rbp-90h]
  _OWORD v62[3]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v63; // [rsp+B8h] [rbp-50h]
  void *retaddr; // [rsp+140h] [rbp+38h]
  void *v65; // [rsp+148h] [rbp+40h] BYREF
  unsigned __int64 v66; // [rsp+150h] [rbp+48h]
  __int64 v67; // [rsp+160h] [rbp+58h]

  v4 = (float *)((char *)this + 136);
  LODWORD(v63) = 0;
  if ( a2 )
  {
    v5 = *(_OWORD *)((char *)this + 152);
    v62[0] = *(_OWORD *)v4;
    v6 = *(_OWORD *)((char *)this + 168);
    v62[1] = v5;
    *(_QWORD *)&v5 = *((_QWORD *)this + 23);
    v4 = (float *)v62;
    v62[2] = v6;
    *(float *)&v6 = a2->width - *((float *)this + 36);
    v63 = v5;
    *((_QWORD *)&v62[0] + 1) = __PAIR64__(a2->height - *((float *)this + 37), v6);
  }
  v7 = *((_BYTE *)this + 188);
  v8 = *v4;
  v9 = v4[1];
  v10 = v4[2];
  if ( v7 )
  {
    v10 = v10 + v8;
    v11 = v9 + v4[3];
  }
  else
  {
    v11 = v4[3];
  }
  if ( v10 <= v8 || v11 <= v9 )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      ProcessHeap = GetProcessHeap();
      v34 = (CThreadContext *)HeapAlloc(ProcessHeap, 0, 0x1C0uLL);
      if ( !v34 || (v35 = CThreadContext::CThreadContext(v34), (Value = v35) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v35);
    }
    v13 = Value[13];
    v14 = 0LL;
    if ( v13 )
    {
      v14 = (_QWORD *)*((_QWORD *)Value + 7);
      *((_QWORD *)Value + 7) = *v14;
      Value[13] = v13 - 1;
    }
    if ( !v14 )
    {
      v15 = GetProcessHeap();
      v14 = HeapAlloc(v15, 0, 0x40uLL);
      if ( !v14 )
        ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    v14[1] = 0LL;
    *v14 = &CRectanglesShape::`vftable';
    v14[2] = v14 + 5;
    v14[3] = v14 + 5;
    v14[4] = v14 + 7;
    v14[7] = 0LL;
    goto LABEL_13;
  }
  v17 = *((float *)this + 38) > 0.0 && *((float *)this + 39) > 0.0;
  if ( !v7 )
  {
    v18 = *((float *)this + 40) > 0.0 && *((float *)this + 41) > 0.0
       || *((float *)this + 44) > 0.0 && *((float *)this + 45) > 0.0
       || *((float *)this + 42) > 0.0 && *((float *)this + 43) > 0.0;
    v17 |= v18;
  }
  v19 = CThreadContext::s_dwTlsIndex;
  if ( v17 )
    goto LABEL_37;
  v4 = (float *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !v4 )
  {
    v46 = GetProcessHeap();
    v47 = (CThreadContext *)HeapAlloc(v46, 0, 0x1C0uLL);
    if ( !v47 || (v48 = CThreadContext::CThreadContext(v47), (v4 = (float *)v48) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v48);
  }
  v20 = *((_DWORD *)v4 + 13);
  v14 = 0LL;
  if ( v20 )
  {
    v14 = (_QWORD *)*((_QWORD *)v4 + 7);
    *((_QWORD *)v4 + 7) = *v14;
    *((_DWORD *)v4 + 13) = v20 - 1;
  }
  if ( !v14 )
  {
    v21 = GetProcessHeap();
    v14 = HeapAlloc(v21, 0, 0x40uLL);
    if ( !v14 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
  }
  v14[1] = 0LL;
  *v14 = &CRectanglesShape::`vftable';
  v14[4] = v14 + 7;
  v14[2] = v14 + 5;
  v14[3] = v14 + 5;
  v14[7] = 0LL;
  v22 = (__int64)(v14[3] - (_QWORD)(v14 + 5)) >> 4;
  if ( v22 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v57[1], (__int64)(v14 + 5), v22);
    v14[3] += -16 * v23;
  }
  v24 = (detail::liberal_expansion_policy *)v14[7];
  if ( v24 )
  {
    (*(void (__fastcall **)(detail::liberal_expansion_policy *))(*(_QWORD *)v24 + 16LL))(v24);
    v14[7] = 0LL;
  }
  v25 = v14[4];
  v26 = v14[2];
  v27 = (v25 - v14[3]) >> 4;
  v28 = (v14[3] - v26) >> 4;
  *(_QWORD *)&v61 = __PAIR64__(LODWORD(v9), LODWORD(v8));
  *((_QWORD *)&v61 + 1) = __PAIR64__(LODWORD(v11), LODWORD(v10));
  v66 = v28;
  if ( !v27 )
  {
    if ( v28 + 1 < v28 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
LABEL_37:
      v29 = TlsGetValue(v19);
      if ( !v29 )
      {
        v49 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
        if ( !v49 || (v50 = CThreadContext::CThreadContext(v49), (v29 = v50) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v50);
      }
      v30 = v29[17];
      v14 = 0LL;
      if ( v30 )
      {
        v14 = (_QWORD *)*((_QWORD *)v29 + 9);
        *((_QWORD *)v29 + 9) = *v14;
        v29[17] = v30 - 1;
      }
      if ( !v14 )
      {
        v31 = GetProcessHeap();
        v14 = HeapAlloc(v31, 0, 0x18uLL);
        if ( !v14 )
          ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      v14[1] = 0LL;
      *v14 = &CRoundedRectangleShape::`vftable';
      v32 = CRoundedRectangleShape::SharedData::Create((const struct CRoundedRectangleGeometryData *)v4);
      v14[2] = v32;
      if ( v32 )
        (**(void (__fastcall ***)(struct CRoundedRectangleShape::SharedData *))v32)(v32);
      goto LABEL_13;
    }
    v51 = detail::liberal_expansion_policy::expand(v24, (v25 - v26) >> 4, v28 + 1);
    v52 = operator new[](saturated_mul(v51, 0x10uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v57[1], (__int64)v52, v28);
    v53 = v14[3];
    v54 = (void *)v14[2];
    *(_OWORD *)&v59[1] = *(_OWORD *)&v57[1];
    v60 = v58;
    std::uninitialized_move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
      (__int64)&v57[1],
      v54,
      v53,
      &v59[1]);
    v55 = (_QWORD *)v14[2];
    v65 = 0LL;
    v14[2] = v52;
    if ( v55 == v14 + 5 )
      v55 = 0LL;
    operator delete(v55);
    v56 = v14[2] + 16 * v51;
    v14[3] = v14[2] + 16 * v28;
    v14[4] = v56;
    std::unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>::~unique_ptr<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0],std::default_delete<detail::aligned_storage_for<tagCOMPOSITION_TARGET_ID_AND_STATS> [0]>>(&v65);
  }
  v36 = v14[2];
  v37 = (_OWORD *)v14[3];
  v38 = ((__int64)v37 - v36) >> 4;
  v39 = v38 - v28;
  v67 = 16 * v38;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v57[1], 16 * v38 + v36, 1LL);
  *(_OWORD *)&v59[1] = *(_OWORD *)&v57[1];
  v60 = v58;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v59[1], v40);
  v41 = v38 - v28;
  if ( v38 - v28 > 1 )
    v41 = 1LL;
  *(_OWORD *)&v57[1] = *(_OWORD *)&v59[1];
  v42 = 16 * v41;
  v58 = v60;
  if ( v37 != &v37[v42 / 0xFFFFFFFFFFFFFFF0uLL] )
  {
    v45 = &v37[v42 / 0xFFFFFFFFFFFFFFF0uLL];
    do
    {
      --v37;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v57[1]);
      *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v57[1]) = *v37;
    }
    while ( v37 != v45 );
    v28 = v66;
  }
  if ( v39 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v57[1], v36, v38);
    *(_OWORD *)&v59[1] = *(_OWORD *)&v57[1];
    v60 = v58;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v59[1], v38);
    v43 = v59[1];
    v58 = v60;
    *(_OWORD *)&v57[1] = *(_OWORD *)&v59[1];
    v44 = v67 - 16 * v28 - 16;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v57[1], -(v44 >> 4));
    memmove_0((void *)(v43 + 16 * v60 - v44), (const void *)(v36 + 16 * v28), v44);
  }
  v14[3] += 16LL;
  *(_OWORD *)(v36 + 16 * v28) = v61;
LABEL_13:
  if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
    (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
  result = 0LL;
  *(_QWORD *)a3 = v14;
  *((_BYTE *)a3 + 8) = 1;
  return result;
}
