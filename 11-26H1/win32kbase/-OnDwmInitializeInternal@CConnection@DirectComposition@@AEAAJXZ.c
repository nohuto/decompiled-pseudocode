/*
 * XREFs of ?OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ @ 0x14022A248
 * Callers:
 *     DCompositionDwmInitialize @ 0x140194C60 (DCompositionDwmInitialize.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A8FE8 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x14017C690 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtag.c)
 */

__int64 __fastcall DirectComposition::CConnection::OnDwmInitializeInternal(DirectComposition::CConnection *this)
{
  DirectComposition::CPushLockCriticalSection *v1; // rbx
  DirectComposition::CConnection *v3; // rcx
  const struct DirectComposition::ResourceObject *v4; // rdx

  v1 = (DirectComposition::CConnection *)((char *)this + 336);
  ExAcquirePushLockExclusiveEx((char *)this + 336, 0LL);
  *((_BYTE *)v1 + 8) = 1;
  v4 = (const struct DirectComposition::ResourceObject *)*((_QWORD *)this + 39);
  if ( v4 )
    DirectComposition::CConnection::EmitSetBlurredWallpaperSurface(v3, v4, (const struct tagRECT *)this + 20);
  DirectComposition::CPushLockCriticalSection::Release(v1);
  return 0LL;
}
