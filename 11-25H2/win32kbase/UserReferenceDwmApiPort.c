/*
 * XREFs of UserReferenceDwmApiPort @ 0x140057B80
 * Callers:
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x140058D38 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtag.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x14011F340 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x14014D580 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x140227130 (NtDCompositionSendDwmLpcMessage.c)
 *     NtDCompositionSetChildRootVisual @ 0x140227510 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     GreUnlockDwmState @ 0x140047820 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x140047910 (GreLockDwmState.c)
 *     GreIsDwmStateLocked @ 0x140057BF0 (GreIsDwmStateLocked.c)
 */

__int64 UserReferenceDwmApiPort()
{
  int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx

  v0 = 0;
  if ( !(unsigned int)GreIsDwmStateLocked() )
  {
    GreLockDwmState(v2);
    v0 = 1;
  }
  UserSessionState = W32GetUserSessionState(v2, v1);
  v5 = *(_QWORD *)(UserSessionState + 70568);
  if ( v5 )
    ObfReferenceObject(*(PVOID *)(UserSessionState + 70568));
  if ( v0 )
    GreUnlockDwmState(v4);
  return v5;
}
