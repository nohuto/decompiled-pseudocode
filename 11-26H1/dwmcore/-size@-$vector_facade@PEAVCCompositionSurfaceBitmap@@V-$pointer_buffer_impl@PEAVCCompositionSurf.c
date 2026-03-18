/*
 * XREFs of ?size@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18000E770
 * Callers:
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18000DC30 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18001D270 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?clear@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@$0A@@detail@@@detail@@QEAAXXZ @ 0x18002D440 (-clear@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@$0A@@detai.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x18006CCA0 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ @ 0x1800DF830 (-DiscardFlipExSurfaces@CWindowNode@@AEAAXXZ.c)
 *     ??1?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1800DF9A0 (--1-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCCompositionSurface.c)
 *     ?reserve_region@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@IEAAPEAPEAVCCompositionSurfaceBitmap@@_K0@Z @ 0x1800DFBE8 (-reserve_region@-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCCompo.c)
 *     ?clear_region@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E0654 (-clear_region@-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCComposi.c)
 *     ?IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z @ 0x18025A258 (-IsDirty@CDrawListCache@@QEBA_NPEBVCDrawingContext@@@Z.c)
 *     ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x180268734 (-ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ.c)
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x1802691C8 (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall detail::vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>::size(
        __int64 *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  v2 = 0LL;
  v3 = *a1 & 3;
  if ( v3 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      v4 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_9:
      v2 = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
      goto LABEL_10;
    }
    if ( (*(_DWORD *)a1 & 3) == 2LL )
    {
      v4 = 0LL;
      goto LABEL_5;
    }
    if ( (*(_DWORD *)a1 & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v4 = (unsigned __int64)a1;
  if ( !v3 )
  {
    v2 = 1LL;
LABEL_17:
    v7 = (unsigned __int64)a1;
    return (__int64)(v4 + 8 * v2 - v7) >> 3;
  }
  if ( v3 == 1 )
    goto LABEL_9;
  if ( (unsigned __int64)(v3 - 2) >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_5:
  v5 = v3 - 1;
  if ( !v5 )
  {
LABEL_10:
    v7 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
    return (__int64)(v4 + 8 * v2 - v7) >> 3;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    goto LABEL_17;
  }
  v7 = 0LL;
  return (__int64)(v4 + 8 * v2 - v7) >> 3;
}
