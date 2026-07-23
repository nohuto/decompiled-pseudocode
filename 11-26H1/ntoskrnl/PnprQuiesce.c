/*
 * XREFs of PnprQuiesce @ 0x1405DE678
 * Callers:
 *     PnprEndMirroring @ 0x140BF7670 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x140BF7744 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PnprLockPagesForReplace @ 0x1407B29F8 (PnprLockPagesForReplace.c)
 *     PnprQuiesceProcessors @ 0x140BF86B4 (PnprQuiesceProcessors.c)
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
    v2 = 1739;
  *(_DWORD *)(PnprContext + 33288) = v2;
  v3 = *(_DWORD *)(v1 + 33292);
  if ( !v3 )
    v3 = 1;
  *(_DWORD *)(v1 + 33292) = v3;
  return (unsigned int)v0;
}
