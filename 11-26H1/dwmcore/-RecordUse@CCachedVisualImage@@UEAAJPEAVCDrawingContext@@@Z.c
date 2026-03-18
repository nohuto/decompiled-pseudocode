/*
 * XREFs of ?RecordUse@CCachedVisualImage@@UEAAJPEAVCDrawingContext@@@Z @ 0x18009A5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18009A68C (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::RecordUse(CCachedVisualImage *this, struct CDrawingContext *a2)
{
  const struct RenderTargetInfo *v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  struct IRenderTargetBitmap *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IRenderTargetBitmap *v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 2) + 16LL))((char *)a2 + 16);
  v12 = 0LL;
  v5 = CCachedVisualImage::EnsureRenderTargetBitmap((CCachedVisualImage *)((char *)this - 80), v4, &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x102,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
      (const char *)(unsigned int)v5);
    if ( v12 )
      (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v12 + 16LL))(v12);
    return v6;
  }
  else
  {
    v7 = v12;
    v8 = (*(__int64 (__fastcall **)(char *, struct CDrawingContext *))(*((_QWORD *)v12 + 1) + 96LL))(
           (char *)v12 + 8,
           a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x104,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
        (const char *)(unsigned int)v8);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
      return v9;
    }
    else
    {
      if ( v7 )
        (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v7 + 16LL))(v7);
      return 0LL;
    }
  }
}
