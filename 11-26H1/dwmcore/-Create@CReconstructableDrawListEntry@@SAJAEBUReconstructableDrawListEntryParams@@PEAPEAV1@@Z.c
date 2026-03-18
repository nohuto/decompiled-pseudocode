/*
 * XREFs of ?Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z @ 0x18000FC50
 * Callers:
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x18000E850 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 * Callees:
 *     PrimitiveStorage::Alloc_16_ @ 0x1800094C0 (PrimitiveStorage--Alloc_16_.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014460 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWarpRenderingEffect@@@Z @ 0x18009D688 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWarpRenderingEffect@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCReconstructableDrawListEntry_UVx0@@@Z @ 0x18009DA84 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCReconstructableDrawListEntry_UVx0@@@Z.c)
 *     ?Alloc@CObjectCache@@QEAAPEAX_K@Z @ 0x18009E490 (-Alloc@CObjectCache@@QEAAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCWarpRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180184E90 (--1-$com_ptr_t@VCWarpRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CReconstructableDrawListEntry@@IEAA@AEBUReconstructableDrawListEntryParams@@PEAVCWarpRenderingEffect@@$$QEAV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@V?$span@$$CBUPrimitiveUVDesc@@$0?0@gsl@@@Z @ 0x180185630 (--0CReconstructableDrawListEntry@@IEAA@AEBUReconstructableDrawListEntryParams@@PEAVCWarpRenderin.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAPEAX_K@Z @ 0x180188AA8 (-Alloc@-$CThreadLocalObjectCache@VCReconstructableDrawListEntry_UVx2@@V1@@@SAPEAX_K@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CReconstructableDrawListEntry::Create(
        const struct ReconstructableDrawListEntryParams *a1,
        struct CReconstructableDrawListEntry **a2)
{
  __int64 v4; // rax
  __m128 v5; // xmm7
  bool v6; // zf
  volatile signed __int32 *v7; // r14
  unsigned int v8; // eax
  char *v9; // rdi
  char v10; // r12
  int v11; // r15d
  char *v12; // rax
  struct CReconstructableDrawListEntry_UVx0 *v13; // rcx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r12
  __int64 v16; // rax
  _QWORD *v17; // rdi
  struct CReconstructableDrawListEntry_UVx0 *v18; // rax
  void (__fastcall ***v19)(_QWORD); // rcx
  __int64 v20; // rcx
  int v21; // ecx
  _OWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // rcx
  int v29; // xmm1_4
  int v30; // xmm0_4
  int v31; // xmm1_4
  int v32; // xmm0_4
  __int64 v33; // rcx
  float *v34; // rax
  float v35; // xmm5_4
  float v36; // xmm4_4
  float v37; // xmm6_4
  float v38; // xmm7_4
  float v39; // xmm3_4
  float v40; // xmm9_4
  float v41; // xmm8_4
  float v42; // xmm10_4
  float v43; // xmm11_4
  float v44; // xmm13_4
  float v45; // xmm15_4
  float v46; // xmm14_4
  float v47; // xmm12_4
  float v48; // xmm3_4
  float v49; // xmm0_4
  float v50; // xmm2_4
  float v51; // xmm4_4
  float v52; // xmm3_4
  float v53; // xmm1_4
  float v54; // xmm6_4
  float v55; // xmm2_4
  float v56; // xmm5_4
  float v57; // xmm3_4
  float v58; // xmm7_4
  float v59; // xmm1_4
  float v60; // xmm2_4
  float v61; // xmm0_4
  void **v62; // rax
  void (__fastcall *v63)(_QWORD *, __int64, __int64); // rax
  struct CReconstructableDrawListEntry_UVx0 *v64; // rcx
  CObjectCache *ObjectCache; // rax
  volatile signed __int32 *v67; // rax
  void (__fastcall ***v68)(_QWORD); // rdx
  __m128 v69; // xmm11
  __m128 v70; // xmm7
  float v71; // xmm10_4
  float v72; // xmm2_4
  float v73; // xmm6_4
  __m128 v74; // xmm7
  __m128 v75; // xmm7
  __m128 v76; // xmm7
  CObjectCache *v77; // rax
  int v78; // [rsp+28h] [rbp-E0h]
  struct CReconstructableDrawListEntry_UVx0 *v79; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v80; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v81; // [rsp+58h] [rbp-B0h]
  volatile signed __int32 *v82; // [rsp+60h] [rbp-A8h] BYREF
  float v83; // [rsp+68h] [rbp-A0h]
  float v84; // [rsp+6Ch] [rbp-9Ch]
  _DWORD v85[12]; // [rsp+70h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]
  _QWORD *v87; // [rsp+178h] [rbp+70h] BYREF
  float v88; // [rsp+188h] [rbp+80h]
  float v89; // [rsp+190h] [rbp+88h]

  v4 = *((_QWORD *)a1 + 9);
  if ( v4 )
  {
    v69 = (__m128)*(unsigned int *)(v4 + 8);
    v69.m128_f32[0] = (float)((float)(v69.m128_f32[0] * *((float *)a1 + 23))
                            + (float)(*(float *)v4 * *((float *)a1 + 22)))
                    + *(float *)(v4 + 16);
    v70 = v69;
    v71 = (float)((float)(*(float *)(v4 + 12) * *((float *)a1 + 23)) + (float)(*(float *)(v4 + 4) * *((float *)a1 + 22)))
        + *(float *)(v4 + 20);
    v72 = (float)((float)(*((float *)a1 + 25) * *(float *)(v4 + 8)) + (float)(*((float *)a1 + 24) * *(float *)v4))
        + *(float *)(v4 + 16);
    v73 = (float)((float)(*((float *)a1 + 25) * *(float *)(v4 + 12)) + (float)(*((float *)a1 + 24) * *(float *)(v4 + 4)))
        + *(float *)(v4 + 20);
    v70.m128_f32[0] = fminf(v69.m128_f32[0], v72);
    v74 = _mm_shuffle_ps(v70, v70, 225);
    v74.m128_f32[0] = fminf(v71, v73);
    v75 = _mm_shuffle_ps(v74, v74, 198);
    v75.m128_f32[0] = fmaxf(v69.m128_f32[0], v72);
    v76 = _mm_shuffle_ps(v75, v75, 39);
    v76.m128_f32[0] = fmaxf(v71, v73);
    v5 = _mm_shuffle_ps(v76, v76, 57);
    v80 = v5;
  }
  else
  {
    v5 = *(__m128 *)((char *)a1 + 88);
  }
  v6 = (*((_DWORD *)a1 + 2) & 0x400) == 0;
  v7 = 0LL;
  v82 = 0LL;
  if ( !v6 )
  {
    ObjectCache = CThreadContext::GetObjectCache(a1);
    v67 = (volatile signed __int32 *)CObjectCache::Alloc(ObjectCache, 0x18uLL);
    v7 = v67;
    if ( !v67 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\reconstructabledrawlistentry.cpp",
        (const char *)0x8007000ELL,
        v78);
      wil::com_ptr_t<CWarpRenderingEffect,wil::err_returncode_policy>::~com_ptr_t<CWarpRenderingEffect,wil::err_returncode_policy>(&v82);
      return 2147942414LL;
    }
    CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>(
      v67,
      *(_QWORD *)a1);
    *(_QWORD *)v7 = &CWarpRenderingEffect::`vftable';
    *((_QWORD *)v7 + 2) = v68;
    if ( v68 )
      (**v68)(v68);
    v82 = v7;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v7 + 2));
  }
  v8 = *((_DWORD *)a1 + 12);
  v9 = 0LL;
  v10 = *((_BYTE *)a1 + 108);
  v11 = 0;
  v79 = 0LL;
  v80.m128_u64[0] = 0LL;
  v80.m128_u64[1] = v8;
  v12 = PrimitiveStorage::Alloc_16_((unsigned int *)&v80);
  if ( v12 )
  {
    v12[80] = 0;
    v9 = v12;
    *(__m128 *)(v12 + 56) = v5;
    v12[81] = v10;
    *((_DWORD *)v12 + 18) = 1065353216;
    *((_DWORD *)v12 + 19) = 1065353216;
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6Cu, 0LL);
  }
  v13 = v79;
  v79 = (struct CReconstructableDrawListEntry_UVx0 *)v9;
  if ( v13 )
    (**(void (__fastcall ***)(struct CReconstructableDrawListEntry_UVx0 *, __int64))v13)(v13, 1LL);
  if ( v11 >= 0 )
  {
    v14 = *((_QWORD *)a1 + 7);
    v15 = *((_QWORD *)a1 + 8);
    if ( v14 >= *((_QWORD *)a1 + 6) )
      v14 = *((_QWORD *)a1 + 6);
    if ( v14 != -1LL )
    {
      if ( v15 )
      {
        v87 = 0LL;
        if ( v14 )
        {
          if ( v14 <= 2 )
          {
            v16 = CThreadLocalObjectCache<CReconstructableDrawListEntry_UVx2,CReconstructableDrawListEntry_UVx2>::Alloc();
            v17 = (_QWORD *)v16;
            if ( v16 )
            {
              *(_DWORD *)(v16 + 8) = 0;
              *(_QWORD *)v16 = &CDrawListEntry::`vftable';
              v18 = v79;
              v79 = 0LL;
              v17[2] = v18;
              v19 = *(void (__fastcall ****)(_QWORD))a1;
              v17[3] = *(_QWORD *)a1;
              if ( v19 )
                (**v19)(v19);
              v20 = *((_QWORD *)a1 + 2);
              v17[4] = v20;
              if ( v20 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
              v17[5] = *((_QWORD *)a1 + 3);
              *((_DWORD *)v17 + 12) = 1065353216;
              *((_DWORD *)v17 + 13) = 1065353216;
              *((_DWORD *)v17 + 14) = 1065353216;
              *((_DWORD *)v17 + 15) = 1065353216;
              v21 = *((_DWORD *)a1 + 2);
              *((_DWORD *)v17 + 16) = v21;
              v22 = (_OWORD *)*((_QWORD *)a1 + 4);
              if ( v22 )
                *((_OWORD *)v17 + 3) = *v22;
              v23 = (_QWORD *)*((_QWORD *)a1 + 5);
              if ( v23 )
              {
                *(_QWORD *)((char *)v17 + 68) = *v23;
                *((_DWORD *)v17 + 16) = v21 | 0x100;
              }
              *v17 = &CReconstructableDrawListEntry::`vftable';
              v17[10] = v7;
              if ( v7 && _InterlockedAdd(v7 + 2, 1u) <= 0 )
                wil::details::in1diag3::Log_Hr(
                  retaddr,
                  (void *)0x18,
                  (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                  (const char *)0x8007029CLL,
                  v78);
              v24 = v17[3];
              v17[11] = v14;
              *((_DWORD *)v17 + 24) = *((_DWORD *)a1 + 26);
              *((_BYTE *)v17 + 100) = *((_BYTE *)a1 + 109);
              *((_BYTE *)v17 + 101) = *((_BYTE *)a1 + 110);
              v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 24LL))(v24);
              v27 = v25;
              if ( v25 )
              {
                v28 = (_DWORD *)*((_QWORD *)a1 + 10);
                if ( v28 )
                {
                  v29 = v28[1];
                  v85[0] = *v28;
                  v30 = v28[3];
                  v85[1] = v29;
                  v85[3] = v28[2];
                  v31 = v28[4];
                  v85[4] = v30;
                  v32 = v28[5];
                  v85[6] = v31;
                  v85[7] = v32;
                  v85[2] = 0;
                  v85[5] = 0;
                  v85[8] = 1065353216;
                }
                LODWORD(v26) = 0;
                do
                {
                  if ( _bittest((const int *)&v27, v26) )
                  {
                    if ( (unsigned int)v26 >= v14 )
                      goto LABEL_50;
                    v33 = 56LL * (unsigned int)v26;
                    v34 = (float *)v85;
                    if ( !*((_QWORD *)a1 + 10) )
                      v34 = 0LL;
                    if ( v34 )
                    {
                      v35 = *v34;
                      v36 = v34[1];
                      v37 = v34[2];
                      v38 = v34[4];
                      v39 = *(float *)(v33 + v15 + 16);
                      v40 = v34[5];
                      v41 = v34[3];
                      v42 = *(float *)(v33 + v15);
                      v43 = *(float *)(v33 + v15 + 12);
                      v44 = *(float *)(v33 + v15 + 24);
                      v45 = *(float *)(v33 + v15 + 4);
                      v46 = v34[6];
                      v47 = v34[7];
                      LODWORD(v87) = *(_DWORD *)(v33 + v15 + 28);
                      LODWORD(v81) = *(_DWORD *)(v33 + v15 + 32);
                      v89 = *(float *)(v33 + v15 + 8);
                      v88 = *(float *)(v33 + v15 + 20);
                      v84 = v34[8];
                      v83 = v39;
                      v48 = (float)(v39 * v36) + (float)(v45 * v35);
                      v49 = v89 * v35;
                      *(float *)&v17[(unsigned __int64)v33 / 8 + 13] = (float)((float)(v43 * v36) + (float)(v42 * v35))
                                                                     + (float)(v44 * v37);
                      v50 = v88 * v36;
                      v51 = v83;
                      v52 = v48 + (float)(*(float *)&v87 * v37);
                      v53 = *(float *)&v81 * v37;
                      v54 = v88;
                      *((float *)&v17[(unsigned __int64)v33 / 8 + 13] + 1) = v52;
                      *(float *)&v17[(unsigned __int64)v33 / 8 + 14] = (float)(v50 + v49) + v53;
                      v55 = (float)(v51 * v38) + (float)(v45 * v41);
                      *((float *)&v17[(unsigned __int64)v33 / 8 + 14] + 1) = (float)((float)(v43 * v38)
                                                                                   + (float)(v42 * v41))
                                                                           + (float)(v44 * v40);
                      v56 = *(float *)&v87;
                      v57 = v54 * v38;
                      v58 = *(float *)&v81;
                      v59 = *(float *)&v81 * v40;
                      *(float *)&v17[(unsigned __int64)v33 / 8 + 15] = v55 + (float)(*(float *)&v87 * v40);
                      v60 = v89;
                      v61 = v84;
                      *((float *)&v17[(unsigned __int64)v33 / 8 + 15] + 1) = (float)(v57 + (float)(v89 * v41)) + v59;
                      *(float *)&v17[(unsigned __int64)v33 / 8 + 16] = (float)((float)(v43 * v47) + (float)(v42 * v46))
                                                                     + (float)(v44 * v61);
                      *((float *)&v17[(unsigned __int64)v33 / 8 + 16] + 1) = (float)((float)(v51 * v47)
                                                                                   + (float)(v45 * v46))
                                                                           + (float)(v56 * v61);
                      *(float *)&v17[(unsigned __int64)v33 / 8 + 17] = (float)((float)(v54 * v47) + (float)(v60 * v46))
                                                                     + (float)(v58 * v61);
                    }
                    else
                    {
                      *(_OWORD *)&v17[(unsigned __int64)v33 / 8 + 13] = *(_OWORD *)(v33 + v15);
                      *(_OWORD *)&v17[(unsigned __int64)v33 / 8 + 15] = *(_OWORD *)(v33 + v15 + 16);
                      LODWORD(v17[(unsigned __int64)v33 / 8 + 17]) = *(_DWORD *)(v33 + v15 + 32);
                    }
                    BYTE4(v17[(unsigned __int64)v33 / 8 + 19]) = *(_BYTE *)(v33 + v15 + 52);
                    if ( *(_BYTE *)(v33 + v15 + 52) )
                      *(_OWORD *)((char *)&v17[(unsigned __int64)v33 / 8 + 17] + 4) = *(_OWORD *)(v33 + v15 + 36);
                  }
                  v26 = (unsigned int)(v26 + 1);
                }
                while ( (unsigned int)v26 < v14 );
              }
              v62 = &CReconstructableDrawListEntry_UVx2::`vftable';
              goto LABEL_41;
            }
LABEL_53:
            v17 = 0LL;
LABEL_42:
            if ( v17 )
            {
              v64 = v79;
              *a2 = (struct CReconstructableDrawListEntry *)v17;
              if ( v64 )
                (**(void (__fastcall ***)(struct CReconstructableDrawListEntry_UVx0 *, __int64))v64)(v64, 1LL);
              wil::com_ptr_t<CWarpRenderingEffect,wil::err_returncode_policy>::~com_ptr_t<CWarpRenderingEffect,wil::err_returncode_policy>(&v82);
              return 0LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x8C,
                (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\reconstructabledrawlistentry.cpp",
                (const char *)0x8007000ELL,
                v78);
              Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v87);
              std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v79);
              wil::com_ptr_t<CWarpRenderingEffect,wil::err_returncode_policy>::~com_ptr_t<CWarpRenderingEffect,wil::err_returncode_policy>(&v82);
              return 2147942414LL;
            }
          }
          v17 = MIDL_user_allocate(56 * v14 + 104);
          if ( !v17 )
            goto LABEL_53;
          v80.m128_u64[0] = v14;
          v80.m128_u64[1] = v15;
          CReconstructableDrawListEntry::CReconstructableDrawListEntry(
            (_DWORD)v17,
            (_DWORD)a1,
            (_DWORD)v7,
            (unsigned int)&v79,
            (__int64)&v80);
          v62 = &CReconstructableDrawListEntry_UVxN::`vftable';
LABEL_41:
          *v17 = v62;
          v63 = (void (__fastcall *)(_QWORD *, __int64, __int64))*v62;
          v87 = v17;
          v63(v17, v26, v27);
          goto LABEL_42;
        }
LABEL_60:
        v77 = CThreadContext::GetObjectCache(v13);
        v17 = CObjectCache::Alloc(v77, 0x68uLL);
        if ( !v17 )
          goto LABEL_53;
        v80 = 0uLL;
        CReconstructableDrawListEntry::CReconstructableDrawListEntry(
          (_DWORD)v17,
          (_DWORD)a1,
          (_DWORD)v7,
          (unsigned int)&v79,
          (__int64)&v80);
        v62 = &CReconstructableDrawListEntry_UVx0::`vftable';
        goto LABEL_41;
      }
      if ( !v14 )
      {
        v87 = 0LL;
        goto LABEL_60;
      }
    }
LABEL_50:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6E,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\reconstructabledrawlistentry.cpp",
    (const char *)(unsigned int)v11,
    v78);
  if ( v79 )
    (**(void (__fastcall ***)(struct CReconstructableDrawListEntry_UVx0 *, __int64))v79)(v79, 1LL);
  wil::com_ptr_t<CWarpRenderingEffect,wil::err_returncode_policy>::~com_ptr_t<CWarpRenderingEffect,wil::err_returncode_policy>(&v82);
  return (unsigned int)v11;
}
