/*
 * XREFs of ?GetFinalMinRect@CTopLevelWindow3D@@SAXPEAUtagRECT@@MPEAUD2D_POINTANDSIZE_F@@@Z @ 0x180047344
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ @ 0x180048CA8 (-GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ.c)
 */

void __fastcall CTopLevelWindow3D::GetFinalMinRect(struct tagRECT *a1, float a2, struct D2D_POINTANDSIZE_F *a3)
{
  const struct CDesktopManager::WindowAnimationSettings *WindowAnimationSettings; // rax
  int *v4; // rcx
  float *v5; // r8
  int v6; // edx
  float v7; // xmm3_4

  WindowAnimationSettings = CDesktopManager::GetWindowAnimationSettings();
  v6 = 0;
  if ( v4[2] - *v4 >= 0 )
    v6 = v4[2] - *v4;
  v7 = (float)v6 * *((float *)WindowAnimationSettings + 7);
  v5[2] = v7;
  v5[3] = v7 * a2;
  *v5 = (float)(v7 * *((float *)WindowAnimationSettings + 8)) + (float)*v4;
  v5[1] = (float)v4[1] - (float)(v7 * a2);
}
