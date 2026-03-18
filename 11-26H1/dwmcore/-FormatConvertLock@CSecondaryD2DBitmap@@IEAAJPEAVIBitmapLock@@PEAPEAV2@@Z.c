/*
 * XREFs of ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x1802AFDF8
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800E3CE0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800E62DC (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x1802B0178 (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802B4664 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::FormatConvertLock(
        CSecondaryD2DBitmap *this,
        struct IBitmapLock *a2,
        struct IBitmapLock **a3)
{
  __int64 v3; // rax
  void (__fastcall *v6)(struct IBitmapLock *, _BYTE *); // rax
  int v8; // ecx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  struct WICRect *v14; // rdx
  int v15; // eax
  unsigned int v17; // [rsp+20h] [rbp-59h]
  unsigned int v18; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-35h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v21; // [rsp+4Ch] [rbp-2Dh] BYREF
  struct IBitmapDest *v22; // [rsp+50h] [rbp-29h] BYREF
  struct IBitmapSource *v23; // [rsp+58h] [rbp-21h] BYREF
  struct IBitmapSource *v24; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int8 *v25; // [rsp+68h] [rbp-11h] BYREF
  _DWORD v26[4]; // [rsp+70h] [rbp-9h] BYREF
  _BYTE v27[16]; // [rsp+80h] [rbp+7h] BYREF
  _BYTE v28[16]; // [rsp+90h] [rbp+17h] BYREF

  v3 = *(_QWORD *)a2;
  v24 = 0LL;
  v23 = 0LL;
  v6 = *(void (__fastcall **)(struct IBitmapLock *, _BYTE *))(v3 + 24);
  v22 = 0LL;
  v6(a2, v27);
  v26[0] = *((_DWORD *)this + 40);
  v8 = *(_DWORD *)((*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 10) + 24LL))((char *)this + 80, v28)
                 + 4);
  v26[2] = *((_DWORD *)this + 56);
  v9 = *(_QWORD *)a2;
  v26[1] = v8;
  v21 = 0;
  v20 = 0;
  v10 = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *, unsigned int *))(v9 + 32))(a2, &v21, &v20);
  v11 = v10;
  if ( v10 < 0 )
  {
    v17 = 209;
    goto LABEL_15;
  }
  v12 = *(_QWORD *)a2;
  v19 = 0;
  v10 = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *))(v12 + 40))(a2, &v19);
  v11 = v10;
  if ( v10 < 0 )
  {
    v17 = 212;
    goto LABEL_15;
  }
  v13 = *(_QWORD *)a2;
  v18 = 0;
  v25 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *, unsigned __int8 **))(v13 + 48))(a2, &v18, &v25);
  v11 = v10;
  if ( v10 < 0 )
  {
    v17 = 216;
    goto LABEL_15;
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v24);
  v10 = HrCreateBitmapFromMemoryEx(v21, v20, (const struct PixelFormatInfo *)v27, v19, v18, v25, 0LL, &v24);
  v11 = v10;
  if ( v10 < 0 )
  {
    v17 = 225;
    goto LABEL_15;
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v23);
  v10 = CFormatConverter::HrConvertBitmap(v24, (const struct PixelFormatInfo *)v26, &v23);
  v11 = v10;
  if ( v10 < 0 )
  {
    v17 = 230;
    goto LABEL_15;
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v22);
  v15 = HrCreateDestBitmapCopy(v23, v14, &v22);
  v11 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xEBu, 0LL);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, struct IBitmapLock **))(*(_QWORD *)v22 + 24LL))(
            v22,
            0LL,
            1LL,
            a3);
    v11 = v10;
    if ( v10 < 0 )
    {
      v17 = 239;
LABEL_15:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v17, 0LL);
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
  return v11;
}
