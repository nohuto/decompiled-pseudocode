/*
 * XREFs of ?LegacyPresentRequired@COverlayContext@@IEBA_NXZ @ 0x1800D7040
 * Callers:
 *     ?Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@IPEA_N_N@Z @ 0x1800D62A4 (-Present@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@UtagR.c)
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x1800F0834 (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall COverlayContext::LegacyPresentRequired(COverlayContext *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 1587) == *((_QWORD *)this + 1586)
    && *((_BYTE *)this + 19052)
    && !*((_DWORD *)this + 4762)
    && (*((int *)this + 4824) < 2200 || *((_BYTE *)this + 47) || (*((_DWORD *)this + 3) & 0x40000) == 0) )
  {
    return 1;
  }
  return v1;
}
