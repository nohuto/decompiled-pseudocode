/*
 * XREFs of ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1800E0C94
 * Callers:
 *     ?CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800E0BF0 (-CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180224A60 (-Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x1800E0F48 (-EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1800E1130 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompressedSourceBitmap::EnsureUncompressedBitmap(CCompressedSourceBitmap *this)
{
  __int64 *v1; // rsi
  int v3; // eax
  unsigned int v4; // edi
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  int BitmapFromWICBitmapSource; // eax
  void (*v16)(void); // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v18; // [rsp+60h] [rbp+20h] BYREF
  struct IWICBitmapSource *v19; // [rsp+68h] [rbp+28h] BYREF

  v1 = (__int64 *)((char *)this + 144);
  if ( *((_QWORD *)this + 18) )
    return 0LL;
  v3 = CCompressedSourceBitmap::EnsureWICBitmapFrame(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x93,
      (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  v5 = (__int64 *)*((_QWORD *)this + 16);
  v6 = *v5;
  v18 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v6 + 80))(v5, &v18);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
      (const char *)(unsigned int)v7);
    if ( !v18 )
      return v4;
    v16 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
LABEL_17:
    v16();
    return v4;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v18 + 64LL))(
         v18,
         *((_QWORD *)this + 17),
         &GUID_WICPixelFormat32bppPBGRA,
         0LL,
         0LL,
         0LL,
         0);
  v4 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9D,
      (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
      (const char *)(unsigned int)v8);
LABEL_29:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
    return v4;
  }
  v9 = (__int64 *)*((_QWORD *)this + 16);
  v10 = *v9;
  v19 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, struct IWICBitmapSource **))(v10 + 144))(
          v9,
          v18,
          2LL,
          &v19);
  v4 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2,
      (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
      (const char *)(unsigned int)v11);
    if ( v19 )
      ((void (__fastcall *)(struct IWICBitmapSource *))v19->lpVtbl->Release)(v19);
    if ( !v18 )
      return v4;
    v16 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
    goto LABEL_17;
  }
  v12 = ((__int64 (*)(void))v19->lpVtbl[1].Release)();
  v13 = v12;
  if ( v12 >= 0 )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
    BitmapFromWICBitmapSource = HrCreateBitmapFromWICBitmapSource(v19, (struct IBitmapSource **)v1);
    v4 = BitmapFromWICBitmapSource;
    if ( BitmapFromWICBitmapSource >= 0 )
    {
      if ( v19 )
        ((void (__fastcall *)(struct IWICBitmapSource *))v19->lpVtbl->Release)(v19);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA9,
      (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
      (const char *)(unsigned int)BitmapFromWICBitmapSource);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
    goto LABEL_29;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA5,
    (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
    (const char *)(unsigned int)v12);
  if ( v19 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v19->lpVtbl->Release)(v19);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return v13;
}
