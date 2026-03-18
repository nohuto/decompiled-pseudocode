/*
 * XREFs of ?GetVirtualModeClip@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180194C70
 * Callers:
 *     ?GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x180194B38 (-GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801FD204 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float *__fastcall COverlayContext::GetVirtualModeClip(__int64 a1, float *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // xmm1_8
  float v6; // xmm0_4
  float *result; // rax

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 256LL))(*(_QWORD *)(a1 + 56));
  v4 = *(_QWORD *)(v3 + 24);
  v5 = _mm_srli_si128(*(__m128i *)(v3 + 24), 8).m128i_u64[0];
  v6 = (float)(int)*(_OWORD *)(v3 + 24);
  result = a2;
  *a2 = v6;
  a2[1] = (float)SHIDWORD(v4);
  a2[2] = (float)(int)v5;
  a2[3] = (float)SHIDWORD(v5);
  return result;
}
