/*
 * XREFs of ??0SamplerMode@@QEAA@W4D2D1_INTERPOLATION_MODE@@W4Enum@ExtendMode@@1@Z @ 0x1801AC5D8
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180265C90 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180268130 (-GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 * Callees:
 *     <none>
 */

char *__fastcall SamplerMode::SamplerMode(char *a1, int a2, char a3, char a4)
{
  int v4; // edx
  char v5; // al
  char *result; // rax

  if ( a2 )
  {
    v4 = a2 - 1;
    if ( !v4 || (v5 = 2, v4 != 2) )
      v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  *a1 = v5;
  result = a1;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
