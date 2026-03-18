/*
 * XREFs of ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800FF720
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1800FFEB0 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 *     ?GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180100310 (-GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCom.c)
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x180100E18 (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180220B50 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180220BB8 (_Init_thread_header.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCommonRenderingEffect::SetStateOnDevice(
        CCommonRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  CCommonRenderingEffect *v5; // r14
  __int64 v6; // rbx
  CCommonRenderingShaderCache *v7; // rcx
  __int64 v9; // rax
  int *v10; // rax
  float v11; // xmm1_4
  int v12; // r12d
  unsigned int v13; // edi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  unsigned int ConversionShader; // ebx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  enum DXGI_COLOR_SPACE_TYPE v22; // ebx
  char *v23; // r8
  char *v24; // r14
  __int64 v25; // rax
  bool v26; // zf
  _DWORD *v27; // rax
  __int64 v28; // rax
  unsigned int v29; // edi
  __int64 v30; // rsi
  __int64 v31; // rcx
  char v32; // al
  struct CD3DDevice *v33; // rbx
  int CommonRenderingShaderInternalNoRef; // eax
  unsigned int v35; // edi
  CCommonRenderingShaderCache *v36; // r12
  __int64 v37; // rdx
  enum DXGI_COLOR_SPACE_TYPE v38; // esi
  void (__fastcall *v39)(CCommonRenderingShaderCache *, __int64, _QWORD, _QWORD); // r14
  int v40; // ecx
  __int64 v41; // rcx
  char v42; // al
  __int64 v43; // rbx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  __int64 v48; // r8
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // r9
  __int64 *v52; // rcx
  __int64 v53; // rax
  int v54; // edi
  unsigned int v55; // eax
  unsigned int v56; // [rsp+30h] [rbp-D0h]
  enum DXGI_COLOR_SPACE_TYPE v57; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v58; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v59; // [rsp+40h] [rbp-C0h]
  __int16 v60; // [rsp+50h] [rbp-B0h]
  __int16 v61; // [rsp+60h] [rbp-A0h]
  __int64 v62; // [rsp+70h] [rbp-90h] BYREF
  __int128 v63; // [rsp+78h] [rbp-88h]
  int v64; // [rsp+88h] [rbp-78h]
  int v65; // [rsp+8Ch] [rbp-74h]
  CCommonRenderingEffect *v66; // [rsp+90h] [rbp-70h]
  struct CD3DDevice *v67; // [rsp+98h] [rbp-68h]
  struct ID3D11PixelShader *v68; // [rsp+A0h] [rbp-60h] BYREF
  CCommonRenderingShaderCache *v69; // [rsp+A8h] [rbp-58h]
  __int64 v70; // [rsp+B0h] [rbp-50h]
  __int128 v71; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v72; // [rsp+D0h] [rbp-30h]
  unsigned int *v73; // [rsp+D8h] [rbp-28h]
  __int128 v74; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v75; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v76[3]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v77; // [rsp+10Ch] [rbp+Ch]
  int v78; // [rsp+114h] [rbp+14h]
  int v79; // [rsp+118h] [rbp+18h]
  __int128 v80; // [rsp+11Ch] [rbp+1Ch]
  int v81; // [rsp+12Ch] [rbp+2Ch]
  int v82; // [rsp+130h] [rbp+30h]
  char v83[16]; // [rsp+138h] [rbp+38h] BYREF
  char v84[16]; // [rsp+148h] [rbp+48h] BYREF
  char v85[16]; // [rsp+158h] [rbp+58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v3 = 0LL;
  v4 = *((_QWORD *)a2 + 3);
  v5 = this;
  v6 = *((_QWORD *)a2 + 14);
  v67 = (struct CD3DDevice *)*((_QWORD *)a2 + 1);
  v66 = this;
  v7 = (CCommonRenderingShaderCache *)*((_QWORD *)a2 + 2);
  v62 = 0LL;
  *(_QWORD *)&v63 = "NoOp";
  v65 = 0;
  v9 = *((_QWORD *)a2 + 5);
  v73 = a3;
  v69 = v7;
  v68 = 0LL;
  v57 = DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  DWORD2(v63) = 0;
  v74 = 0LL;
  v75 = 0LL;
  if ( v9 )
  {
    v10 = (int *)(v9 + 16);
  }
  else
  {
    v7 = (CCommonRenderingShaderCache *)*(unsigned int *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                          + (unsigned int)tls_index)
                                                        + 4LL);
    if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA > (int)v7 )
    {
      Init_thread_header(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA == -1 )
      {
        `CLightsMask::NoLights'::`2'::noLights = -1;
        Init_thread_footer(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      }
    }
    v10 = &`CLightsMask::NoLights'::`2'::noLights;
  }
  v11 = *(float *)(v6 + 16);
  v64 = *v10;
  LOBYTE(v65) = 1;
  v12 = v62;
  BYTE1(v65) = v11 != 0.0;
  if ( *(_BYTE *)(v4 + 256) )
  {
    v12 = v62 | 0x10;
    LODWORD(v62) = v62 | 0x10;
  }
  if ( *((_DWORD *)a2 + 14) == 22 )
  {
    v12 |= 8u;
    LODWORD(v62) = v12;
  }
  v13 = 0;
  v56 = 0;
  while ( v13 < 2 )
  {
    v14 = v13;
    v72 = 3LL * v13;
    v7 = (CCommonRenderingShaderCache *)*((_QWORD *)v5 + 3 * v13 + 3);
    if ( !v7 )
      goto LABEL_32;
    v15 = *((_QWORD *)a2 + 14);
    v70 = 0LL;
    v16 = *(_QWORD *)v7;
    v58 = 0LL;
    v17 = (*(__int64 (__fastcall **)(CCommonRenderingShaderCache *, __int64, __int64 *))(v16 + 104))(v7, v15, &v58);
    ConversionShader = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x72,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
        (const char *)(unsigned int)v17);
      if ( v58 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ConversionShader, 0xF3u, 0LL);
      return ConversionShader;
    }
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 128LL))(v58);
    v20 = v58;
    *((_QWORD *)&v74 + v13) = v19;
    v21 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v20 + 8) + 24LL))(v20 + 8, v83);
    v22 = *(_DWORD *)(v21 + 8);
    v70 = *(_QWORD *)v21;
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    v23 = (char *)v5 + 2 * v13;
    v59 = *(_WORD *)&v23[v13 + 64];
    v7 = (CCommonRenderingShaderCache *)((unsigned __int8)v23[v13 + 66]
                                       + 4 * (HIBYTE(v59) + 4 * (unsigned int)(unsigned __int8)v59));
    v24 = (char *)v67 + 8 * (_QWORD)v7;
    if ( !*((_QWORD *)v24 + 220) )
    {
      v60 = *(_WORD *)&v23[v13 + 64];
      if ( HIBYTE(v60) && v23[v13 + 66] )
        v45 = 37120;
      else
        v45 = 37632;
      if ( *((_DWORD *)v67 + 156) < v45 )
      {
        v54 = -2147024809;
        v55 = 3016;
        goto LABEL_80;
      }
      v61 = *(_WORD *)&v23[v13 + 64];
      if ( (unsigned __int8)v61 == 2 || (_BYTE)v61 )
        v46 = 21;
      else
        v46 = 0;
      v76[0] = v46;
      v47 = ExtendMode::ToD3D11TextureAddressMode(HIBYTE(v61));
      v49 = *(unsigned __int8 *)(v13 + v48 + 66);
      v76[1] = v47;
      v50 = ExtendMode::ToD3D11TextureAddressMode(v49);
      v52 = *(__int64 **)(v51 + 544);
      v76[2] = v50;
      v77 = 3LL;
      v78 = 1;
      v79 = 8;
      v80 = 0LL;
      v81 = 0;
      v82 = 2139095039;
      v53 = *v52;
      *((_QWORD *)v24 + 220) = 0LL;
      v54 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, char *))(v53 + 184))(v52, v76, v24 + 1760);
      if ( v54 < 0 )
      {
        v55 = 3021;
LABEL_80:
        ConversionShader = v54;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v54, v55, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v54, 0xF5u, 0LL);
        return ConversionShader;
      }
      v13 = v56;
    }
    v25 = *((_QWORD *)v24 + 220);
    v5 = v66;
    *(_QWORD *)&v76[2 * v14 - 4] = v25;
    if ( v13 )
    {
      v12 |= 2u;
      ++v13;
      LODWORD(v62) = v12;
      v56 = v13;
    }
    else
    {
      v12 |= 1u;
      v26 = *((_BYTE *)v5 + 64) == 2;
      LODWORD(v62) = v12;
      if ( v26 )
      {
        v12 |= 0x20u;
        LODWORD(v62) = v12;
      }
      v27 = &unk_1802F4068;
      while ( *v27 != v22 )
      {
        if ( ++v27 == (_DWORD *)&unk_1802F4084 )
          goto LABEL_23;
      }
      if ( v27 != (_DWORD *)&unk_1802F4084 )
      {
        v28 = *((_QWORD *)a2 + 15);
        LOBYTE(v65) = 0;
        v57 = *(_DWORD *)(v28 + 8);
      }
LABEL_23:
      DWORD2(v71) = 0;
      *(_QWORD *)&v71 = "NoOp";
      if ( (_DWORD)v70 == 107 )
      {
LABEL_24:
        v29 = 8;
      }
      else
      {
        switch ( (int)v70 )
        {
          case 2:
            v29 = 32;
            break;
          case 10:
          case 11:
          case 67:
            v29 = 16;
            break;
          case 24:
          case 104:
            v29 = 10;
            break;
          case 28:
          case 49:
          case 61:
          case 65:
          case 87:
          case 88:
          case 91:
          case 103:
          case 106:
            goto LABEL_24;
          default:
            v29 = 0;
            break;
        }
      }
      v30 = v72;
      if ( *((_BYTE *)v5 + 8 * v72 + 32) )
      {
        v32 = 1;
      }
      else
      {
        v31 = *((_QWORD *)v5 + v72 + 2);
        if ( v31 )
          v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
        else
          v32 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v5 + v72 + 3) + 24LL))(
                              *((_QWORD *)v5 + v72 + 3),
                              v84)
                          + 4) == 3;
      }
      ConversionShader = ColorConversion::GetConversionShader(
                           v22,
                           v32,
                           v29,
                           v57,
                           (struct ColorConversion::Shader *)&v71,
                           0LL);
      if ( (ConversionShader & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ConversionShader, 0x118u, 0LL);
        return ConversionShader;
      }
      if ( DWORD2(v71) <= 1 )
      {
        if ( !*((_BYTE *)v5 + 8 * v30 + 32) )
        {
          v41 = *((_QWORD *)v5 + v30 + 2);
          v42 = v41
              ? (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 32LL))(v41)
              : *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v5 + v30 + 3) + 24LL))(
                              *((_QWORD *)v5 + v30 + 3),
                              v85)
                          + 4) == 3;
          if ( !v42 )
            goto LABEL_31;
        }
        v12 |= 4u;
        v13 = v56 + 1;
        LODWORD(v62) = v12;
        ++v56;
      }
      else
      {
        v63 = v71;
LABEL_31:
        v13 = v56;
LABEL_32:
        v56 = ++v13;
      }
    }
  }
  v33 = v67;
  v57 = 0x80000000;
  CommonRenderingShaderInternalNoRef = CCommonRenderingShaderCache::GetCommonRenderingShaderInternalNoRef(
                                         v7,
                                         v67,
                                         (const struct CommonRenderingShaderDesc *)&v62,
                                         (unsigned int *)&v57,
                                         &v68);
  v35 = CommonRenderingShaderInternalNoRef;
  if ( CommonRenderingShaderInternalNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CommonRenderingShaderInternalNoRef, 0x132u, 0LL);
  }
  else
  {
    v36 = v69;
    v37 = 0LL;
    v38 = v57;
    v39 = *(void (__fastcall **)(CCommonRenderingShaderCache *, __int64, _QWORD, _QWORD))(*(_QWORD *)v69 + 88LL);
    v40 = 0;
    while ( v37 < *((int *)v33 + 380) )
    {
      if ( *(_DWORD *)(*((_QWORD *)v33 + 188) + 4 * v37) == v57 )
      {
        if ( v40 != -1 )
        {
          v43 = *(_QWORD *)(*((_QWORD *)v33 + 189) + 8LL * v40);
          if ( v43 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
            v3 = v43;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
          }
        }
        break;
      }
      ++v40;
      ++v37;
    }
    v39(v36, v3, 0LL, 0LL);
    (*(void (__fastcall **)(CCommonRenderingShaderCache *, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v36 + 72LL))(
      v36,
      v68,
      0LL,
      0LL);
    (*(void (__fastcall **)(CCommonRenderingShaderCache *, _QWORD, __int64, __int128 *))(*(_QWORD *)v36 + 64LL))(
      v36,
      0LL,
      2LL,
      &v74);
    (*(void (__fastcall **)(CCommonRenderingShaderCache *, _QWORD, __int64, __int128 *))(*(_QWORD *)v36 + 80LL))(
      v36,
      0LL,
      2LL,
      &v75);
    *v73 = v38;
  }
  return v35;
}
