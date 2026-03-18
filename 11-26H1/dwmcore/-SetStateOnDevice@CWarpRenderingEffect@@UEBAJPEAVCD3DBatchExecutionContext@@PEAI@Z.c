/*
 * XREFs of ?SetStateOnDevice@CWarpRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800FA380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x1800FA460 (-GetShaderResourceView@CDrawListBitmap@@QEBAJAEBVRenderTargetInfo@@PEAPEAUID3D11ShaderResourceVi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWarpRenderingEffect::SetStateOnDevice(
        CWarpRenderingEffect *this,
        const struct RenderTargetInfo **a2,
        unsigned int *a3)
{
  unsigned int v4; // ebx
  CDrawListBitmap *v5; // rcx
  int ShaderResourceView; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rdx
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  v5 = (CDrawListBitmap *)(*((_QWORD *)this + 2) + 16LL);
  v12 = 0LL;
  if ( *((_QWORD *)v5 + 1) )
  {
    v4 = 1;
    ShaderResourceView = CDrawListBitmap::GetShaderResourceView(
                           v5,
                           a2[14],
                           (struct ID3D11ShaderResourceView **)&v12,
                           0LL);
    if ( ShaderResourceView < 0 )
    {
      v11 = 27LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\warprenderingeffect.cpp",
        (const char *)(unsigned int)ShaderResourceView);
      return (unsigned int)ShaderResourceView;
    }
  }
  v8 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(v8 + 48) )
  {
    v9 = v4++;
    ShaderResourceView = CDrawListBitmap::GetShaderResourceView(
                           (CDrawListBitmap *)(v8 + 40),
                           a2[14],
                           (struct ID3D11ShaderResourceView **)&v12 + v9,
                           0LL);
    if ( ShaderResourceView < 0 )
    {
      v11 = 32LL;
      goto LABEL_9;
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(const struct RenderTargetInfo *, _QWORD, _QWORD, __int128 *))(*(_QWORD *)a2[2] + 64LL))(
      a2[2],
      0LL,
      v4,
      &v12);
  return 0LL;
}
