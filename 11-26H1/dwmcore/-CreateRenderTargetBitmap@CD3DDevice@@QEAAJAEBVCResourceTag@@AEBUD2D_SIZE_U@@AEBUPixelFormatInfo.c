/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F4650
 * Callers:
 *     ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800F6E10 (-CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x180104870 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180127FC4 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1801B61B0 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801C5500 (-EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 *     ?ProduceRealization@CStockBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1802597C0 (-ProduceRealization@CStockBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CC.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180290C5C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180296E40 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFor.c)
 *     ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x1802A75A8 (-EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x1800F4DDC (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800F4F48 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800F4FE0 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x1800F50E4 (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800F588C (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x1800F680C (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInf.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F7AD0 (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18021E4D0 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateRenderTargetBitmap(
        __int64 a1,
        const struct CResourceTag *a2,
        const struct D2D_SIZE_U *a3,
        struct PixelFormatInfo *a4,
        struct RenderTargetInfo *a5,
        int a6,
        struct IRenderTargetBitmap **a7)
{
  unsigned int v8; // r13d
  struct D2D_SIZE_U v9; // rax
  __int64 *v10; // r14
  int v11; // r12d
  float v12; // xmm6_4
  __int64 v13; // r8
  UINT32 width; // edx
  struct CScratchRenderTargetBitmap *v15; // rbx
  float v16; // xmm0_4
  int i; // eax
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rcx
  UINT32 v25; // eax
  float v26; // xmm1_4
  UINT32 height; // ecx
  unsigned int v28; // edx
  __int64 v29; // rcx
  __int64 j; // r9
  struct PixelFormatInfo *v31; // r15
  unsigned int v32; // edi
  unsigned int v33; // edi
  struct RenderTargetInfo *v34; // r15
  unsigned int v35; // edi
  float v36; // xmm6_4
  __int64 (__fastcall ***v37)(_QWORD, GUID *, struct D2D_SIZE_U *); // r9
  char v38; // di
  struct D2D_SIZE_U v39; // rcx
  int v40; // eax
  __int64 v41; // rax
  int v42; // edi
  int v43; // eax
  int v45; // eax
  struct CScratchRenderTargetBitmap *v46; // rbx
  int v47; // eax
  __int64 v48; // rax
  struct CScratchRenderTargetBitmap *v49; // rcx
  int v50; // eax
  int v51; // ecx
  int v52; // r9d
  struct D2D_SIZE_U v53; // [rsp+38h] [rbp-91h] BYREF
  char v54; // [rsp+40h] [rbp-89h]
  bool v55; // [rsp+41h] [rbp-88h]
  struct CScratchRenderTargetBitmap *v56; // [rsp+48h] [rbp-81h] BYREF
  int v57; // [rsp+50h] [rbp-79h] BYREF
  int v58; // [rsp+54h] [rbp-75h] BYREF
  struct RenderTargetInfo *v59; // [rsp+58h] [rbp-71h]
  struct PixelFormatInfo *v60; // [rsp+60h] [rbp-69h]
  const struct CResourceTag *v61; // [rsp+68h] [rbp-61h]
  _QWORD *v62; // [rsp+70h] [rbp-59h]
  int v63; // [rsp+78h] [rbp-51h] BYREF
  __int64 v64; // [rsp+7Ch] [rbp-4Dh]

  v60 = a4;
  v61 = a2;
  v8 = -2003304307;
  *a7 = 0LL;
  v59 = a5;
  v62 = a7;
  if ( *(_DWORD *)(a1 + 1124) )
  {
    v42 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3DB0, 2u, -2003304307, 0x455u, 0LL);
    goto LABEL_65;
  }
  if ( !a6 )
  {
    v56 = 0LL;
    v45 = CD3DDevice::CreateDeviceTextureTarget((CD3DDevice *)a1, a2, a3, a4, a5, &v56);
    v42 = v45;
    if ( v45 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3DB0, 2u, v45, 0x467u, 0LL);
      v49 = v56;
      if ( !v56 )
        goto LABEL_65;
      v48 = *(_QWORD *)v56;
    }
    else
    {
      v46 = v56;
      v47 = CRenderTargetBitmap::Create(v56, a7);
      v42 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3DB0, 2u, v47, 0x46Au, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v56);
        goto LABEL_65;
      }
      if ( !v46 )
        goto LABEL_65;
      v48 = *(_QWORD *)v46;
      v49 = v46;
    }
    (*(void (__fastcall **)(struct CScratchRenderTargetBitmap *))(v48 + 16))(v49);
    goto LABEL_65;
  }
  v9 = *a3;
  v10 = (__int64 *)(a1 + 456);
  v11 = 0;
  v12 = FLOAT_3_4028235e38;
  v13 = 4294967232LL;
  v53 = v9;
  width = v9.width;
  v54 = *((_BYTE *)a5 + 20);
  v55 = ((a6 - 2) & 0xFFFFFFFD) == 0;
  v15 = 0LL;
  v58 = *(_DWORD *)a4;
  v16 = (float)(int)(((v9.width + 63) & 0xFFFFFFC0) * ((v9.height + 63) & 0xFFFFFFC0));
  for ( i = *(_DWORD *)(a1 + 480); ; i = v57 - 1 )
  {
    v57 = i;
    if ( !i )
    {
      height = v53.height;
      goto LABEL_29;
    }
    v18 = *(_QWORD *)(*v10 + 8LL * (unsigned int)(i - 1));
    v19 = *(_QWORD *)(v18 + 120);
    if ( !v19 || (*(int (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19) < 0 )
    {
      DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(v10);
      *(_BYTE *)(v18 + 144) = 0;
      if ( v18 )
        CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v18);
LABEL_25:
      width = v53.width;
      continue;
    }
    v20 = *(_QWORD *)(v18 + 120);
    if ( v20 )
    {
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(v20 + 8) + 24LL))(v20 + 8, &v63);
      v21 = v63;
    }
    else
    {
      v63 = 0;
      v21 = 0;
      v64 = 3LL;
    }
    if ( v58 != v21 )
      goto LABEL_25;
    v22 = *(_QWORD *)(v18 + 120);
    v23 = v22 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v22 + 56LL))(v22);
    if ( v54 != v23 )
      goto LABEL_25;
    v24 = *(_QWORD *)(v18 + 120);
    if ( v24 )
    {
      (*(void (__fastcall **)(__int64, struct CScratchRenderTargetBitmap **))(*(_QWORD *)v24 + 88LL))(v24, &v56);
      v25 = HIDWORD(v56);
      LODWORD(v24) = (_DWORD)v56;
    }
    else
    {
      v56 = 0LL;
      v25 = 0;
    }
    width = v53.width;
    if ( v55 )
      break;
    if ( (unsigned int)v24 >= v53.width && v25 >= v53.height )
    {
      v26 = (float)(int)(v24 * v25);
      if ( (float)(v26 * (float)(1.0 / v16)) < 4.0 && v12 > v26 )
      {
        v12 = (float)(int)(v24 * v25);
        v15 = (struct CScratchRenderTargetBitmap *)v18;
      }
    }
LABEL_22:
    ;
  }
  if ( (_DWORD)v24 != v53.width )
    goto LABEL_22;
  height = v53.height;
  if ( v25 != v53.height )
    goto LABEL_22;
  v15 = (struct CScratchRenderTargetBitmap *)v18;
LABEL_29:
  if ( v15 )
  {
    v28 = *((_DWORD *)v10 + 6);
    v29 = 0LL;
    for ( j = *v10; (unsigned int)v29 < v28; v29 = (unsigned int)(v29 + 1) )
    {
      if ( v15 == *(struct CScratchRenderTargetBitmap **)(j + 8 * v29) )
        break;
    }
    if ( (unsigned int)v29 < v28 )
    {
      while ( (unsigned int)v29 < v28 - 1 )
      {
        *(_QWORD *)(j + 8 * v29) = *(_QWORD *)(j + 8LL * (unsigned int)(v29 + 1));
        v29 = (unsigned int)(v29 + 1);
        v28 = *((_DWORD *)v10 + 6);
      }
      *((_DWORD *)v10 + 6) = v28 - 1;
    }
    v31 = v60;
    v32 = *((_DWORD *)v60 + 1);
    if ( v32 != *(_DWORD *)((*(__int64 (__fastcall **)(__int64, int *, __int64, __int64))(*(_QWORD *)(*((_QWORD *)v15 + 15) + 8LL)
                                                                                        + 24LL))(
                              *((_QWORD *)v15 + 15) + 8LL,
                              &v63,
                              v13,
                              j)
                          + 4) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v15 + 15) + 16LL) + 136LL))(
        *((_QWORD *)v15 + 15) + 16LL,
        v32);
      CRenderTargetBitmap::ResetBitmapCache(v15);
    }
    v33 = *((_DWORD *)v31 + 2);
    if ( v33 != *(_DWORD *)((*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)(*((_QWORD *)v15 + 15) + 8LL) + 24LL))(
                              *((_QWORD *)v15 + 15) + 8LL,
                              &v63)
                          + 8) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v15 + 15) + 16LL) + 144LL))(
        *((_QWORD *)v15 + 15) + 16LL,
        v33);
      CRenderTargetBitmap::ResetBitmapCache(v15);
    }
    v34 = v59;
    v35 = *((_DWORD *)v59 + 2);
    if ( v35 != *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v15 + 15) + 96LL))(
                             *((_QWORD *)v15 + 15),
                             &v58) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v15 + 15) + 16LL) + 152LL))(
        *((_QWORD *)v15 + 15) + 16LL,
        v35);
      CRenderTargetBitmap::ResetBitmapCache(v15);
    }
    v36 = *((float *)v34 + 4);
    if ( v36 != *(float *)((*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)(*((_QWORD *)v15 + 15) + 16LL) + 120LL))(
                             *((_QWORD *)v15 + 15) + 16LL,
                             &v63)
                         + 16) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v15 + 15) + 16LL) + 160LL))(*((_QWORD *)v15 + 15) + 16LL);
      CRenderTargetBitmap::ResetBitmapCache(v15);
    }
    CD2DBitmapCache::MarkFullInvalid(v15);
