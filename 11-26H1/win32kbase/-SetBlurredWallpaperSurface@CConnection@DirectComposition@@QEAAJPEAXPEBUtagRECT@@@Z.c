/*
 * XREFs of ?SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z @ 0x14017C4D8
 * Callers:
 *     ?OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x14010F354 (-OnProcessDestruction@CConnection@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     NtDCompositionSetBlurredWallpaperSurface @ 0x14017C3F0 (NtDCompositionSetBlurredWallpaperSurface.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A8FE8 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z @ 0x14017C57C (-SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::SetBlurredWallpaperSurface(
        DirectComposition::CConnection *this,
        void *a2,
        const struct tagRECT *a3)
{
  DirectComposition::CPushLockCriticalSection *v3; // rsi
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // rbx

  v3 = (DirectComposition::CConnection *)((char *)this + 336);
  ExAcquirePushLockExclusiveEx((char *)this + 336, 0LL);
  *((_BYTE *)v3 + 8) = 1;
  if ( !*((_QWORD *)this + 38) || (v10 = *((_QWORD *)this + 38), v10 == PsGetCurrentProcess(v7)) )
    v8 = DirectComposition::CConnection::SetBlurredWallpaperSurfaceInternal(this, a2, a3);
  else
    v8 = -1073741790;
  DirectComposition::CPushLockCriticalSection::Release(v3);
  return v8;
}
