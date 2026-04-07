/*
 * XREFs of ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUD2D_POINTANDSIZE_F@@@Z @ 0x180050F50
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ @ 0x180052918 (-GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ.c)
 */

void __fastcall CTopLevelWindow3D::GetFinalMinRect(struct tagRECT *a1, float a2, struct D2D_POINTANDSIZE_F *a3)
{
  const struct CDesktopManager::WindowAnimationSettings *WindowAnimationSettings; // rax
  unsigned int *v4; // rcx
  float *v5; // r8
  int v6; // edx
  __m128i v7; // xmm0
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm1_4

  WindowAnimationSettings = CDesktopManager::GetWindowAnimationSettings();
  v6 = 0;
  v7 = _mm_cvtsi32_si128(*v4);
  if ( (int)(v4[2] - *v4) >= 0 )
    v6 = v4[2] - *v4;
  v8 = (float)v6 * *((float *)WindowAnimationSettings + 1);
  v5[2] = v8;
  v9 = v8 * a2;
  v10 = (float)(v8 * *((float *)WindowAnimationSettings + 2)) + _mm_cvtepi32_ps(v7).m128_f32[0];
  v11 = (float)(int)v4[1];
  v5[3] = v9;
  *v5 = v10;
  v5[1] = v11 - v9;
}
