/*
 * XREFs of ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x180154E04
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x180133624 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180100310 (-GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCom.c)
 *     ??R?$default_delete@VCSurfaceShaderComposer@@@std@@QEBAXPEAVCSurfaceShaderComposer@@@Z @ 0x180153350 (--R-$default_delete@VCSurfaceShaderComposer@@@std@@QEBAXPEAVCSurfaceShaderComposer@@@Z.c)
 *     ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1801533F4 (-Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 *     ?Add@?$CMap@IV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@V?$CMapEqualHelper@IV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@@@@@QEAAHAEBIAEBV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18015545C (-Add@-$CMap@IV-$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@V-$CMapEqualHel.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::GenerateShaders(CD3DDevice *this)
{
  bool v2; // r13
  unsigned int v3; // ebx
  CCommonRenderingShaderCache *v4; // rcx
  __int64 v5; // rdx
  char v6; // al
  __int64 i; // r8
  __m128i v8; // xmm6
  __int64 v9; // rsi
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r8
  unsigned int v14; // esi
  unsigned int j; // eax
  int CommonRenderingShaderInternalNoRef; // eax
  unsigned int v17; // esi
  unsigned int v18; // eax
  __int64 v19; // r9
  int v20; // ecx
  unsigned int v21; // ecx
  __m128i v22; // xmm6
  __int64 v23; // r14
  __int64 *v24; // r15
  __m128i v25; // xmm7
  __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 v28; // rcx
  __int64 (__fastcall *v29)(__int64 *, unsigned __int64, __int64, unsigned __int64, __int64, char *); // r12
  unsigned int v30; // esi
  unsigned int v31; // eax
  unsigned int v32; // ecx
  __int64 *v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 (__fastcall *v37)(__int64 *, char *, char *, __int64); // r12
  unsigned int v38; // esi
  int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // esi
  unsigned int v42; // eax
  unsigned int v43; // ecx
  __int64 *v44; // r14
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 (__fastcall *v48)(__int64 *, char *, char *, __int64); // r12
  __int64 *v50; // r14
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 (__fastcall *v54)(__int64 *, char *, char *, __int64); // r12
  ULONGLONG Ptr; // rcx
  CSurfaceShaderComposer *v56; // rdx
  unsigned int v57; // [rsp+28h] [rbp-59h]
  unsigned int v58; // [rsp+48h] [rbp-39h] BYREF
  struct ID3D11PixelShader *v59; // [rsp+50h] [rbp-31h] BYREF
  int v60; // [rsp+58h] [rbp-29h] BYREF
  int v61; // [rsp+60h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+68h] [rbp-19h] BYREF
  int *v63; // [rsp+78h] [rbp-9h]
  __int64 v64; // [rsp+80h] [rbp-1h]

  v61 = *((_DWORD *)this + 156);
  v2 = v61 >= 37632;
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  for ( i = 0LL; ; i = (unsigned int)v4 )
  {
    v58 = (unsigned int)v4;
    if ( (unsigned int)v5 >= 0x10 )
      break;
    if ( (unsigned __int8)v2 >= (unsigned __int8)((v6 & 4) != 0) )
    {
      v8 = *((__m128i *)&unk_1802E1A20 + (unsigned int)i);
      v9 = *((_QWORD *)&unk_1802E1A20 + 2 * (unsigned int)i);
      if ( v9 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          McTemplateU0t_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_D3DSHADER_CREATE_Start,
            0LL);
        v10 = (__int64 *)*((_QWORD *)this + 68);
        v11 = *v10;
        v59 = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64, _QWORD, struct ID3D11PixelShader **))(v11 + 96))(
                v10,
                _mm_srli_si128(v8, 8).m128i_u64[0],
                v9,
                0LL,
                &v59);
        v3 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x246u, 0LL);
          if ( v59 )
            ((void (__fastcall *)(struct ID3D11PixelShader *))v59->lpVtbl->Release)(v59);
          return v3;
        }
        CMap<unsigned int,wil::com_ptr_t<ID3D11VertexShader,wil::err_returncode_policy>,CMapEqualHelper<unsigned int,wil::com_ptr_t<ID3D11VertexShader,wil::err_returncode_policy>>>::Add(
          (char *)this + 1504,
          &v58,
          &v59);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        {
          v60 = 0;
          v63 = &v60;
          v64 = 4LL;
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_D3DSHADER_CREATE_Stop,
            v13,
            2u,
            &v62);
        }
        if ( v59 )
          ((void (__fastcall *)(struct ID3D11PixelShader *))v59->lpVtbl->Release)(v59);
        LODWORD(v4) = v58;
      }
    }
    v4 = (CCommonRenderingShaderCache *)(unsigned int)((_DWORD)v4 + 1);
    v5 = (unsigned int)v4;
    v6 = (char)v4;
  }
  v14 = 0;
  for ( j = 0; j < 4; j = v14 )
  {
    LODWORD(v63) = 0;
    v64 = 0xFFFFFFFFLL;
    *(_QWORD *)&v62.Size = "NoOp";
    v62.Ptr = v14;
    v58 = 0;
    v59 = 0LL;
    CommonRenderingShaderInternalNoRef = CCommonRenderingShaderCache::GetCommonRenderingShaderInternalNoRef(
                                           v4,
                                           this,
                                           (const struct CommonRenderingShaderDesc *)&v62,
                                           &v58,
                                           &v59);
    v3 = CommonRenderingShaderInternalNoRef;
    if ( CommonRenderingShaderInternalNoRef < 0 )
    {
      v57 = 602;
      goto LABEL_52;
    }
    if ( (v62.Ptr & 1) != 0 )
    {
      LODWORD(v62.Ptr) |= 4u;
      CommonRenderingShaderInternalNoRef = CCommonRenderingShaderCache::GetCommonRenderingShaderInternalNoRef(
                                             v4,
                                             this,
                                             (const struct CommonRenderingShaderDesc *)&v62,
                                             &v58,
                                             &v59);
      v3 = CommonRenderingShaderInternalNoRef;
      if ( CommonRenderingShaderInternalNoRef < 0 )
      {
        v57 = 612;
LABEL_52:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CommonRenderingShaderInternalNoRef, v57, 0LL);
        return v3;
      }
    }
    ++v14;
  }
  v17 = 0;
  v18 = 0;
  v19 = 0LL;
  while ( v18 < 4 )
  {
    v59 = 0LL;
    v20 = 4;
    if ( (unsigned int)(v19 - 2) > 1 )
      v20 = 0;
    i = (((_DWORD)v19 - 1) & 0xFFFFFFFD) == 0 ? 2 : 0;
    v21 = v20 | 2;
    v5 = v21 | 1;
    if ( (_DWORD)i != 2 )
      v5 = v21;
    if ( (unsigned __int8)v2 >= (unsigned __int8)((v5 & 4) != 0) )
    {
      v22 = *((__m128i *)&unk_1802E1A20 + (unsigned int)v5);
      v23 = *((_QWORD *)&unk_1802E1A20 + 2 * (unsigned int)v5);
      if ( v23 )
      {
        v24 = (__int64 *)*((_QWORD *)this + 68);
        v25 = *((__m128i *)&unk_1802E37B0 + (int)v19);
        v26 = *v24;
        v27 = (__int64 *)((char *)this + 8 * v17 + 1536);
        v28 = *v27;
        *v27 = 0LL;
        v29 = *(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64, unsigned __int64, __int64, char *))(v26 + 88);
        if ( v28 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        CommonRenderingShaderInternalNoRef = v29(
                                               v24,
                                               _mm_srli_si128(v25, 8).m128i_u64[0],
                                               v25.m128i_i64[0],
                                               _mm_srli_si128(v22, 8).m128i_u64[0],
                                               v23,
                                               (char *)this + 8 * v17 + 1536);
        v3 = CommonRenderingShaderInternalNoRef;
        if ( CommonRenderingShaderInternalNoRef < 0 )
        {
          v57 = 633;
          goto LABEL_52;
        }
      }
    }
    v18 = ++v17;
    v19 = v17;
  }
  v30 = 0;
  v31 = 0;
  v32 = 0;
  while ( v31 < 0x18 )
  {
    v33 = (__int64 *)*((_QWORD *)this + 68);
    v34 = v32;
    v35 = *v33;
    v36 = *((_QWORD *)this + v32 + 196);
    *((_QWORD *)this + v34 + 196) = 0LL;
    v37 = *(__int64 (__fastcall **)(__int64 *, char *, char *, __int64))(v35 + 160);
    if ( v36 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v36 + 16LL))(v36, v5, i, v19);
    CommonRenderingShaderInternalNoRef = v37(v33, &byte_180348880[264 * v34], (char *)this + 8 * v34 + 1568, v19);
    v3 = CommonRenderingShaderInternalNoRef;
    if ( CommonRenderingShaderInternalNoRef < 0 )
    {
      v57 = 641;
      goto LABEL_52;
    }
    v31 = ++v30;
    v32 = v30;
  }
  v38 = 0;
  v39 = 0;
  v40 = 0;
  while ( !v39 )
  {
    v50 = (__int64 *)*((_QWORD *)this + 68);
    v51 = v40;
    v52 = *v50;
    v53 = *((_QWORD *)this + v40 + 268);
    *((_QWORD *)this + v51 + 268) = 0LL;
    v54 = *(__int64 (__fastcall **)(__int64 *, char *, char *, __int64))(v52 + 176);
    if ( v53 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v53 + 16LL))(v53, v5, i, v19);
    CommonRenderingShaderInternalNoRef = v54(v50, &byte_180373868[40 * v51], (char *)this + 8 * v51 + 2144, v19);
    v3 = CommonRenderingShaderInternalNoRef;
    if ( CommonRenderingShaderInternalNoRef < 0 )
    {
      v57 = 647;
      goto LABEL_52;
    }
    v39 = ++v38;
    v40 = v38;
  }
  v41 = 0;
  v42 = 0;
  v43 = 0;
  while ( v42 < 4 )
  {
    v44 = (__int64 *)*((_QWORD *)this + 68);
    v45 = v43;
    v46 = *v44;
    v47 = *((_QWORD *)this + v43 + 269);
    *((_QWORD *)this + v45 + 269) = 0LL;
    v48 = *(__int64 (__fastcall **)(__int64 *, char *, char *, __int64))(v46 + 168);
    if ( v47 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v47 + 16LL))(v47, v5, i, v19);
    CommonRenderingShaderInternalNoRef = v48(v44, &byte_18034A150[52 * v45], (char *)this + 8 * v45 + 2152, v19);
    v3 = CommonRenderingShaderInternalNoRef;
    if ( CommonRenderingShaderInternalNoRef < 0 )
    {
      v57 = 653;
      goto LABEL_52;
    }
    v42 = ++v41;
    v43 = v41;
  }
  if ( v61 >= 37632 )
  {
    *(_QWORD *)&v62.Size = 0LL;
    v62.Ptr = (ULONGLONG)this + 1528;
    LOBYTE(v63) = 1;
    v3 = CSurfaceShaderComposer::Create(this, (struct CSurfaceShaderComposer **)&v62.Size);
    if ( (_BYTE)v63 )
    {
      Ptr = v62.Ptr;
      v56 = *(CSurfaceShaderComposer **)v62.Ptr;
      *(_QWORD *)v62.Ptr = *(_QWORD *)&v62.Size;
      if ( v56 )
        std::default_delete<CSurfaceShaderComposer>::operator()(Ptr, v56);
    }
    if ( (v3 & 0x80000000) != 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x294u, 0LL);
  }
  return v3;
}
