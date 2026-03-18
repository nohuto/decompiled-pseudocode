/*
 * XREFs of ?UpdateCapabilities@CRenderTargetManager@@AEAAXXZ @ 0x180175074
 * Callers:
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x180030310 (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180016450 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$vector_facade@U_LUID@@V?$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180054C0C (--1-$vector_facade@U_LUID@@V-$buffer_impl@U_LUID@@$01$00Vliberal_expansion_policy@detail@@@detai.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x1800F6FA0 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x1800FCA84 (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@_N@Z @ 0x180131D44 (-UpdateFeatureLevels@CDeviceManager@@SAXAEBV-$span@U_LUID@@$0-0@gsl@@_N@Z.c)
 *     ?push_back@?$vector_facade@PEAVICapabilitiesContributorTarget@@V?$buffer_impl@PEAVICapabilitiesContributorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAPEAVICapabilitiesContributorTarget@@@Z @ 0x180175048 (-push_back@-$vector_facade@PEAVICapabilitiesContributorTarget@@V-$buffer_impl@PEAVICapabilitiesC.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetManager::UpdateCapabilities(CRenderTargetManager *this)
{
  unsigned __int8 v1; // r13
  int v2; // r14d
  float v4; // xmm6_4
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  float v7; // xmm6_4
  int (__fastcall ****v8)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall ****v9)(_QWORD, GUID *, __int64 *); // rdi
  _QWORD *v10; // rbx
  _BYTE *v11; // r14
  _QWORD *v12; // rdi
  _BYTE *v13; // r8
  unsigned int v14; // r12d
  __int64 v15; // r8
  __int64 v16; // r14
  int v17; // ecx
  _DWORD *v18; // rax
  _DWORD *i; // rcx
  int (__fastcall ***v20)(__int64, GUID *, __int64 *); // r15
  float v21; // xmm0_4
  int (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v23; // r8
  RenderTargetInfo *v24; // rax
  CMILMatrix *v25; // rax
  int (__fastcall **v26)(__int64, GUID *, __int64 *); // rax
  __int64 v27; // r8
  __int64 v28; // [rsp+28h] [rbp-89h] BYREF
  __int64 v29[2]; // [rsp+30h] [rbp-81h] BYREF
  _BYTE v30[24]; // [rsp+40h] [rbp-71h] BYREF
  char v31[24]; // [rsp+58h] [rbp-59h] BYREF
  _BYTE *v32; // [rsp+70h] [rbp-41h] BYREF
  _BYTE *v33; // [rsp+78h] [rbp-39h]
  _BYTE **v34; // [rsp+80h] [rbp-31h]
  _BYTE v35[16]; // [rsp+88h] [rbp-29h] BYREF
  _BYTE *v36; // [rsp+98h] [rbp-19h] BYREF
  _BYTE *v37; // [rsp+A0h] [rbp-11h]
  __int64 *v38; // [rsp+A8h] [rbp-9h]
  _BYTE v39[32]; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v40; // [rsp+D0h] [rbp+1Fh] BYREF

  v1 = 0;
  v36 = v39;
  v2 = 0;
  v37 = v39;
  v4 = 0.0;
  v38 = &v40;
  *((_DWORD *)this + 181) = 1065353216;
  *((_DWORD *)this + 182) = 1065353216;
  v5 = (__int64 *)*((_QWORD *)this + 3);
  v6 = (__int64 *)*((_QWORD *)this + 4);
  while ( v5 != v6 )
  {
    v20 = (int (__fastcall ***)(__int64, GUID *, __int64 *))*v5;
    v21 = *(float *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*v5 + 8) + 24LL))(*v5 + 8, v30) + 16);
    if ( v21 != 0.0 )
    {
      v4 = v4 + v21;
      ++v2;
    }
    if ( ((unsigned __int8 (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*v20)[23])(v20) )
      v1 = 1;
    v28 = 0LL;
    v25 = (CMILMatrix *)((__int64 (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64 *)))(*v20)[8])(v20);
    CMILMatrix::Get2DScaleDimensions(v25, (float *)&v28, (float *)&v28 + 1);
    if ( *(float *)&v28 > *((float *)this + 181) && *((float *)&v28 + 1) > *((float *)this + 182) )
      *(_QWORD *)((char *)this + 724) = _mm_unpacklo_ps((__m128)(unsigned int)v28, (__m128)HIDWORD(v28)).m128_u64[0];
    v26 = *v20;
    v29[0] = 0LL;
    if ( (*v26)((__int64)v20, &GUID_3426b083_3cb1_4ffc_9ad5_931f482bb72e, v29) >= 0 )
    {
      v28 = v29[0];
      detail::vector_facade<ICapabilitiesContributorTarget *,detail::buffer_impl<ICapabilitiesContributorTarget *,4,1,detail::liberal_expansion_policy>>::push_back(
        (__int64 *)&v36,
        &v28,
        v27);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v29);
    ++v5;
  }
  if ( v2 )
    v7 = v4 / (float)v2;
  else
    v7 = FLOAT_1_0;
  *((float *)this + 183) = v7;
  *((_BYTE *)this + 751) = v2 != 0;
  v8 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 10);
  v9 = (int (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 11);
  while ( v8 != v9 )
  {
    v22 = *v8;
    v29[0] = 0LL;
    if ( (**v22)(v22, &GUID_3426b083_3cb1_4ffc_9ad5_931f482bb72e, v29) >= 0 )
    {
      v28 = v29[0];
      detail::vector_facade<ICapabilitiesContributorTarget *,detail::buffer_impl<ICapabilitiesContributorTarget *,4,1,detail::liberal_expansion_policy>>::push_back(
        (__int64 *)&v36,
        &v28,
        v23);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v29);
    ++v8;
  }
  v10 = v36;
  v11 = v35;
  v12 = v37;
  v13 = v35;
  v32 = v35;
  v33 = v35;
  v14 = 0;
  v34 = &v36;
  while ( v10 != v12 )
  {
    v16 = *v10;
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v10 + 40LL))(*v10, v29);
    v17 = LODWORD(v29[0]) * HIDWORD(v29[0]);
    if ( LODWORD(v29[0]) * HIDWORD(v29[0]) > v14 )
    {
      *((_QWORD *)this + 89) = v29[0];
      v14 = v17;
      v24 = (RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 24LL))(v16, v30);
      *((_DWORD *)this + 180) = RenderTargetInfo::IsHDR(v24) ? 8 : 4;
    }
    v18 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 24LL))(v16, v31);
    v11 = v32;
    v13 = v33;
    for ( i = v32; ; i += 2 )
    {
      if ( i == (_DWORD *)v33 )
        goto LABEL_21;
      if ( *i == *v18 && i[1] == v18[1] )
        break;
    }
    if ( i == (_DWORD *)v33 )
    {
LABEL_21:
      *(_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                   (__int64 *)&v32,
                   (v33 - v32) >> 3,
                   (v33 - v32) >> 3) = *(_QWORD *)v18;
      v13 = v33;
      v11 = v32;
    }
    ++v10;
  }
  v15 = (v13 - v11) >> 3;
  if ( v15 )
  {
    gsl::details::extent_type<-1>::extent_type<-1>(v29, v15);
    v29[1] = (__int64)v11;
    if ( v29[0] == -1 || !v11 && v29[0] )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    CDeviceManager::UpdateFeatureLevels(v29, v1);
    *((_BYTE *)this + 750) = 0;
  }
  detail::vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>::~vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>((__int64 *)&v32);
  detail::vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>::~vector_facade<_LUID,detail::buffer_impl<_LUID,2,1,detail::liberal_expansion_policy>>((__int64 *)&v36);
}
