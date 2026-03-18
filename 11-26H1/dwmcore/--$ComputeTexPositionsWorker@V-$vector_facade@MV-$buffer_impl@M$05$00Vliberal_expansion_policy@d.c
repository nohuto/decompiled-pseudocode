/*
 * XREFs of ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x18003C7F0
 * Callers:
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18003AFAC (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ?push_back@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBM@Z @ 0x18003CC14 (-push_back@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@de.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??A?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEBAAEBURampPair@CoordMap@@_K@Z @ 0x18019802C (--A-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEBAAEBURampPair@CoordMap@@_K@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAM@std@@V?$checked_array_iterator@PEAM@stdext@@@std@@YA?AV?$checked_array_iterator@PEAM@stdext@@V?$move_iterator@PEAM@0@0V12@@Z @ 0x180206F90 (--$uninitialized_move@V-$move_iterator@PEAM@std@@V-$checked_array_iterator@PEAM@stdext@@@std@@YA.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@Z @ 0x18020700C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA-A_.c)
 *     ??C?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@QEBAPEAW4Type@IRenderTarget@@XZ @ 0x18021FDBC (--C-$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@QEBAPEAW4Type@IRenderTarget@@XZ.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        unsigned __int64 a1,
        unsigned __int64 *a2,
        _QWORD *a3,
        float a4)
{
  _QWORD *v4; // r12
  unsigned __int64 v5; // r8
  unsigned __int64 *i; // r9
  __int64 result; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r15
  unsigned __int32 v11; // xmm9_4
  __int64 v12; // r10
  float v13; // xmm10_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  unsigned int **v16; // rsi
  unsigned __int64 v17; // r13
  unsigned int *v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int *v23; // rsi
  _DWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdi
  char *v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rax
  _DWORD *v31; // rbx
  _DWORD *j; // rdi
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rdi
  LPVOID v36; // rbx
  unsigned int *v37; // r8
  _QWORD *v38; // rdx
  _QWORD *v39; // rcx
  _QWORD *v40; // rcx
  __int64 v41[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v42; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v43; // [rsp+48h] [rbp-C0h]
  __int128 v44; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+68h] [rbp-A0h]
  __int64 v46; // [rsp+78h] [rbp-90h]
  __int128 v47; // [rsp+88h] [rbp-80h] BYREF
  __int64 v48; // [rsp+98h] [rbp-70h]
  __int64 v49; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v50; // [rsp+B8h] [rbp-50h]
  unsigned __int64 *v51; // [rsp+158h] [rbp+50h]
  unsigned __int64 *v52; // [rsp+160h] [rbp+58h] BYREF
  _QWORD *v53; // [rsp+168h] [rbp+60h]

  v53 = a3;
  v52 = a2;
  v51 = (unsigned __int64 *)a1;
  v4 = a3;
  v5 = *a2;
  v50 = v5;
  i = a2;
  result = a1;
  if ( v5 )
  {
    v8 = 0LL;
    v9 = *(_QWORD *)a1;
    v10 = 0LL;
    if ( *(_QWORD *)a1 )
    {
      v11 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
      while ( 1 )
      {
        if ( v10 >= v9 )
          goto LABEL_30;
        v12 = *(_QWORD *)(result + 8);
        v13 = 0.0;
        a1 = 12 * v8;
        v14 = *(float *)(v12 + 4 * v10);
        while ( 1 )
        {
          if ( v8 >= v5 )
            goto LABEL_11;
          a2 = (unsigned __int64 *)i[1];
          v46 = *(unsigned __int64 *)((char *)a2 + a1);
          v15 = *(float *)&v46;
          if ( a4 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - *(float *)&v46) & v11) )
          {
            v13 = *((float *)&v46 + 1);
            if ( v10 )
            {
              if ( v10 - 1 < v9 )
              {
                if ( a4 < COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - *(float *)(v12 + 4 * v10 - 4)) & v11) )
                  goto LABEL_11;
                goto LABEL_24;
              }
            }
            else
            {
LABEL_24:
              a1 = v8 + 1;
              if ( v8 + 1 >= v5 )
                goto LABEL_29;
              for ( i = (unsigned __int64 *)((char *)a2 + 12 * v8 + 12); ; i = (unsigned __int64 *)((char *)i + 12) )
              {
                if ( a1 >= v5 )
                  goto LABEL_30;
                if ( a4 < COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)i - v14) & v11) )
                  break;
                ++v8;
                ++a1;
              }
              if ( v8 < v5 )
              {
LABEL_29:
                v13 = *((float *)a2 + 3 * v8 + 2);
                goto LABEL_11;
              }
            }
LABEL_30:
            ((void (__fastcall *)(unsigned __int64, unsigned __int64 *, unsigned __int64, unsigned __int64 *))`gsl::details::get_terminate_handler'::`2'::handler)(
              a1,
              a2,
              v5,
              i);
            __debugbreak();
          }
          if ( *(float *)&v46 > v14 )
            break;
          ++v8;
          a1 += 12LL;
        }
        v33 = 0LL;
        if ( v8 )
          v33 = v8 - 1;
        v34 = gsl::span<CoordMap::RampPair const,-1>::operator[](i, v33);
        v49 = *(_QWORD *)v34;
        v13 = (float)((float)(1.0 - (float)((float)(v14 - *(float *)&v49) / (float)(v15 - *(float *)&v49)))
                    * *(float *)(v34 + 8))
            + (float)((float)((float)(v14 - *(float *)&v49) / (float)(v15 - *(float *)&v49)) * *((float *)&v46 + 1));
LABEL_11:
        v16 = (unsigned int **)(v4 + 1);
        v17 = (__int64)(v4[1] - *v4) >> 2;
        if ( (__int64)(v4[2] - v4[1]) >> 2 )
        {
          ++v4;
          goto LABEL_13;
        }
        if ( v17 + 1 < v17 )
        {
          std::_Xoverflow_error("overflow");
          __debugbreak();
          goto LABEL_34;
        }
        v35 = detail::liberal_expansion_policy::expand(
                (detail::liberal_expansion_policy *)a1,
                (__int64)(v4[2] - *v4) >> 2,
                v17 + 1);
        v36 = operator new[](saturated_mul(v35, 4uLL));
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v47, (__int64)v36, v17);
        v37 = *v16;
        v38 = (_QWORD *)*v4;
        v42 = v47;
        v43 = v48;
        ((void (__fastcall *)(__int128 *, _QWORD *, unsigned int *, __int128 *, __int64, __int64))std::uninitialized_move<std::move_iterator<float *>,stdext::checked_array_iterator<float *>>)(
          &v47,
          v38,
          v37,
          &v42,
          v41[0],
          v41[1]);
        v39 = (_QWORD *)*v4;
        *v4 = v36;
        v41[0] = 0LL;
        if ( v39 == v4 + 3 )
          v39 = 0LL;
        operator delete(v39);
        v40 = (_QWORD *)*v4;
        *v16 = (unsigned int *)(*v4 + 4 * v17);
        v4[2] = (char *)v40 + 4 * v35;
        std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(v41);
        ++v4;
LABEL_13:
        v18 = *v16;
        v19 = (__int64)*v16 - *v53;
        v41[0] = *v53;
        v49 = v19 >> 2;
        v20 = (v19 >> 2) - v17;
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v44, v41[0] + 4 * (v19 >> 2), 1LL);
        v42 = v44;
        v43 = v45;
        stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v42, 1LL);
        v21 = v20;
        if ( v20 > 1 )
          v21 = 1LL;
        v47 = v42;
        v48 = v43;
        v22 = 4 * v21;
        v23 = &v18[v22 / 0xFFFFFFFFFFFFFFFCuLL];
        if ( v18 != &v18[v22 / 0xFFFFFFFFFFFFFFFCuLL] )
        {
          do
          {
            --v18;
            stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v47);
            v24 = (_DWORD *)stdext::checked_array_iterator<enum IRenderTarget::Type *>::operator->(&v47);
            a1 = *v18;
            *v24 = a1;
          }
          while ( v18 != v23 );
          v4 = v53 + 1;
        }
        if ( v20 > 1 )
        {
LABEL_34:
          v26 = v49;
          v27 = v41[0];
          stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v44, v41[0], v49);
          v42 = v44;
          v43 = v45;
          stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v42, v26);
          v28 = (char *)(v27 + 4 * v17);
          v44 = v42;
          v45 = v43;
          v29 = v27 - 4 + 4 * v26;
          v30 = std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(
                  &v44,
                  -((v29 - (__int64)v28) >> 2));
          memmove_0(&v28[v30 - v29], v28, v29 - (_QWORD)v28);
        }
        v25 = v41[0];
        ++v10;
        *v4 += 4LL;
        *(float *)(v25 + 4 * v17) = v13;
        result = (__int64)v51;
        v9 = *v51;
        if ( v10 >= *v51 )
          return result;
        v5 = v50;
        i = v52;
        v4 = v53;
      }
    }
  }
  else
  {
    v31 = *(_DWORD **)(a1 + 8);
    result = *(_QWORD *)a1;
    for ( j = &v31[*(_QWORD *)a1]; v31 != j; ++v31 )
    {
      LODWORD(v52) = *v31;
      result = detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::push_back(
                 v4,
                 &v52,
                 v5,
                 i);
    }
  }
  return result;
}
