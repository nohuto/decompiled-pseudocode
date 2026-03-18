/*
 * XREFs of ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1800D7574
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D72A0 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?CanUseFastShadow@CProjectedShadow@@AEBA_NXZ @ 0x1800D7860 (-CanUseFastShadow@CProjectedShadow@@AEBA_NXZ.c)
 *     ?AreEffectsSupported@CDrawingContext@@QEBA_NXZ @ 0x1801B0CBC (-AreEffectsSupported@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x1801DC6E0 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ @ 0x18021CDCC (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadow::ComputeShadowPath(__int64 a1, CDrawingContext *a2)
{
  int v4; // edi
  float v6; // xmm1_4
  __int64 v7; // rcx

  v4 = 0;
  if ( CProjectedShadow::CanUseFastShadow((CProjectedShadow *)a1) )
    return 1LL;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 72) + 104LL) + 224LL))(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 104LL)) != 1
    || !CProjectedShadow::IsShadowAxisAlignedRectToReceiver((CProjectedShadow *)a1) )
  {
    return 0LL;
  }
  v6 = *(float *)(a1 + 96);
  if ( v6 >= (float)(*(float *)(a1 + 384) * 3.0) )
    return 5LL;
  if ( !CDrawingContext::AreEffectsSupported(a2) )
    return 0LL;
  if ( v6 >= CProjectedShadow::GetBlurForBoundary(a1, 2LL) )
    return 4LL;
  LOBYTE(v4) = v6 >= CProjectedShadow::GetBlurForBoundary(v7, 1LL);
  return (unsigned int)(v4 + 2);
}