LABEL_47:
    v37 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct D2D_SIZE_U *))*((_QWORD *)v15 + 15);
    v38 = (unsigned int)(a6 - 1) <= 1;
    v39 = 0LL;
    v53 = 0LL;
    if ( v37 )
    {
      v40 = (**v37)(v37, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, &v53);
      v39 = v53;
      if ( v40 >= 0 )
      {
        v41 = (*(__int64 (__fastcall **)(struct D2D_SIZE_U, _QWORD))(**(_QWORD **)&v53 + 120LL))(v53, 0LL);
        (*(void (__fastcall **)(__int64, const GUID *, _QWORD, _QWORD))(*(_QWORD *)v41 + 40LL))(
          v41,
          &WKPDID_D3DDebugObjectName,
          *((unsigned int *)v61 + 2),
          *(_QWORD *)v61);
        v39 = v53;
      }
    }
    if ( *((_BYTE *)v15 + 145) != v38 )
    {
      *((_BYTE *)v15 + 145) = v38;
      *((_BYTE *)v15 + 128) = v38;
      CRenderTargetBitmap::ResetBitmapCache(v15);
      v39 = v53;
    }
    if ( v39 )
      (*(void (__fastcall **)(struct D2D_SIZE_U))(**(_QWORD **)&v39 + 16LL))(v39);
    if ( *((_BYTE *)v15 + 145) )
      ++*((_DWORD *)v10 + 10);
    *v62 = ((unsigned __int64)v15 + 80) & -(__int64)(v15 != 0LL);
    goto LABEL_57;
  }
  v56 = 0LL;
  if ( ((a6 - 2) & 0xFFFFFFFD) != 0 )
  {
    v53.width = (width + 63) & 0xFFFFFFC0;
    v53.height = (height + 63) & 0xFFFFFFC0;
  }
  v56 = 0LL;
  v43 = CD3DDevice::CreateScratchRenderTargetBitmap((CD3DDevice *)(a1 & -(__int64)(v10 != 0LL)), &v53, v60, v59, &v56);
  v11 = v43;
  v42 = v43;
  if ( v43 >= 0 )
  {
    v15 = v56;
    goto LABEL_47;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v43, 0x3Eu, 0LL);
  if ( v56 )
  {
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v56);
LABEL_64:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3DB0, 2u, v11, 0x45Eu, 0LL);
  }
  else
  {
LABEL_57:
    v42 = v11;
    if ( v11 < 0 )
      goto LABEL_64;
  }
