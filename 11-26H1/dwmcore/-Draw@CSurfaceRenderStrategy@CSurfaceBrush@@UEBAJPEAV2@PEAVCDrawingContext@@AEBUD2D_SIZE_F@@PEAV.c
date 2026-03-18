/*
 * XREFs of ?Draw@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18017F940
 * Callers:
 *     <none>
 * Callees:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C720 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::CSurfaceRenderStrategy::Draw(
        CSurfaceBrush::CSurfaceRenderStrategy *this,
        struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        struct CDrawListCache *a5)
{
  float width; // xmm0_4
  int v9; // ebx
  int v11; // ebp
  char v12; // [rsp+58h] [rbp+20h] BYREF

  width = a4->width;
  v12 = 0;
  if ( width <= 0.0
    || a4->height <= 0.0
    || !(*(unsigned __int8 (__fastcall **)(struct CSurfaceBrush *, struct CDrawingContext *, char *))(*(_QWORD *)a2 + 320LL))(
          a2,
          a3,
          &v12)
    || v12 )
  {
    return 0LL;
  }
  if ( !*((_BYTE *)a2 + 96)
    || *((_QWORD *)a2 + 10)
    || (v11 = (*(__int64 (__fastcall **)(struct CSurfaceBrush *, _QWORD))(*(_QWORD *)a2 + 352LL))(a2, 0LL), v11 >= 0) )
  {
    v9 = CContent::Draw(a2, a3, a4, a5);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F2C20, 3u, v9, 0x7Du, 0LL);
      return (unsigned int)v9;
    }
    return 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_1802F2C20, 3u, v11, 0x7Au, 0LL);
  return (unsigned int)v11;
}
