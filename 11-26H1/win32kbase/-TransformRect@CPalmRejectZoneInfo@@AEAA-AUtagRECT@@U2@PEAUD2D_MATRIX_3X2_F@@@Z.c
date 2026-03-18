/*
 * XREFs of ?TransformRect@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@U2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x14021AC20
 * Callers:
 *     ?GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@PEBUCompositionInputObject@@U2@@Z @ 0x14021A904 (-GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@PEBUCompositionInpu.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CPalmRejectZoneInfo::TransformRect(
        CPalmRejectZoneInfo *this,
        struct tagRECT *__return_ptr retstr,
        struct tagRECT *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  float v4; // xmm4_4
  float v5; // xmm6_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm11_4
  float right; // xmm0_4
  float v10; // xmm7_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  float bottom; // xmm1_4

  v4 = *((float *)a4 + 2);
  v5 = *((float *)a4 + 3);
  v6 = *((float *)a4 + 4);
  v7 = *((float *)a4 + 1);
  v8 = *((float *)a4 + 5);
  right = (float)a3->right;
  v10 = right * v7;
  v11 = right * *(float *)a4;
  v12 = (float)((float)((float)a3->top * v5) + (float)((float)a3->left * v7)) + v8;
  bottom = (float)a3->bottom;
  retstr->left = (int)(float)((float)((float)((float)a3->top * v4) + (float)((float)a3->left * *(float *)a4)) + v6);
  retstr->top = (int)v12;
  retstr->right = (int)(float)((float)((float)(bottom * v4) + v11) + v6);
  retstr->bottom = (int)(float)((float)((float)(bottom * v5) + v10) + v8);
  return retstr;
}
