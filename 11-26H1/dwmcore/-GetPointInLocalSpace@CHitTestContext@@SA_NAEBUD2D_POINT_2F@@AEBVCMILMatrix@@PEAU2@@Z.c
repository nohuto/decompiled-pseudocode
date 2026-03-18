/*
 * XREFs of ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x180178260
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180027C60 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x180177DE4 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2PEAV4@@Z @ 0x18028B2AC (-ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV-$TMilRect_@M.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHitTestContext::GetPointInLocalSpace(
        const struct D2D_POINT_2F *a1,
        const struct CMILMatrix *a2,
        struct D2D_POINT_2F *a3)
{
  float v3; // xmm7_4
  float v4; // xmm6_4
  float y; // xmm9_4
  float v6; // xmm5_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm4_4
  float v10; // xmm2_4
  bool result; // al
  float v12; // xmm3_4
  float v13; // xmm2_4

  v3 = *((float *)a2 + 7);
  v4 = (float)(a1->x * *((float *)a2 + 3)) - *(float *)a2;
  y = a1->y;
  v6 = (float)(v3 * a1->x) - *((float *)a2 + 4);
  v7 = (float)(v3 * y) - *((float *)a2 + 5);
  v8 = (float)(y * *((float *)a2 + 3)) - *((float *)a2 + 1);
  if ( (float)(v7 * v4) == (float)(v6 * v8) )
    return 0;
  v9 = (float)(v7 * v4) - (float)(v6 * v8);
  v10 = *((float *)a2 + 15);
  result = 1;
  v12 = (float)(v10 * a1->x) - *((float *)a2 + 12);
  v13 = (float)(v10 * y) - *((float *)a2 + 13);
  a3->x = (float)((float)(v13 * v6) - (float)(v12 * v7)) / v9;
  a3->y = (float)((float)(v12 * v8) - (float)(v13 * v4)) / v9;
  return result;
}
