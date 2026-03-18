/*
 * XREFs of GreUnlockDwmState @ 0x1400B3070
 * Callers:
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1400B2C30 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     OpenDwmHandle @ 0x1400B2D14 (OpenDwmHandle.c)
 *     UserReferenceDwmApiPort @ 0x1400B2FC0 (UserReferenceDwmApiPort.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x1400B3450 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x14017C690 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtag.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x14018AED0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1401ADDE8 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1401FBD50 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x140229300 (NtDCompositionSendDwmLpcMessage.c)
 *     NtDCompositionSetChildRootVisual @ 0x140229800 (NtDCompositionSetChildRootVisual.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x14023F190 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __fastcall GreUnlockDwmState(__int64 a1)
{
  struct _ERESOURCE **v1; // rcx
  int v2; // r8d
  struct _ERESOURCE *v3; // rbx
  struct _GRETHREAD *v4; // rax

  v1 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  v3 = *v1;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer((_DWORD)v1, (unsigned int)&LockRelease, v2, (_DWORD)v3 + 520, (__int64)L"DwmState");
  v4 = GreGetCurrentThreadCrossSessionCheck();
  if ( v4 )
  {
    if ( (*((_BYTE *)v4 + 15))-- == 1 )
      *(_QWORD *)v4 &= ~0x80uLL;
  }
  GreReleaseSemaphoreSharedInternal(v3 + 5);
}
