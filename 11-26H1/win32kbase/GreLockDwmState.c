/*
 * XREFs of GreLockDwmState @ 0x1400B3150
 * Callers:
 *     ?CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ @ 0x1400B2C30 (-CreateDwmHandle@CDCompMappedSharedSectionMarshaler@DirectComposition@@MEAAPEAXXZ.c)
 *     CheckOrAcquireDwmStateLock @ 0x1400B2E60 (CheckOrAcquireDwmStateLock.c)
 *     UserReferenceDwmApiPort @ 0x1400B2FC0 (UserReferenceDwmApiPort.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x1400B3450 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x14017C690 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtag.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x14018AED0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1401ADDE8 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1401FBD50 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtDCompositionSetChildRootVisual @ 0x140229800 (NtDCompositionSetChildRootVisual.c)
 *     ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x14023F190 (-CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$06@@YAXXZ @ 0x1400B31BC (--$GrepAcquireLockValidate@$06@@YAXXZ.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1401B6664 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

__int64 __fastcall GreLockDwmState(__int64 a1)
{
  int v1; // edx
  struct _ERESOURCE **v2; // rcx
  int v3; // r8d
  struct _ERESOURCE *v4; // rbx

  v2 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  v4 = *v2;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((_DWORD)v2, v1, v3, (_DWORD)v4 + 520, 0, (__int64)L"DwmState");
  GreAcquireSemaphoreInternal(v4 + 5);
  return GrepAcquireLockValidate<7>();
}
