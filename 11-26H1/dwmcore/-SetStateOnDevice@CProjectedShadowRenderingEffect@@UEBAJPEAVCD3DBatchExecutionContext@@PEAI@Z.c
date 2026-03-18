/*
 * XREFs of ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800F9FB0
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x1800F6FA0 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x1800F9B80 (-GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z.c)
 *     ??$__builtin_array_init_helper@UShaderLinkingSamplerDesc@@@@YAXPEAUShaderLinkingSamplerDesc@@_K@Z @ 0x1800FA2A0 (--$__builtin_array_init_helper@UShaderLinkingSamplerDesc@@@@YAXPEAUShaderLinkingSamplerDesc@@_K@.c)
 *     ?GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ @ 0x1800FA300 (-GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ.c)
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x1800FA460 (-GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceVi.c)
 *     ?GetVertexShaderNoRef@CD3DDevice@@QEBAPEAUID3D11VertexShader@@I@Z @ 0x1800FA580 (-GetVertexShaderNoRef@CD3DDevice@@QEBAPEAUID3D11VertexShader@@I@Z.c)
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800FD884 (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ?LookupShader@CShaderCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x180100130 (-LookupShader@CShaderCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x180100E50 (-GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 *     ?reset@?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShaderCache@@@Z @ 0x18021EE20 (-reset@-$unique_ptr@VCShaderCache@@U-$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShader.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?GetShaderLinkingBody@ProjectedShadowRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@CommonRenderingShaderBody@@W4D3DShaderProfileVersion@@@Z @ 0x1802B3444 (-GetShaderLinkingBody@ProjectedShadowRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@CommonR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowRenderingEffect::SetStateOnDevice(
        CProjectedShadowRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  __int64 v3; // rax
  int *v5; // r12
  __int64 v7; // rdi
  char v8; // r13
  RenderTargetInfo *v9; // rcx
  bool v10; // zf
  unsigned int v11; // edi
  char v12; // al
  char v13; // al
  __int64 v14; // rax
  CDrawListBitmap *v15; // rax
  int ShaderResourceView; // eax
  unsigned int v17; // esi
  char *v18; // rcx
  unsigned int v19; // eax
  CShaderCache *v20; // rcx
  unsigned int v21; // ebx
  unsigned int v22; // edi
  CLinkedShader *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r14
  unsigned int v26; // edi
  void (__fastcall *v27)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD); // rbx
  struct ID3D11VertexShader *VertexShaderNoRef; // rax
  _QWORD *v30; // rax
  _OWORD *ShaderLinkingBody; // rax
  unsigned int v32; // [rsp+20h] [rbp-E0h]
  unsigned int v33[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct ID3D11PixelShader *v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h]
  unsigned int *v36; // [rsp+50h] [rbp-B0h]
  _QWORD v37[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v38; // [rsp+70h] [rbp-90h] BYREF
  __int128 v39; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v40[3]; // [rsp+90h] [rbp-70h] BYREF
  char v41[48]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v42[128]; // [rsp+F0h] [rbp-10h] BYREF
  int v43; // [rsp+170h] [rbp+70h]
  __int64 v44; // [rsp+174h] [rbp+74h]
  int v45; // [rsp+17Ch] [rbp+7Ch]

  v3 = *((_QWORD *)a2 + 2);
  v5 = (int *)*((_QWORD *)a2 + 1);
  v7 = *((_QWORD *)a2 + 3);
  v36 = a3;
  v35 = v3;
  v34 = 0LL;
  v38 = 0LL;
  v8 = 0;
  v39 = 0LL;
  memset_0(v42, 0, sizeof(v42));
  __builtin_array_init_helper<ShaderLinkingSamplerDesc>(v42);
  v43 = -1;
  v44 = 0LL;
  v45 = 0;
  if ( v5[156] >= 37632 )
  {
    v8 = 1;
    v43 = *(_DWORD *)CD3DBatchExecutionContext::GetLightsMask(a2);
  }
  v9 = (RenderTargetInfo *)*((_QWORD *)a2 + 14);
  BYTE4(v44) = 1;
  BYTE5(v44) = RenderTargetInfo::IsHDR(v9);
  v10 = *(_BYTE *)(v7 + 256) == 0;
  v11 = 0;
  v12 = BYTE1(v44);
  if ( !v10 )
    v12 = 1;
  v10 = *((_DWORD *)a2 + 14) == 22;
  BYTE1(v44) = v12;
  v13 = v44;
  if ( v10 )
    v13 = 1;
  LOBYTE(v44) = v13;
  while ( 1 )
  {
    v14 = *(_QWORD *)this;
    if ( v11 >= 2 )
      break;
    v15 = (CDrawListBitmap *)(*(__int64 (__fastcall **)(CProjectedShadowRenderingEffect *, _QWORD))(v14 + 16))(
                               this,
                               v11);
    if ( *((_QWORD *)v15 + 1) )
    {
      ShaderResourceView = CDrawListBitmap::GetShaderResourceView(
                             v15,
                             *((const struct RenderTargetInfo **)a2 + 14),
                             (struct ID3D11ShaderResourceView **)&v38 + v11,
                             0LL);
      v17 = ShaderResourceView;
      if ( ShaderResourceView < 0 )
      {
        v32 = 128;
        goto LABEL_21;
      }
      v18 = (char *)this + 2 * v11;
      LOWORD(v33[0]) = *(_WORD *)&v18[v11 + 64];
      BYTE2(v33[0]) = v18[v11 + 66];
      ShaderResourceView = CD3DDevice::GetD3DSamplerStateNoRef(v5, v33, (char *)&v40[-1] + 8 * v11);
      v17 = ShaderResourceView;
      if ( ShaderResourceView < 0 )
      {
        v32 = 130;
LABEL_21:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShaderResourceView, v32, 0LL);
        return v17;
      }
    }
    ++v11;
  }
  v19 = (*(__int64 (__fastcall **)(CProjectedShadowRenderingEffect *))(v14 + 24))(this);
  v20 = g_spProjectedShadowShaderCache;
  v21 = v19 | 4;
  v22 = v19;
  if ( v8 )
    v21 = v19;
  if ( g_spProjectedShadowShaderCache
    || ((v30 = MIDL_user_allocate(0x20uLL)) == 0LL
      ? (v30 = 0LL)
      : (_QWORD *)(*v30 = 0LL, v30[1] = 0LL, *((_DWORD *)v30 + 4) = 0, v30[3] = v30),
        std::unique_ptr<CShaderCache>::reset(&g_spProjectedShadowShaderCache, v30),
        (v20 = g_spProjectedShadowShaderCache) != 0LL) )
  {
    v23 = CShaderCache::LookupShader(v20, v21, (const struct ShaderLinkingConfig *)v42);
    *(_QWORD *)v33 = v23;
    if ( !v23 )
    {
      LOBYTE(v24) = v8;
      ShaderLinkingBody = (_OWORD *)ProjectedShadowRenderingShaderBody::GetShaderLinkingBody(v41, v22, v24);
      v37[0] = 0LL;
      v37[1] = 0LL;
      v40[0] = *ShaderLinkingBody;
      v40[1] = ShaderLinkingBody[1];
      v40[2] = ShaderLinkingBody[2];
      ShaderResourceView = CShaderCache::CreateLinkedShader(
                             (_DWORD)g_spProjectedShadowShaderCache,
                             v21,
                             (unsigned int)v42,
                             (unsigned int)v40,
                             (__int64)v37,
                             (__int64)v33);
      v17 = ShaderResourceView;
      if ( ShaderResourceView < 0 )
      {
        v32 = 161;
        goto LABEL_21;
      }
      v23 = *(CLinkedShader **)v33;
    }
    v33[0] = 0;
    ShaderResourceView = CLinkedShader::GetShadersNoRef(v23, (struct CD3DDevice *)v5, v33, &v34);
    v17 = ShaderResourceView;
    if ( ShaderResourceView >= 0 )
    {
      v25 = v35;
      v26 = v33[0];
      v27 = *(void (__fastcall **)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD))(*(_QWORD *)v35 + 88LL);
      VertexShaderNoRef = CD3DDevice::GetVertexShaderNoRef((CD3DDevice *)v5, v33[0]);
      v27(v25, VertexShaderNoRef, 0LL, 0LL);
      (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v25 + 72LL))(
        v25,
        v34,
        0LL,
        0LL);
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v25 + 64LL))(v25, 0LL, 2LL, &v38);
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v25 + 80LL))(v25, 0LL, 2LL, &v39);
      *v36 = v26;
      return v17;
    }
    v32 = 165;
    goto LABEL_21;
  }
  v17 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x95u, 0LL);
  return v17;
}
