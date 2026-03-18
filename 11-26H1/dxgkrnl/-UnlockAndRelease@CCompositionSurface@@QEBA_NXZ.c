/*
 * XREFs of ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140028A14
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x14001F0D0 (-NotifyPendingFlipPresent@@YAJHU_LUID@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1400262E0 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x140026DB0 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     NtUnBindCompositionSurface @ 0x140027080 (NtUnBindCompositionSurface.c)
 *     NtBindCompositionSurface @ 0x140027340 (NtBindCompositionSurface.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1400277A0 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtQueryCompositionSurfaceBinding @ 0x140027BF0 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceRealizationInfo @ 0x140027E60 (NtOpenCompositionSurfaceRealizationInfo.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x140028290 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x140028460 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceFrameRate @ 0x1400287D0 (NtQueryCompositionSurfaceFrameRate.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x140029778 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 *     NtConfirmCompositionSurfaceIndependentFlipEntry @ 0x1400298F0 (NtConfirmCompositionSurfaceIndependentFlipEntry.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x140029AB0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     ?Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z @ 0x1400451FC (-Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1400A2DC0 (NtOpenCompositionSurfaceSectionInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurface::UnlockAndRelease(CCompositionSurface *this)
{
  HANDLE CurrentThreadId; // rax
  char *v3; // rcx

  CurrentThreadId = PsGetCurrentThreadId();
  v3 = (char *)this + 8;
  if ( CurrentThreadId == *((HANDLE *)this + 2) )
  {
    *((_QWORD *)this + 2) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v3, 0LL);
  }
  KeLeaveCriticalRegion();
  return ObfDereferenceObject((char *)this - 40) == 0;
}