LABEL_65:
  if ( *(_DWORD *)(a1 + 1124)
    || v42 != -2005532292 && v42 != -2147024882 && v42 != -2005270523
    || !*(_DWORD *)(a1 + 440) )
  {
    goto LABEL_69;
  }
  if ( v42 != -2005270523 )
    goto LABEL_90;
  v50 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 544) + 312LL))(*(_QWORD *)(a1 + 544));
  v51 = *(_DWORD *)(a1 + 1124);
  if ( v50 == -2005270480 )
  {
    if ( !v51 )
      *(_DWORD *)(a1 + 1124) = -2005270480;
LABEL_90:
    CD2DContext::TempDisableHardwareProtection((CD2DContext *)(a1 + 16));
LABEL_69:
    if ( v42 >= 0 )
    {
LABEL_70:
      v57 = 0;
      if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v42, 0, &v57) )
      {
        v52 = v57;
        if ( v57 == -2003304307 )
        {
          if ( v42 >= 0 )
            v42 = -2003304307;
          if ( !*(_DWORD *)(a1 + 1124) )
            *(_DWORD *)(a1 + 1124) = v42;
        }
        v42 = v52;
        if ( v52 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v52, 0xB71u, 0LL);
      }
      return (unsigned int)v42;
    }
  }
  else if ( !v51 )
  {
    *(_DWORD *)(a1 + 1124) = -2005270523;
  }
  if ( !*(_DWORD *)(a1 + 1124) )
    goto LABEL_70;
  return v8;
}
