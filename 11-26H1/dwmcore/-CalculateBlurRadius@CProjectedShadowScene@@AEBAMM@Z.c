/*
 * XREFs of ?CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z @ 0x1801D3E84
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1800D78A0 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     <none>
 */

float __fastcall CProjectedShadowScene::CalculateBlurRadius(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(*((float *)this + 31), a2 * *((float *)this + 32));
  return fminf(*((float *)this + 30), v3);
}
