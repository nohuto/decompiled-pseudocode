/*
 * XREFs of ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x14002C7B8
 * Callers:
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14002BD18 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14002C4D4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x14002D070 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1401F43FC (ScaleDpiOffsetWithSubpixel.c)
 *     ScaleDpiValueWithSubpixel @ 0x1402A1F04 (ScaleDpiValueWithSubpixel.c)
 * Callees:
 *     <none>
 */

void __fastcall ScaleValueWithSubpixel(int *a1, float *a2, float a3)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  int v5; // eax

  if ( a2 )
    v3 = *a2;
  else
    v3 = 0.0;
  v4 = (float)((float)*a1 * a3) + v3;
  v5 = (int)(float)(v4 + 0.5);
  if ( a2 )
    *a2 = v4 - (float)v5;
  *a1 = v5;
}
