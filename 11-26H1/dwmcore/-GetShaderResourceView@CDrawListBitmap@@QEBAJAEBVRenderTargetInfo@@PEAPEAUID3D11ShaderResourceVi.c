/*
 * XREFs of ?GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x1800FA460
 * Callers:
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800F9FB0 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800FA380 (-SetStateOnDevice@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListBitmap::GetShaderResourceView(
        CDrawListBitmap *this,
        const struct RenderTargetInfo *a2,
        struct ID3D11ShaderResourceView **a3,
        struct PixelFormatInfo *a4)
{
  __int64 *v4; // rcx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rax
  int v12[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v13[16]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (__int64 *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    v7 = *v4;
    *(_QWORD *)v12 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, const struct RenderTargetInfo *, int *))(v7 + 104))(v4, a2, v12);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x72,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
        (const char *)(unsigned int)v8);
      if ( *(_QWORD *)v12 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v12 + 16LL))(*(_QWORD *)v12);
      return v9;
    }
    else
    {
      *a3 = (struct ID3D11ShaderResourceView *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v12 + 128LL))(*(_QWORD *)v12);
      if ( a4 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*(_QWORD *)v12 + 8LL) + 24LL))(
                *(_QWORD *)v12 + 8LL,
                v13);
        *(_QWORD *)a4 = *(_QWORD *)v10;
        *((_DWORD *)a4 + 2) = *(_DWORD *)(v10 + 8);
      }
      if ( *(_QWORD *)v12 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v12 + 16LL))(*(_QWORD *)v12);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
