/*
 * XREFs of PnprQuiesce @ 0x1405DBDC8
 * Callers:
 *     PnprEndMirroring @ 0x140BF1670 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x140BF1744 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PnprLockPagesForReplace @ 0x1407AF998 (PnprLockPagesForReplace.c)
 *     PnprQuiesceProcessors @ 0x140BF26B4 (PnprQuiesceProcessors.c)
 */

__int64 PnprQuiesce()
{
  int v0; // ebx
  __int64 v1; // rax
  int v2; // ecx
  int v3; // ecx

  v0 = 0;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    PnprLockPagesForReplace();
    goto LABEL_9;
  }
  KeSetEvent((PRKEVENT)(PnprContext + 33064), 0, 1u);
  KeWaitForSingleObject((PVOID)(PnprContext + 33088), Executive, 0, 0, 0LL);
  v1 = PnprContext;
  v0 = *(_DWORD *)(PnprContext + 33160);
  if ( v0 >= 0 )
  {
LABEL_9:
    PnprQuiesceProcessors();
    return (unsigned int)v0;
  }
  v2 = *(_DWORD *)(PnprContext + 33288);
  if ( !v2 )
    v2 = 1892;
  *(_DWORD *)(PnprContext + 33288) = v2;
  v3 = *(_DWORD *)(v1 + 33292);
  if ( !v3 )
    v3 = 1;
  *(_DWORD *)(v1 + 33292) = v3;
  return (unsigned int)v0;
}
