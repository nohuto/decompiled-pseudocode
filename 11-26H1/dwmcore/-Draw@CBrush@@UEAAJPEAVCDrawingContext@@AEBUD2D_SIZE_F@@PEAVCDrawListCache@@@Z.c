/*
 * XREFs of ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C600
 * Callers:
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180283220 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C720 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrush::Draw(
        CBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  float width; // xmm0_4
  int v9; // ebx
  int v11; // r14d
  char v12; // [rsp+60h] [rbp+18h] BYREF

  width = a3->width;
  v12 = 0;
  if ( width <= 0.0
    || a3->height <= 0.0
    || !(*(unsigned __int8 (__fastcall **)(CBrush *, struct CDrawingContext *, char *))(*(_QWORD *)this + 320LL))(
          this,
          a2,
          &v12)
    || v12 )
  {
    return 0LL;
  }
  if ( !*((_BYTE *)this + 96)
    || *((_QWORD *)this + 10)
    || (v11 = (*(__int64 (__fastcall **)(CBrush *, _QWORD))(*(_QWORD *)this + 352LL))(this, 0LL), v11 >= 0) )
  {
    v9 = CContent::Draw(this, a2, a3, a4);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2C20, 3u, v9, 0x7Du, 0LL);
      return (unsigned int)v9;
    }
    return 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802F2C20, 3u, v11, 0x7Au, 0LL);
  return (unsigned int)v11;
}
