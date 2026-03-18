/*
 * XREFs of ?CopyPixels@CSysmemTexture@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1802B9090
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800E6E4C (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSysmemTexture::CopyPixels(
        CSysmemTexture *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  __int64 v5; // rax
  __int64 (__fastcall *v10)(char *, const struct WICRect *, __int64, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  unsigned int v15; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+54h] [rbp-1Ch] BYREF
  int v17; // [rsp+58h] [rbp-18h] BYREF
  __int64 v18; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v21; // [rsp+A0h] [rbp+30h] BYREF

  v5 = *((_QWORD *)this + 1);
  v18 = 0LL;
  v10 = *(__int64 (__fastcall **)(char *, const struct WICRect *, __int64, __int64 *))(v5 + 24);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v18);
  v11 = v10((char *)this + 8, a2, 1LL, &v18);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 86LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\SysmemTexture.h",
      (const char *)(unsigned int)v11);
    goto LABEL_12;
  }
  v17 = 0;
  v16 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, int *, unsigned int *))(*(_QWORD *)v18 + 32LL))(v18, &v17, &v16);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 90LL;
    goto LABEL_11;
  }
  v15 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 40LL))(v18, &v15);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 93LL;
    goto LABEL_11;
  }
  Src = 0LL;
  v21 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v18 + 48LL))(
          v18,
          &v21,
          &Src);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 99LL;
    goto LABEL_11;
  }
  v11 = CBitmap::CopyPixelsHelper((enum DXGI_FORMAT)*((_DWORD *)this - 20), a2->Width, v16, v15, v21, Src, a3, a4, a5);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 110LL;
    goto LABEL_11;
  }
LABEL_12:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
  return v12;
}
