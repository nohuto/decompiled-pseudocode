/*
 * XREFs of ?OnDwmInitializeInternal@CConnection@DirectComposition@@AEAAJXZ @ 0x140227F4C
 * Callers:
 *     DCompositionDwmInitialize @ 0x140157530 (DCompositionDwmInitialize.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x14004F56C (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x140058D38 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAXPEBUResourceObject@2@PEBUtag.c)
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
