/*
 * XREFs of ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800E4690
 * Callers:
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800E2F10 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1800E34C0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?GetBits@CRenderTargetBitmap@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x1801B5EA0 (-GetBits@CRenderTargetBitmap@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800E2A7C (-Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IAEB.c)
 *     ?Lock@CWarpLockSubresource@@QEAAJPEAUD3D10_MAPPED_TEXTURE2D@@@Z @ 0x1800E2C84 (-Lock@CWarpLockSubresource@@QEAAJPEAUD3D10_MAPPED_TEXTURE2D@@@Z.c)
 *     ??1?$com_ptr_t@VCMappedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E2D20 (--1-$com_ptr_t@VCMappedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapLock@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E2E44 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapLock@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x1800E44B0 (-IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800E62DC (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800E8010 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?attach@?$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIDisplayTarget@Core@Display@Devices@Windows@@@Z @ 0x1801B56D8 (-attach@-$com_ptr_t@UIDisplayTarget@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802B4664 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CopyTexture2D(
        __int64 a1,
        struct ID3D11Texture2D *a2,
        unsigned int a3,
        struct PixelFormatInfo *a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(_QWORD, _QWORD, _QWORD, _QWORD),
        int a7,
        int a8)
{
  __int64 (__fastcall *v9)(_QWORD, _QWORD, _QWORD, _QWORD); // r15
  struct PixelFormatInfo *v11; // rbx
  int v13; // edx
  int v14; // ecx
  unsigned __int8 PixelFormatSize; // al
  struct IWarpPalLockSubresourceExtension *v16; // rcx
  int v17; // r14d
  __int64 v18; // rdi
  int v19; // eax
  int v20; // edi
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  __int64 (__fastcall *v25)(_QWORD, _DWORD *, __int64, __int64 *); // rdi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  unsigned int v30; // ebx
  int v32; // r9d
  int v33; // eax
  int v34; // eax
  struct IUnknown *v35; // rdx
  struct IUnknown *v36; // rbx
  int v37; // eax
  int v38; // esi
  int v39; // edi
  UINT RowPitch; // r15d
  unsigned int v41; // r14d
  int v42; // eax
  unsigned int v43; // [rsp+20h] [rbp-E0h]
  struct IUnknown *v44; // [rsp+30h] [rbp-D0h]
  struct IUnknown *v45; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+58h] [rbp-A8h] BYREF
  struct IBitmapSource *v47; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v49; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v50; // [rsp+74h] [rbp-8Ch] BYREF
  int v51; // [rsp+78h] [rbp-88h]
  struct D3D10_MAPPED_TEXTURE2D v52; // [rsp+80h] [rbp-80h] BYREF
  int v53; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v54)(__int64, _DWORD *, _QWORD, __int64 *); // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h] BYREF
  struct PixelFormatInfo *v56; // [rsp+A8h] [rbp-58h]
  _DWORD v57[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-40h] BYREF
  int v59; // [rsp+C8h] [rbp-38h]
  int v60; // [rsp+CCh] [rbp-34h]
  _DWORD v61[6]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v62[24]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v63[4]; // [rsp+100h] [rbp+0h] BYREF
  enum DXGI_FORMAT v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+11Ch] [rbp+1Ch]
  __int64 v66; // [rsp+124h] [rbp+24h]
  struct D3D10_MAPPED_TEXTURE2D v67; // [rsp+130h] [rbp+30h]

  v9 = a6;
  v57[0] = a7;
  v11 = a4;
  v13 = a5[2] - *a5;
  v14 = a5[3] - a5[1];
  v57[1] = a8;
  v52.pData = "DWM Temp Readback (bitmap1)";
  v52.RowPitch = 27;
  v56 = a4;
  LODWORD(v45) = a3;
  v67 = v52;
  v54 = (__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64 *))a6;
  v47 = 0LL;
  v46 = 0LL;
  v48 = 0LL;
  v58 = 0LL;
  v59 = v13;
  v60 = v14;
  v57[2] = v13;
  v57[3] = v14;
  LOBYTE(v51) = 0;
  if ( *(_DWORD *)(a1 + 1124) )
  {
    v20 = -2003304307;
    v43 = 2693;
LABEL_25:
    v32 = v20;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3D58, 0xAu, v32, v43, 0LL);
    goto LABEL_17;
  }
  ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a2->lpVtbl->GetDesc)(a2, v63);
  if ( *(_DWORD *)v11 != v64 )
  {
    v20 = -2147024809;
    v43 = 2698;
    goto LABEL_25;
  }
  PixelFormatSize = GetPixelFormatSize(v64);
  v16 = *(struct IWarpPalLockSubresourceExtension **)(a1 + 592);
  v17 = PixelFormatSize >> 3;
  v53 = v17;
  if ( !v16 )
  {
    v18 = *(_QWORD *)(a1 + 544);
    v63[0] = a5[2] - *a5;
    v63[1] = a5[3] - a5[1];
    v65 = 3LL;
    v66 = 0x20000LL;
    v54 = *(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)v18 + 40LL);
    v19 = v54(v18, v63, 0LL, &v46);
    v20 = v19;
    if ( v19 < 0 )
    {
      v43 = 2732;
    }
    else
    {
      (*(void (__fastcall **)(__int64, const GUID *, _QWORD, void *))(*(_QWORD *)v46 + 40LL))(
        v46,
        &WKPDID_D3DDebugObjectName,
        v67.RowPitch,
        v67.pData);
      v21 = *(__int64 **)(a1 + 552);
      v61[0] = *a5;
      v61[1] = a5[1];
      v61[3] = a5[2];
      v61[4] = a5[3];
      v61[2] = 0;
      v61[5] = 1;
      v22 = *v21;
      v51 = 1;
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, _DWORD, _DWORD, struct ID3D11Texture2D *, _DWORD, _DWORD *))(v22 + 368))(
        v21,
        v46,
        0LL,
        0LL,
        0,
        0,
        a2,
        (_DWORD)v45,
        v61);
      v23 = *(_QWORD *)(a1 + 552);
      v52 = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, struct D3D10_MAPPED_TEXTURE2D *))(*(_QWORD *)v23 + 112LL))(
              v23,
              v46,
              0LL,
              1LL,
              0,
              &v52);
      v20 = v19;
      if ( v19 >= 0 )
      {
        v24 = HrCreateBitmapFromMemoryEx(
                a5[2] - *a5,
                a5[3] - a5[1],
                v11,
                v52.RowPitch,
                v17 * (a5[2] - *a5) + v52.RowPitch * (a5[3] - a5[1]),
                (unsigned __int8 *)v52.pData,
                0LL,
                &v47);
        v20 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3D58, 0xAu, v24, 0xAD5u, 0LL);
LABEL_16:
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 552) + 120LL))(
            *(_QWORD *)(a1 + 552),
            v46,
            0LL);
          goto LABEL_17;
        }
LABEL_7:
        v25 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, __int64 *))(*(_QWORD *)v9 + 24LL);
        if ( v48 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
        v26 = v25(v9, v57, 2LL, &v48);
        v20 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3D58, 0xAu, v26, 0xAF6u, 0LL);
          goto LABEL_15;
        }
        (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v48 + 24LL))(v48, v62);
        if ( !IsEqualPixelFormatInfo((enum DXGI_FORMAT *)v11, (const struct PixelFormatInfo *)v62) )
        {
          v45 = 0LL;
          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v45);
          v34 = CFormatConverter::HrConvertBitmap(
                  v47,
                  (const struct PixelFormatInfo *)v62,
                  (struct IBitmapSource **)&v45);
          v20 = v34;
          if ( v34 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3D58, 0xAu, v34, 0xB01u, 0LL);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v45);
            goto LABEL_15;
          }
          v35 = v45;
          v45 = 0LL;
          wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayTarget,wil::err_returncode_policy>::attach(&v47, v35);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v45);
        }
        v55 = 0LL;
        v49 = 0;
        v27 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(*(_QWORD *)v48 + 48LL))(v48, &v49, &v55);
        v20 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3D58, 0xAu, v27, 0xB08u, 0LL);
        }
        else
        {
          v50 = 0;
          v28 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v48 + 40LL))(v48, &v50);
          v20 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3D58, 0xAu, v28, 0xB0Bu, 0LL);
          }
          else
          {
            v29 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int64 *, _QWORD, _QWORD, __int64))(*(_QWORD *)v47 + 48LL))(
                    v47,
                    &v58,
                    v50,
                    v49,
                    v55);
            v20 = v29;
            if ( v29 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3D58, 0xAu, v29, 0xB1Au, 0LL);
          }
        }
LABEL_15:
        if ( !(_BYTE)v51 )
          goto LABEL_17;
        goto LABEL_16;
      }
      v43 = 2759;
    }
    v32 = v19;
    goto LABEL_26;
  }
  v45 = 0LL;
  v33 = CWarpLockSubresource::Create(v16, a2, a3, v11, (struct CWarpLockSubresource **)&v45);
  v20 = v33;
  if ( v33 >= 0 )
  {
    v36 = v45;
    v52 = 0LL;
    v37 = CWarpLockSubresource::Lock((CWarpLockSubresource *)v45, &v52);
    v20 = v37;
    if ( v37 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3D58, 0xAu, v37, 0xAE1u, 0LL);
    }
    else
    {
      v38 = *a5;
      v39 = a5[1];
      RowPitch = v52.RowPitch;
      v41 = v52.RowPitch * (a5[3] - v39) + (a5[2] - *a5) * v17;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v47);
      v44 = v36;
      v11 = v56;
      v42 = HrCreateBitmapFromMemoryEx(
              a5[2] - *a5,
              a5[3] - a5[1],
              v56,
              RowPitch,
              v41,
              (unsigned __int8 *)v52.pData + RowPitch * v39 + v53 * v38,
              v44,
              &v47);
      v20 = v42;
      if ( v42 >= 0 )
      {
        wil::com_ptr_t<CMappedTexture,wil::err_returncode_policy>::~com_ptr_t<CMappedTexture,wil::err_returncode_policy>((__int64 *)&v45);
        v9 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v54;
        goto LABEL_7;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3D58, 0xAu, v42, 0xAF0u, 0LL);
    }
    wil::com_ptr_t<CMappedTexture,wil::err_returncode_policy>::~com_ptr_t<CMappedTexture,wil::err_returncode_policy>((__int64 *)&v45);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F3D58, 0xAu, v33, 0xADEu, 0LL);
    if ( v45 )
      CMILRefCountBaseT<IBitmapLock,CMilObjectDeleter>::InternalRelease((__int64)v45);
  }
LABEL_17:
  v30 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, v20, 0);
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  if ( v46 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  if ( v47 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v47 + 16LL))(v47);
  return v30;
}
