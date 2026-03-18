/*
 * XREFs of ?SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z @ 0x140058EE0
 * Callers:
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1400E8BF0 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     NtDCompositionSetBlurredWallpaperSurface @ 0x14014ADE0 (NtDCompositionSetBlurredWallpaperSurface.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x14004F56C (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z @ 0x140058F78 (-SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::SetBlurredWallpaperSurface(
        DirectComposition::CConnection *this,
        void *a2,
        const struct tagRECT *a3)
{
  DirectComposition::CPushLockCriticalSection *v3; // rdi
  unsigned int v7; // ebx

  v3 = (DirectComposition::CConnection *)((char *)this + 336);
  ExAcquirePushLockExclusiveEx((char *)this + 336, 0LL);
  *((_BYTE *)v3 + 8) = 1;
  if ( !*((_QWORD *)this + 38) || *((_QWORD *)this + 38) == PsGetCurrentProcess() )
    v7 = DirectComposition::CConnection::SetBlurredWallpaperSurfaceInternal(this, a2, a3);
  else
    v7 = -1073741790;
  DirectComposition::CPushLockCriticalSection::Release(v3);
  return v7;
}
