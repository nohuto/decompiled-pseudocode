/*
 * XREFs of GreUnlockDwmState @ 0x140047820
 * Callers:
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1400578F0 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     OpenDwmHandle @ 0x1400579D4 (OpenDwmHandle.c)
 *     UserReferenceDwmApiPort @ 0x140057B80 (UserReferenceDwmApiPort.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x140058D38 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtag.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1400AEF0C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x14011F340 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x14014D580 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017DD8C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x140227130 (NtDCompositionSendDwmLpcMessage.c)
 *     NtDCompositionSetChildRootVisual @ 0x140227510 (NtDCompositionSetChildRootVisual.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x140235B00 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 *     ?EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140237FD4 (-EmitViewData@CHolographicExclusiveViewMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x140238788 (-EmitInitialize@CHolographicViewerMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreUnlockDwmState(__int64 a1)
{
  struct _ERESOURCE *v1; // rbx
  struct _GRETHREAD *v2; // rax

  v1 = **(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  EtwTraceGreLockReleaseSemaphore((__int64)L"DwmState", (_DWORD)v1 + 520);
  v2 = GreGetCurrentThreadCrossSessionCheck();
  if ( v2 )
  {
    if ( (*((_BYTE *)v2 + 15))-- == 1 )
      *(_QWORD *)v2 &= ~0x80uLL;
  }
  GreReleaseSemaphoreSharedInternal(v1 + 5);
}
