/*
 * XREFs of ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x18010115C
 * Callers:
 *     ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x180101734 (-RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@4@Z @ 0x180101D14 (-RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4.c)
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x180105FD8 (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18012FFC8 (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUD2D_POINTANDSIZE_L@@2W4SurfaceShaderType@@@Z @ 0x180250B7C (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUD2D_POINTA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x180100E50 (-GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 *     ??$_Reallocate@$00@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXAEA_K@Z @ 0x18010169C (--$_Reallocate@$00@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@st.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceShaderComposer::RunShader(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        float *a6,
        unsigned int a7,
        unsigned __int64 *a8,
        char a9,
        __int64 a10,
        __int64 a11,
        __int128 *a12,
        char a13)
{
  __int64 v15; // rax
  int (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rdi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // r12
  float v20; // xmm1_4
  float v21; // xmm0_4
  int v22; // eax
  float v23; // xmm1_4
  int (__fastcall *v24)(_QWORD, GUID *, __int64 *); // rbx
  int v25; // eax
  unsigned int v26; // r14d
  _OWORD *v27; // rax
  __int64 v28; // rax
  __int64 *v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v35; // rcx
  int D3DSamplerStateNoRef; // eax
  int (__fastcall *v37)(_QWORD, GUID *, __int64 *); // rbx
  __int16 v38; // [rsp+40h] [rbp-99h] BYREF
  char v39; // [rsp+42h] [rbp-97h]
  __int64 v40; // [rsp+50h] [rbp-89h] BYREF
  GUID *v41; // [rsp+58h] [rbp-81h] BYREF
  unsigned __int64 v42; // [rsp+60h] [rbp-79h] BYREF
  __int128 v43; // [rsp+68h] [rbp-71h] BYREF
  __int64 v44; // [rsp+78h] [rbp-61h]
  unsigned int v45; // [rsp+80h] [rbp-59h]
  __int64 v46; // [rsp+88h] [rbp-51h] BYREF
  __int64 v47; // [rsp+90h] [rbp-49h] BYREF
  __int128 *v48; // [rsp+98h] [rbp-41h]
  __int64 v49; // [rsp+A0h] [rbp-39h]
  __int128 v50; // [rsp+A8h] [rbp-31h] BYREF
  __int128 v51; // [rsp+B8h] [rbp-21h] BYREF
  __int128 v52; // [rsp+C8h] [rbp-11h] BYREF

  v45 = a7;
  v47 = a10;
  v49 = a11;
  v15 = *(_QWORD *)(a1 + 96);
  v41 = 0LL;
  v40 = 0LL;
  v46 = a4;
  v16 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v15 + 552);
  v17 = *a8;
  v48 = a12;
  v44 = 0LL;
  v42 = v17;
  v51 = 0LL;
  v52 = 0LL;
  v50 = 0LL;
  v43 = 0LL;
  if ( v17 )
  {
    if ( v17 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<CDataSourceReader *>::_Reallocate<1>(&v43, &v42);
  }
  v18 = a8[1];
  v19 = v18 + 2 * *a8 + *a8;
  while ( v18 != v19 )
  {
    v35 = *(_QWORD *)(a1 + 96);
    v38 = *(_WORD *)v18;
    v39 = *(_BYTE *)(v18 + 2);
    v42 = 0LL;
    D3DSamplerStateNoRef = CD3DDevice::GetD3DSamplerStateNoRef(v35, (unsigned __int8 *)&v38, &v42);
    v26 = D3DSamplerStateNoRef;
    if ( D3DSamplerStateNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D3DSamplerStateNoRef, 0xFCu, 0LL);
      goto LABEL_16;
    }
    if ( *((_QWORD *)&v43 + 1) == v44 )
    {
      std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
        &v43,
        *((__int64 *)&v43 + 1),
        (__int64 *)&v42);
    }
    else
    {
      **((_QWORD **)&v43 + 1) = v42;
      *((_QWORD *)&v43 + 1) += 8LL;
    }
    v18 += 3LL;
  }
  if ( v48 )
  {
    v52 = *v48;
  }
  else
  {
    v20 = a6[1];
    v21 = *a6 + a6[2];
    LODWORD(v52) = (int)*a6;
    v22 = (int)v20;
    v23 = v20 + a6[3];
    DWORD1(v52) = v22;
    DWORD2(v52) = (int)v21;
    HIDWORD(v52) = (int)v23;
  }
  v24 = (*v16)[131];
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
  v24(v16, *(GUID **)(a1 + 72), (__int64 *)&v41);
  if ( a9 )
  {
    v37 = **v16;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v40);
    if ( v37(v16, &GUID_b4e3c01d_e79e_4637_91b2_510e9f4c9b8f, &v40) >= 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 1160LL))(v40, 1LL);
  }
  v25 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, __int64, _DWORD, __int128 *))(*v16)[14])(
          v16,
          *(_QWORD *)(a1 + 64),
          0LL,
          4LL,
          0,
          &v50);
  v26 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x120u, 0LL);
  }
  else
  {
    v27 = (_OWORD *)v50;
    *(_OWORD *)v50 = *a2;
    v27[1] = a2[1];
    v27[2] = a2[2];
    v27[3] = a2[3];
    v27[4] = a2[4];
    v27[5] = a2[5];
    v27[6] = a2[6];
    v27[7] = a2[7];
    v27[8] = a2[8];
    (*v16)[15](v16, *(GUID **)(a1 + 64), 0LL);
    if ( a13 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int128 *, __int64))(*v16)[133])(
        v16,
        v47,
        &v52,
        1LL);
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, _QWORD, _QWORD))(*v16)[9])(
      v16,
      v49,
      0LL,
      0LL);
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, __int64))(*v16)[8])(
      v16,
      0LL,
      a5,
      v46);
    v28 = *(_QWORD *)(a1 + 80);
    if ( v28 )
    {
      v29 = &v46;
      v30 = *(unsigned int *)(a1 + 88);
      v31 = 1LL;
      v46 = *(_QWORD *)(v28 + 120);
    }
    else
    {
      v29 = 0LL;
      v31 = 0LL;
      v30 = 0LL;
    }
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int64, __int64 *))(*v16)[16])(
      v16,
      v30,
      v31,
      v29);
    (*v16)[10](v16, 0LL, (__int64 *)((__int64)(*((_QWORD *)&v43 + 1) - v43) >> 3));
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, __int64))(*v16)[35])(
      v16,
      *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL * v45 + 1568),
      0LL,
      0xFFFFFFFFLL);
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, __int64 *, _QWORD))(*v16)[33])(
      v16,
      1LL,
      &v47,
      0LL);
    (*v16)[45](v16, (GUID *)1, (__int64 *)&v52);
    (*v16)[44](v16, (GUID *)1, (__int64 *)a6);
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*v16)[13])(v16, 6LL);
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, __int128 *))(*v16)[8])(
      v16,
      0LL,
      a5,
      &v51);
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD, _QWORD, _QWORD))(*v16)[33])(
      v16,
      0LL,
      0LL,
      0LL);
    if ( v40 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v40 + 1160LL))(v40, 0LL);
  }
LABEL_16:
  (*v16)[131](v16, v41, 0LL);
  if ( (_QWORD)v43 )
  {
    std::_Deallocate<16>((void *)v43, (v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL);
    v44 = 0LL;
    v43 = 0LL;
  }
  v32 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = (__int64)v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  return v26;
}
