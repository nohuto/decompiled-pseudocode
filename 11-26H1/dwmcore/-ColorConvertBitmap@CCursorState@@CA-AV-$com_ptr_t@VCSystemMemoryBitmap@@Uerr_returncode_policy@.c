/*
 * XREFs of ?ColorConvertBitmap@CCursorState@@CA?AV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAVCSystemMemoryBitmap@@@Z @ 0x180291388
 * Callers:
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x180291690 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x1800E1FE0 (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800E646C (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void ***__fastcall CCursorState::ColorConvertBitmap(void ***a1, __int64 a2)
{
  CSystemMemoryBitmap *v4; // rax
  void **v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64, __int64 *, __int64, __int64 *); // rbx
  int v9; // eax
  int v10; // eax
  void **v11; // rdi
  __int64 (__fastcall *v12)(void **, __int64 *, __int64, __int64 *); // rbx
  int v13; // eax
  int v14; // eax
  const char *v15; // r9
  unsigned int v16; // ecx
  _DWORD *v17; // rdx
  int *v18; // r8
  int v20; // [rsp+20h] [rbp-29h]
  unsigned int v21; // [rsp+30h] [rbp-19h] BYREF
  int v22; // [rsp+34h] [rbp-15h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-11h] BYREF
  unsigned int v24; // [rsp+3Ch] [rbp-Dh]
  _DWORD *v25; // [rsp+40h] [rbp-9h] BYREF
  int *v26; // [rsp+48h] [rbp-1h] BYREF
  __int64 v27; // [rsp+50h] [rbp+7h] BYREF
  __int64 v28; // [rsp+58h] [rbp+Fh] BYREF
  int v29; // [rsp+60h] [rbp+17h] BYREF
  __int64 v30; // [rsp+64h] [rbp+1Bh]
  __int64 v31; // [rsp+70h] [rbp+27h] BYREF
  unsigned int v32; // [rsp+78h] [rbp+2Fh]
  unsigned int v33; // [rsp+7Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v4 = (CSystemMemoryBitmap *)operator new(0x98uLL);
  if ( v4 )
    v4 = CSystemMemoryBitmap::CSystemMemoryBitmap(v4);
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    a1,
    (__int64)v4);
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(a2 + 120) + 32LL))(a2 + 120, &v23);
  v5 = *a1;
  v29 = 87;
  v30 = 1LL;
  v6 = CSystemMemoryBitmap::HrInit(v5, v23, v24, (enum DXGI_FORMAT *)&v29, 0);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE1,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v6,
      v20);
  v32 = v23;
  v33 = v24;
  v7 = *(_QWORD *)(a2 + 16);
  v31 = 0LL;
  v28 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64 *))(v7 + 24);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v28);
  v9 = v8(a2 + 16, &v31, 1LL, &v28);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v9,
      v20);
  v22 = 0;
  v25 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, int *, _DWORD **))(*(_QWORD *)v28 + 48LL))(v28, &v22, &v25);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xEB,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v10,
      v20);
  v11 = *a1;
  v27 = 0LL;
  v12 = (__int64 (__fastcall *)(void **, __int64 *, __int64, __int64 *))*((_QWORD *)v11[2] + 3);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v27);
  v13 = v12(v11 + 2, &v31, 2LL, &v27);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xEE,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v13,
      v20);
  v21 = 0;
  v26 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *, int **))(*(_QWORD *)v27 + 48LL))(v27, &v21, &v26);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF3,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      (const char *)(unsigned int)v14,
      v20);
  if ( v22 != v21 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xF6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
      v15);
  v16 = v21 >> 2;
  if ( v21 >> 2 )
  {
    v17 = v25;
    v18 = v26;
    do
    {
      *v18 = *v17 ^ (~*v17 << 24);
      v17 = v25 + 1;
      v18 = v26 + 1;
      ++v25;
      ++v26;
      --v16;
    }
    while ( v16 );
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v28);
  return a1;
}
