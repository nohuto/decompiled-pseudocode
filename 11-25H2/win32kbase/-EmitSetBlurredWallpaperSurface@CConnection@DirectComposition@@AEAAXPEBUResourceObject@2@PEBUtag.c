/*
 * XREFs of ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x140058D38
 * Callers:
 *     ?SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z @ 0x140058F78 (-SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z.c)
 *     ?OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ @ 0x140227F4C (-OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     GreUnlockDwmState @ 0x140047820 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x140047910 (GreLockDwmState.c)
 *     OpenDwmHandle @ 0x1400579D4 (OpenDwmHandle.c)
 *     UserReferenceDwmApiPort @ 0x140057B80 (UserReferenceDwmApiPort.c)
 *     DwmAsyncSetBlurredWallpaperSurface @ 0x140058DB4 (DwmAsyncSetBlurredWallpaperSurface.c)
 */

void __fastcall DirectComposition::CConnection::EmitSetBlurredWallpaperSurface(
        DirectComposition::CConnection *this,
        const struct DirectComposition::ResourceObject *a2,
        const struct tagRECT *a3)
{
  __int64 v5; // r9
  __int64 v6; // rcx
  void *v7; // rbx
  __int64 v8; // rax
  int v9; // [rsp+20h] [rbp-18h]
  void *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  GreLockDwmState((__int64)this);
  if ( !a2 || (int)OpenDwmHandle(a2, ExCompositionObjectType, 3u, v5, v9, &v10) >= 0 )
  {
    v7 = v10;
    v8 = UserReferenceDwmApiPort();
    DwmAsyncSetBlurredWallpaperSurface(v8, v7, a3);
  }
  GreUnlockDwmState(v6);
}
