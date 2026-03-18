/*
 * XREFs of UserReferenceDwmApiPort @ 0x1400B2FC0
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1400B3450 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x14017C690 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtag.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x14018AED0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 *     NtDCompositionSetChildRootVisual @ 0x140229800 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     GreIsDwmStateLocked @ 0x1400B3030 (GreIsDwmStateLocked.c)
 *     GreUnlockDwmState @ 0x1400B3070 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x1400B3150 (GreLockDwmState.c)
 */

__int64 UserReferenceDwmApiPort()
{
  int v0; // edi
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  __int64 UserSessionState; // rax
  __int64 v5; // rbx

  v0 = 0;
  if ( !(unsigned int)GreIsDwmStateLocked() )
  {
    GreLockDwmState();
    v0 = 1;
  }
  UserSessionState = W32GetUserSessionState(v2, v1, v3);
  v5 = *(_QWORD *)(UserSessionState + 70560);
  if ( v5 )
    ObfReferenceObject(*(PVOID *)(UserSessionState + 70560));
  if ( v0 )
    GreUnlockDwmState();
  return v5;
}
