/*
 * XREFs of ?Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180286CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@@Z @ 0x1802349D4 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@@Z.c)
 */

__int64 __fastcall CSnapshot::Draw(
        CSnapshot *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v8; // eax

  v5 = 0;
  v6 = *((_QWORD *)this + 9);
  if ( v6 && !*((_BYTE *)this + 89) )
  {
    *((_BYTE *)this + 89) = 1;
    v8 = CDrawingContext::DrawBitmap(a2, (struct IBitmapResource *)(v6 + 72));
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x4Au, 0LL);
    *((_BYTE *)this + 89) = 0;
  }
  return v5;
}
