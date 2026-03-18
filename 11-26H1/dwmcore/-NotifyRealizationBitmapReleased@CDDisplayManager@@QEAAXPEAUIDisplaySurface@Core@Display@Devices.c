/*
 * XREFs of ?NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x1800FB158
 * Callers:
 *     ?ReleaseDisplaySurface@CDxHandleBitmapRealization@@IEAAXXZ @ 0x1800FB0CC (-ReleaseDisplaySurface@CDxHandleBitmapRealization@@IEAAXXZ.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1800FB1AC (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 *     ?ReleaseTexture@CSwapChainRealization@@IEAAXXZ @ 0x1802AE240 (-ReleaseTexture@CSwapChainRealization@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDisplayManager::NotifyRealizationBitmapReleased(
        CDDisplayManager *this,
        struct Windows::Devices::Display::Core::IDisplaySurface *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rdi

  v2 = (_QWORD *)qword_1803DE728;
  v4 = qword_1803DE730;
  while ( v2 != (_QWORD *)v4 )
  {
    (**(void (__fastcall ***)(_QWORD, struct Windows::Devices::Display::Core::IDisplaySurface *))*v2)(*v2, a2);
    ++v2;
  }
}
