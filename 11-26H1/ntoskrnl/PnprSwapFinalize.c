/*
 * XREFs of PnprSwapFinalize @ 0x1405DE92C
 * Callers:
 *     PnprSwap @ 0x1405DE720 (PnprSwap.c)
 * Callees:
 *     PnprRecopyMirrorPages @ 0x140524E40 (PnprRecopyMirrorPages.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PnprGetMillisecondCounter @ 0x140BF76E4 (PnprGetMillisecondCounter.c)
 */

__int64 PnprSwapFinalize()
{
  int v0; // edi
  __int64 v1; // rax
  __int64 v2; // rbx
  int MillisecondCounter; // eax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rbx

  v0 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) && (*(_DWORD *)(PnprContext + 64) & 8) == 0 )
    PnprRecopyMirrorPages();
  v1 = PnprContext;
  *(_DWORD *)(PnprContext + 64) &= ~4u;
  if ( (*(_DWORD *)(v1 + 64) & 0x20) == 0 )
    __wbinvd();
  v2 = PnprContext;
  if ( *(_QWORD *)(PnprContext + 33248) )
  {
    MillisecondCounter = PnprGetMillisecondCounter(0LL);
    v4 = PnprContext;
    *(_DWORD *)(v2 + 33316) = MillisecondCounter;
    v0 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 33184), v5);
    if ( v0 < 0 )
    {
      v6 = PnprContext;
      v7 = *(_DWORD *)(PnprContext + 33288);
      if ( !v7 )
        v7 = 2758;
      v8 = *(_DWORD *)(PnprContext + 33292);
      *(_DWORD *)(PnprContext + 33288) = v7;
      if ( !v8 )
        v8 = 8;
      *(_DWORD *)(v6 + 33292) = v8;
    }
    v9 = PnprContext;
    *(_DWORD *)(v9 + 33320) = PnprGetMillisecondCounter(0LL);
  }
  return (unsigned int)v0;
}
