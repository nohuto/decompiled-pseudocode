/*
 * XREFs of ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@PEAV1@1PEAVCMILMatrix@@@Z @ 0x18027E228
 * Callers:
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x1800D5A50 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x1800D5BEC (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1800D78A0 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x1801D5260 (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@.c)
 * Callees:
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@4@@Z @ 0x180260990 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@V-$span@PEAVCVisual@@$0-0@gsl@@PEAV1@.c)
 */

__int64 __fastcall CVisual::CalcSrcToDestVisualTransform(
        const struct CVisualTree *a1,
        struct CVisual *a2,
        struct CVisual *a3,
        struct CMILMatrix *a4)
{
  unsigned __int64 v5[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  struct CVisual *v7; // [rsp+58h] [rbp+10h] BYREF
  struct CMILMatrix *v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = a4;
  v7 = a2;
  v5[1] = (unsigned __int64)&v8;
  v5[0] = 1LL;
  v6[0] = 1LL;
  v6[1] = &v7;
  return CVisual::CalcSrcToDestVisualTransform(a1, v6, a3, v5);
}
