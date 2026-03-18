/*
 * XREFs of ?Render@CSpectreCallbackRenderer@@UEAAJXZ @ 0x18025A880
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAUISpectreLightNode@@V?$allocator@PEAUISpectreLightNode@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802345D4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@PEAUISpectreLightNode@@V-$allocator@PEAUIS.c)
 *     gsl::final_action__CSpectreCallbackRenderer::Render_::_5_::_lambda_1___::_final_action__CSpectreCallbackRenderer::Render_::_5_::_lambda_1___ @ 0x180234824 (gsl--final_action__CSpectreCallbackRenderer--Render_--_5_--_lambda_1___--_final_action__CSpectre.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpectreCallbackRenderer::Render(CSpectreCallbackRenderer *this)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  char v4; // r15
  __int64 v5; // rbx
  void (__fastcall *v6)(__int64, __int64, __int64 *, _QWORD); // rdi
  __int64 v7; // rbx
  void (__fastcall *v8)(__int64, void (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  __int64 v9; // r12
  __int64 v10; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v11; // r8
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  char *v17; // rdi
  _BYTE *v18; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  size_t v21; // rbx
  unsigned __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rdi
  void (__fastcall *v25)(__int64, __int64); // rbx
  __int64 v26; // rax
  void (__fastcall *v27)(__int64, float *); // rax
  int v28; // eax
  unsigned int v29; // ebx
  void *v31[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C0h]
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  void (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v38[2]; // [rsp+70h] [rbp-90h] BYREF
  char v39; // [rsp+80h] [rbp-80h]
  _OWORD v40[4]; // [rsp+90h] [rbp-70h] BYREF
  int v41; // [rsp+D0h] [rbp-30h]
  __int128 v42; // [rsp+E0h] [rbp-20h] BYREF
  float v43[4]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
  v36 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 320LL))(v3, &v36);
  v42 = 0LL;
  v4 = 1;
  v37 = 1;
  (*(void (__fastcall **)(__int64, int *, __int128 *))(*(_QWORD *)v36 + 768LL))(v36, &v37, &v42);
  if ( SDWORD2(v42) <= (int)v42 || SHIDWORD(v42) <= SDWORD1(v42) )
  {
LABEL_24:
    v29 = 0;
    goto LABEL_25;
  }
  v5 = v36;
  v35 = 0LL;
  v6 = *(void (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)v36 + 712LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v35);
  v6(v5, 1LL, &v35, 0LL);
  v7 = v35;
  v34 = 0LL;
  v8 = *(void (__fastcall **)(__int64, void (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v35 + 56LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v34);
  v8(v7, &v34);
  v33 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v33);
  (**v34)(v34, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v33);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
  v32 = 0LL;
  *(_OWORD *)v31 = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v38[0] = v9;
  v38[1] = v31;
  v12 = *((_QWORD *)this + 16);
  v39 = 1;
  if ( *((_QWORD *)this + 15) != v12 )
  {
    v13 = *((_OWORD *)this + 2);
    v41 = 0;
    v14 = *((_OWORD *)this + 3);
    v15 = *((_OWORD *)this + 4);
    v16 = *((_OWORD *)this + 5);
    v40[0] = v13;
    v40[1] = v14;
    v40[2] = v15;
    v40[3] = v16;
    if ( CMILMatrix::Invert((CMILMatrix *)v40, v10, v11) )
    {
      v17 = (char *)v31[1];
      v18 = v31[0];
      v19 = (__int64)(*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) >> 3;
      v20 = ((char *)v31[1] - (char *)v31[0]) >> 3;
      if ( v19 < v20 )
      {
        v17 = (char *)v31[0] + 8 * v19;
LABEL_11:
        v31[1] = v17;
        goto LABEL_12;
      }
      if ( v19 > v20 )
      {
        if ( v19 <= (signed __int64)(v32 - (unsigned __int64)v31[0]) >> 3 )
        {
          v21 = 8 * (v19 - v20);
          memset_0(v31[1], 0, v21);
          v18 = v31[0];
          v17 += v21;
          goto LABEL_11;
        }
        std::vector<ISpectreLightNode *>::_Resize_reallocate<std::_Value_init_tag>(
          (const void **)v31,
          (__int64)(*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) >> 3);
        v18 = v31[0];
        v17 = (char *)v31[1];
      }
LABEL_12:
      v22 = 0LL;
      if ( (v17 - v18) >> 3 )
      {
        do
        {
          v23 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v22);
          if ( (*(int (__fastcall **)(__int64, _OWORD *, _BYTE *))(*(_QWORD *)v23 + 296LL))(v23, v40, &v18[8 * v22]) >= 0 )
          {
            v24 = *((_QWORD *)v31[0] + v22);
            v25 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 24LL);
            v26 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 40LL))(*((_QWORD *)this + 3));
            v25(v24, v26);
          }
          ++v22;
          v18 = v31[0];
        }
        while ( v22 < ((char *)v31[1] - (char *)v31[0]) >> 3 );
      }
      v4 = 0;
    }
  }
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 16LL))(v9, (char *)this + 96);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, v33);
  v27 = *(void (__fastcall **)(__int64, float *))(*(_QWORD *)v9 + 32LL);
  v43[0] = (float)(int)v42;
  v43[1] = (float)SDWORD1(v42);
  v43[2] = (float)SDWORD2(v42);
  v43[3] = (float)SHIDWORD(v42);
  v27(v9, v43);
  v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, _QWORD, char))(*(_QWORD *)v9 + 40LL))(
          v9,
          *((_QWORD *)this + 3),
          (char *)this + 32,
          0LL,
          v4);
  v29 = v28;
  if ( v28 >= 0 )
  {
    gsl::final_action__CSpectreCallbackRenderer::Render_::_5_::_lambda_1___::_final_action__CSpectreCallbackRenderer::Render_::_5_::_lambda_1___(v38);
    if ( v31[0] )
    {
      std::_Deallocate<16>(v31[0], (v32 - (unsigned __int64)v31[0]) & 0xFFFFFFFFFFFFFFF8uLL);
      v32 = 0LL;
      *(_OWORD *)v31 = 0LL;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v33);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v35);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8F,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\spatialcallbackrenderer.cpp",
    (const char *)(unsigned int)v28);
  gsl::final_action__CSpectreCallbackRenderer::Render_::_5_::_lambda_1___::_final_action__CSpectreCallbackRenderer::Render_::_5_::_lambda_1___(v38);
  if ( v31[0] )
  {
    std::_Deallocate<16>(v31[0], (v32 - (unsigned __int64)v31[0]) & 0xFFFFFFFFFFFFFFF8uLL);
    v32 = 0LL;
    *(_OWORD *)v31 = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v33);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v35);
LABEL_25:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
  return v29;
}
