/*
 * XREFs of ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x1800E0F48
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x1800E0B20 (-GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z.c)
 *     ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1800E0C94 (-EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompressedSourceBitmap::EnsureWICBitmapFrame(CCompressedSourceBitmap *this)
{
  __int64 *v1; // r14
  __int64 *v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64 *); // rdi
  int v11; // eax
  void (*v12)(void); // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v17; // [rsp+60h] [rbp+30h] BYREF
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF
  __int64 v19; // [rsp+70h] [rbp+40h]

  v1 = (__int64 *)((char *)this + 136);
  if ( *((_QWORD *)this + 17) )
    return 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 16);
  v4 = *v3;
  v17 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 112))(v3, &v17);
  if ( (v5 & 0x80000000) != 0 )
  {
    v14 = 120LL;
    goto LABEL_19;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v17 + 128LL))(
         v17,
         *((_QWORD *)this + 19),
         *((unsigned int *)this + 40));
  if ( (v5 & 0x80000000) != 0 )
  {
    v14 = 123LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
      (const char *)v5);
    if ( !v17 )
      return v5;
    v12 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
LABEL_11:
    v12();
    return v5;
  }
  v19 = 0LL;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v17 + 40LL))(v17, 0LL, 0LL, 0LL);
  v6 = (__int64 *)*((_QWORD *)this + 16);
  v7 = *v6;
  v18 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, _QWORD, __int64 *))(v7 + 32))(
         v6,
         v17,
         &GUID_VendorMicrosoft,
         0LL,
         &v18);
  v5 = v8;
  if ( v8 < 0 )
  {
    v15 = 131LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
      (const char *)(unsigned int)v8);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
    return v5;
  }
  v9 = v18;
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 104LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
  v8 = v10(v9, 0LL, v1);
  v5 = v8;
  if ( v8 < 0 )
  {
    v15 = 133LL;
    goto LABEL_24;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)*v1 + 24LL))(
          *v1,
          (char *)this + 88,
          (char *)this + 92);
  v5 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88,
      (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\compressedsourcebitmap.cpp",
      (const char *)(unsigned int)v11);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( !v17 )
      return v5;
    v12 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
    goto LABEL_11;
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return 0LL;
}
