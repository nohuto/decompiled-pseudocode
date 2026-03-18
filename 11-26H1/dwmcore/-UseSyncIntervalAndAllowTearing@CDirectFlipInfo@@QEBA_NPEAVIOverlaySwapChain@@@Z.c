/*
 * XREFs of ?UseSyncIntervalAndAllowTearing@CDirectFlipInfo@@QEBA_NPEAVIOverlaySwapChain@@@Z @ 0x1801B52D4
 * Callers:
 *     ?DirectFlipEarlyWakeupReady@COverlayContext@@QEBA_NXZ @ 0x1800D59F8 (-DirectFlipEarlyWakeupReady@COverlayContext@@QEBA_NXZ.c)
 *     ?Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801B4E54 (-Present@CDirectFlipInfo@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDirectFlipInfo::UseSyncIntervalAndAllowTearing(CDirectFlipInfo *this, struct IOverlaySwapChain *a2)
{
  char v2; // bl

  v2 = 0;
  if ( !*((_BYTE *)this + 107) && *((_BYTE *)this + 108) )
    return (*(unsigned __int8 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a2 + 376LL))(a2) != 0;
  return v2;
}
