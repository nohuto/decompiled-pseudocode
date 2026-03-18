/*
 * XREFs of ?GetD2DBitmap@CTranscodeBitmap@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B2694
 * Callers:
 *     ?GetD2DBitmap@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802AD140 (-GetD2DBitmap@CSwapChainRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSecondaryD2DBitmap@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802B19FC (-GetSecondaryD2DBitmap@CTextureCollection@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTranscodeBitmap::GetD2DBitmap(
        CTranscodeBitmap *this,
        struct _LUID *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  _QWORD *v8; // rax
  __int64 v9; // r8
  int SecondaryD2DBitmap; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 2) + 64LL))(
                   *((_QWORD *)this + 2),
                   &v14);
  v9 = *(unsigned int *)v8;
  if ( *a2 == *v8 )
  {
    LOBYTE(v9) = a4;
    SecondaryD2DBitmap = (*(__int64 (__fastcall **)(__int64, struct ID2D1Bitmap1 **, __int64))(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL)
                                                                                             + 104LL))(
                           *((_QWORD *)this + 2) + 120LL,
                           a3,
                           v9);
    if ( SecondaryD2DBitmap < 0 )
    {
      v11 = 150LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\transcodebitmap.cpp",
        (const char *)(unsigned int)SecondaryD2DBitmap);
      return (unsigned int)SecondaryD2DBitmap;
    }
  }
  else
  {
    SecondaryD2DBitmap = CTextureCollection::GetSecondaryD2DBitmap(*((__int64 ***)this + 3), a2, a3, a4);
    if ( SecondaryD2DBitmap < 0 )
    {
      v11 = 157LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
