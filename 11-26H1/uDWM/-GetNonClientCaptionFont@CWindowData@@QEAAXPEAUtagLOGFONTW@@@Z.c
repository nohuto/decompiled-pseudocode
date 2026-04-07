/*
 * XREFs of ?GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z @ 0x18004BA50
 * Callers:
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x18004B728 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowData::GetNonClientCaptionFont(CWindowData *this, struct tagLOGFONTW *a2)
{
  double v3; // xmm1_8
  double lfWidth; // xmm0_8

  *a2 = *(struct tagLOGFONTW *)((char *)CDesktopManager::s_pDesktopManagerInstance + 288);
  v3 = (double)*((int *)this + 87) / (double)(int)GetDpiForSystem();
  lfWidth = (double)a2->lfWidth;
  a2->lfHeight = (int)((double)a2->lfHeight * v3);
  a2->lfWidth = (int)(lfWidth * v3);
}
