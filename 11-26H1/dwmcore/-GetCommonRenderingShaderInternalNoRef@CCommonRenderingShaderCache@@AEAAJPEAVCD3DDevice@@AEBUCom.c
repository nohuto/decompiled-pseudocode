/*
 * XREFs of ?GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180100310
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800FF720 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x180154E04 (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A5F4 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18000D87C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x1800F82B4 (-CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z.c)
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800FD884 (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180100AD0 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x180100FEC (-GetShaderLinkingBody@CommonRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@1@W4D3DShaderPro.c)
 *     ?AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z @ 0x1801010E0 (-AddLinkedShader@CShaderCache@@IEAAJULookupKey@ShaderLinkingConfig@@PEAVCLinkedShader@@@Z.c)
 *     ??$emplace@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@1@V?$basic_iterator@$$CBV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@1@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180144EC4 (--$emplace@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@@-$vector_facade@V-$.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCommonRenderingShaderCache::GetCommonRenderingShaderInternalNoRef(
        CCommonRenderingShaderCache *this,
        struct CD3DDevice *a2,
        const struct CommonRenderingShaderDesc *a3,
        unsigned int *a4,
        struct ID3D11PixelShader **a5)
{
  int v5; // r15d
  __int128 v7; // xmm0
  bool v8; // cc
  bool v9; // al
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r8
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rdi
  int v19; // r14d
  int v20; // r14d
  struct CD3DDevice *v21; // r12
  unsigned int v22; // r14d
  __int64 i; // rsi
  __int64 v24; // rcx
  struct CD3DPixelShader *v25; // rsi
  SIZE_T v27; // rdi
  const void *v28; // rsi
  HRESULT v29; // eax
  unsigned int v30; // ebx
  CLinkedShader *v31; // rcx
  int v32; // eax
  void *v33; // rax
  HANDLE ProcessHeap; // rax
  ID3DBlob *v35; // rax
  int v36; // eax
  unsigned int v37; // edi
  _OWORD *ShaderLinkingBody; // rax
  int v39; // eax
  unsigned int v40; // ebx
  int v41; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v42; // [rsp+30h] [rbp-D0h]
  struct CD3DPixelShader *v43; // [rsp+38h] [rbp-C8h] BYREF
  ID3DBlob *ppBlob[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v45; // [rsp+50h] [rbp-B0h] BYREF
  struct CD3DDevice *v46; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v47; // [rsp+68h] [rbp-98h]
  struct ID3D11PixelShader **v48; // [rsp+70h] [rbp-90h]
  _OWORD v49[3]; // [rsp+78h] [rbp-88h] BYREF
  char v50[56]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v51; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v52; // [rsp+F0h] [rbp-10h]
  __int128 v53; // [rsp+100h] [rbp+0h]
  __int128 v54; // [rsp+110h] [rbp+10h]
  __int128 v55; // [rsp+120h] [rbp+20h]
  __int128 v56; // [rsp+130h] [rbp+30h]
  __int128 v57; // [rsp+140h] [rbp+40h]
  __int128 v58; // [rsp+150h] [rbp+50h]
  int v59; // [rsp+160h] [rbp+60h]
  __int64 v60; // [rsp+164h] [rbp+64h]
  int v61; // [rsp+16Ch] [rbp+6Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v5 = *(_DWORD *)a3;
  v48 = a5;
  v47 = a4;
  v60 = 0LL;
  v61 = 0;
  v52 = 0LL;
  *(_DWORD *)((char *)&v52 + 10) = 0;
  HIWORD(v52) = 0;
  v53 = 0LL;
  DWORD2(v53) = 0;
  v55 = 0LL;
  DWORD2(v55) = 0;
  v57 = 0LL;
  DWORD2(v57) = 0;
  v54 = 0LL;
  *(_DWORD *)((char *)&v54 + 10) = 0;
  HIWORD(v54) = 0;
  v56 = 0LL;
  *(_DWORD *)((char *)&v56 + 10) = 0;
  HIWORD(v56) = 0;
  v58 = 0LL;
  *(_DWORD *)((char *)&v58 + 10) = 0;
  v7 = *(_OWORD *)((char *)a3 + 8);
  HIWORD(v58) = 0;
  v46 = a2;
  BYTE8(v52) = (v5 & 4) != 0;
  *(_QWORD *)&v53 = "NoOp";
  *(_DWORD *)((char *)&v60 + 1) = (v5 & 0x10) != 0;
  *(_QWORD *)&v55 = "NoOp";
  v8 = *((_DWORD *)a2 + 156) < 37632;
  LOBYTE(v60) = (v5 & 8) != 0;
  WORD2(v60) = *((_WORD *)a3 + 14);
  *(_QWORD *)&v57 = "NoOp";
  v59 = -1;
  v51 = v7;
  v42 = 0;
  if ( v8 )
  {
    v10 = v5 & 3;
    v11 = v10 | 4;
  }
  else
  {
    v59 = *((_DWORD *)a3 + 6);
    v9 = (v5 & 0x20) != 0;
    v42 = 1;
    v10 = v5 & 3;
    BYTE5(v52) = v9;
    v11 = v10;
  }
  ShaderLinkingConfig::GetLookupKey(&v51, &v45, v11);
  v12 = g_commonRenderingShaderCache;
  v13 = 0;
  v14 = qword_1803DCC00;
  v15 = DWORD2(v45);
  v16 = v45;
  while ( 1 )
  {
    if ( v13 >= (int)qword_1803DCC00 )
      goto LABEL_29;
    if ( *(_QWORD *)v12 == (_QWORD)v45 && *(_DWORD *)(v12 + 8) == DWORD2(v45) )
      break;
    ++v13;
    v12 += 16LL;
  }
  if ( v13 == -1 )
  {
LABEL_29:
    v17 = 0LL;
    v43 = 0LL;
    goto LABEL_30;
  }
  v17 = *(volatile signed __int32 **)(qword_1803DCBF8 + 8LL * v13);
  if ( v17 && _InterlockedAdd(v17 + 2, 1u) <= 0 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v41);
    v18 = v17;
  }
  else
  {
    v18 = v17;
    if ( !v17 )
      goto LABEL_44;
  }
  v19 = _InterlockedDecrement(v18 + 2);
  if ( v19 < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v41);
  if ( v19 )
    goto LABEL_44;
  if ( _InterlockedAdd(v18 + 2, 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v41);
  (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v18 + 24LL))(v18, v14, v16);
  v20 = _InterlockedDecrement(v18 + 2);
  if ( v20 < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v41);
  if ( v20 )
  {
LABEL_44:
    v43 = (struct CD3DPixelShader *)v17;
    if ( v17 )
      goto LABEL_23;
LABEL_30:
    if ( *((_DWORD *)a3 + 4) <= 1u && *((_DWORD *)a3 + 6) == -1 && !*((_BYTE *)a3 + 29) )
    {
      switch ( *(_DWORD *)a3 )
      {
        case 5:
          v27 = 856LL;
          v28 = &unk_1802F4090;
LABEL_35:
          ppBlob[0] = 0LL;
          v29 = D3DCreateBlob(v27, ppBlob);
          v30 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x47u, 0LL);
            if ( ppBlob[0] )
              ((void (__fastcall *)(ID3DBlob *))ppBlob[0]->lpVtbl->Release)(ppBlob[0]);
            return v30;
          }
          v33 = (void *)((__int64 (__fastcall *)(ID3DBlob *))ppBlob[0]->lpVtbl->GetBufferPointer)(ppBlob[0]);
          memcpy_0(v33, v28, v27);
          ProcessHeap = GetProcessHeap();
          v17 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, 0x58uLL);
          if ( !v17 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x4Du, 0LL);
            if ( ppBlob[0] )
              ((void (__fastcall *)(ID3DBlob *))ppBlob[0]->lpVtbl->Release)(ppBlob[0]);
            return 2147942414LL;
          }
          v35 = ppBlob[0];
          *((_DWORD *)v17 + 2) = 0;
          *(_QWORD *)v17 = &CLinkedShader::`vftable';
          *((_QWORD *)v17 + 2) = v35;
          Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)v17 + 2);
          *((_DWORD *)v17 + 6) = 0;
          *((_QWORD *)v17 + 4) = &CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::`vftable';
          *((_QWORD *)v17 + 5) = v17;
          *((_QWORD *)v17 + 6) = v17 + 18;
          *((_QWORD *)v17 + 7) = v17 + 18;
          *((_QWORD *)v17 + 8) = v17 + 22;
          v43 = (struct CD3DPixelShader *)v17;
          CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v17 + 2));
          ShaderLinkingConfig::GetLookupKey(&v51, &v45, v11);
          v36 = CShaderCache::AddLinkedShader(&g_commonRenderingShaderCache, &v45, v17);
          v37 = v36;
          if ( v36 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0x50u, 0LL);
            wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(&v43);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)ppBlob);
            return v37;
          }
          v43 = (struct CD3DPixelShader *)v17;
          CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v17);
          if ( ppBlob[0] )
            ((void (__fastcall *)(ID3DBlob *))ppBlob[0]->lpVtbl->Release)(ppBlob[0]);
          break;
        case 1:
          v27 = 800LL;
          v28 = &unk_180381B50;
          goto LABEL_35;
        case 2:
          v27 = 824LL;
          v28 = &unk_180381810;
          goto LABEL_35;
      }
    }
    if ( !v17 )
    {
      ShaderLinkingBody = (_OWORD *)CommonRenderingShaderBody::GetShaderLinkingBody(v50, v10, v42, v15);
      v45 = 0uLL;
      v49[0] = *ShaderLinkingBody;
      v49[1] = ShaderLinkingBody[1];
      v49[2] = ShaderLinkingBody[2];
      v39 = CShaderCache::CreateLinkedShader(
              (const void **)&g_commonRenderingShaderCache,
              v11,
              (__int64)&v51,
              (int)v49,
              &v45,
              &v43);
      v40 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v39, 0x61u, 0LL);
        return v40;
      }
      v17 = (volatile signed __int32 *)v43;
    }
    goto LABEL_23;
  }
  if ( _InterlockedDecrement(v18 + 2) < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v41);
  (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v18 + 16LL))(v18, 1LL);
LABEL_23:
  v21 = v46;
  v22 = 0;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v24 = *((_QWORD *)v17 + 6);
    if ( (unsigned int)i >= (unsigned __int64)((*((_QWORD *)v17 + 7) - v24) >> 3) )
      goto LABEL_40;
    if ( v21 == (struct CD3DDevice *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(8 * i + v24) + 40LL))(*(_QWORD *)(8 * i + v24)) )
      break;
  }
  v25 = *(struct CD3DPixelShader **)(8 * i + *((_QWORD *)v17 + 6));
  if ( v25 )
  {
LABEL_27:
    *v47 = *((_DWORD *)v17 + 6);
    *v48 = (struct ID3D11PixelShader *)*((_QWORD *)v25 + 15);
    return v22;
  }
LABEL_40:
  v31 = (CLinkedShader *)*((_QWORD *)v17 + 5);
  v43 = 0LL;
  v32 = CLinkedShader::CreateResource(v31, v21, &v43);
  v22 = v32;
  if ( v32 >= 0 )
  {
    v25 = v43;
    (*(void (__fastcall **)(struct CD3DPixelShader *, volatile signed __int32 *))(*(_QWORD *)v43 + 72LL))(v43, v17 + 8);
    v43 = (struct CD3DPixelShader *)*((_QWORD *)v17 + 7);
    ppBlob[0] = 0LL;
    v46 = v25;
    detail::vector_facade<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::emplace<wil::com_ptr_t<CD3DPixelShader,wil::err_returncode_policy>>(
      v17 + 12,
      &v45,
      &v43,
      &v46);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)ppBlob);
    goto LABEL_27;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, 0x52u, 0LL);
  if ( v43 )
    (*(void (__fastcall **)(struct CD3DPixelShader *))(*(_QWORD *)v43 + 16LL))(v43);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x11u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x65u, 0LL);
  return v22;
}
