/*
 * XREFs of ?Transcode@CTranscodeBitmap@@QEAAJPEAVIDeviceTexture@@AEBUPixelFormatInfo@@@Z @ 0x1802B27FC
 * Callers:
 *     ?Transcode@CSwapChainRealization@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCTranscodeBitmap@@@Z @ 0x1802AE37C (-Transcode@CSwapChainRealization@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCTranscodeBitmap@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCMappedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E2D20 (--1-$com_ptr_t@VCMappedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MarkFullInvalid@CCachedTexture@@QEAAXXZ @ 0x1802B1DE4 (-MarkFullInvalid@CCachedTexture@@QEAAXXZ.c)
 *     ?EnsureSysmemTexture@CTranscodeBitmap@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z @ 0x1802B24D0 (-EnsureSysmemTexture@CTranscodeBitmap@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802B4664 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 *     ?Create@CMappedTexture@@SAJPEAVIDeviceTexture@@PEAPEAV1@@Z @ 0x1802B8904 (-Create@CMappedTexture@@SAJPEAVIDeviceTexture@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTranscodeBitmap::Transcode(
        CCachedTexture **this,
        struct IDeviceTexture *a2,
        const struct PixelFormatInfo *a3)
{
  const struct D2D_SIZE_U *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  CCachedTexture *v11; // rdi
  __int64 (__fastcall *v12)(char *, _QWORD, __int64, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rdx
  CCachedTexture *v15; // rbx
  CCachedTexture **v16; // rdi
  CCachedTexture **i; // rbx
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  struct IBitmapSource *v20; // [rsp+38h] [rbp-18h] BYREF
  struct IBitmapSource *v21; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v24; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v25; // [rsp+88h] [rbp+38h] BYREF

  v6 = (const struct D2D_SIZE_U *)(*(__int64 (__fastcall **)(struct IDeviceTexture *, struct IBitmapSource **))(*(_QWORD *)a2 + 88LL))(
                                    a2,
                                    &v21);
  v7 = CTranscodeBitmap::EnsureSysmemTexture((CTranscodeBitmap *)this, v6, a3);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v21 = 0LL;
    v9 = CMappedTexture::Create(a2, &v21);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v20 = 0LL;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v20);
      v10 = CFormatConverter::HrConvertBitmap(v21, a3, &v20);
      v8 = v10;
      if ( v10 >= 0 )
      {
        v11 = this[2];
        v19 = 0LL;
        v12 = *(__int64 (__fastcall **)(char *, _QWORD, __int64, __int64 *))(*((_QWORD *)v11 + 31) + 24LL);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v19);
        v13 = v12((char *)v11 + 248, 0LL, 2LL, &v19);
        v8 = v13;
        if ( v13 >= 0 )
        {
          v25 = 0;
          v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 40LL))(v19, &v25);
          v8 = v13;
          if ( v13 >= 0 )
          {
            v24 = 0;
            v22 = 0LL;
            v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(*(_QWORD *)v19 + 48LL))(
                    v19,
                    &v24,
                    &v22);
            v8 = v13;
            if ( v13 >= 0 )
            {
              v13 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)v20 + 48LL))(
                      v20,
                      0LL,
                      v25,
                      v24,
                      v22);
              v8 = v13;
              if ( v13 >= 0 )
              {
                v15 = this[3];
                *((_BYTE *)this + 32) = 1;
                CCachedTexture::MarkFullInvalid(v15);
                v16 = (CCachedTexture **)*((_QWORD *)v15 + 22);
                for ( i = (CCachedTexture **)*((_QWORD *)v15 + 21); i != v16; ++i )
                  CCachedTexture::MarkFullInvalid(*i);
                wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
                wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
                v8 = 0;
                goto LABEL_21;
              }
              v14 = 63LL;
            }
            else
            {
              v14 = 56LL;
            }
          }
          else
          {
            v14 = 52LL;
          }
        }
        else
        {
          v14 = 49LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\transcodebitmap.cpp",
          (const char *)(unsigned int)v13);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\transcodebitmap.cpp",
          (const char *)(unsigned int)v10);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\transcodebitmap.cpp",
        (const char *)(unsigned int)v9);
    }
LABEL_21:
    wil::com_ptr_t<CMappedTexture,wil::err_returncode_policy>::~com_ptr_t<CMappedTexture,wil::err_returncode_policy>((__int64 *)&v21);
    return v8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\transcodebitmap.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
