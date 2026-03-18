/*
 * XREFs of ?Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180224A60
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1800E0C94 (-EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompressedSourceBitmap::Lock(
        CCompressedSourceBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        struct IBitmapLock **a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v8 = CCompressedSourceBitmap::EnsureUncompressedBitmap((CCompressedSourceBitmap *)((char *)this - 16));
  v9 = v8;
  if ( v8 >= 0 )
  {
    v14 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v14);
    v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 16))(
            *((_QWORD *)this + 16),
            &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
            &v14);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, const struct WICRect *, _QWORD, struct IBitmapLock **))(*(_QWORD *)v14 + 24LL))(
              v14,
              a2,
              a3,
              a4);
      v9 = v10;
      if ( v10 >= 0 )
      {
        v9 = 0;
        goto LABEL_9;
      }
      v11 = 91LL;
    }
    else
    {
      v11 = 89LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
      (const char *)(unsigned int)v10);
LABEL_9:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v14);
    return v9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x56,
    (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
