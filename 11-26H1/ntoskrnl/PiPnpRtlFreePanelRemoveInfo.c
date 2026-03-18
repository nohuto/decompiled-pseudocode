/*
 * XREFs of PiPnpRtlFreePanelRemoveInfo @ 0x14077AB6C
 * Callers:
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x1407787B0 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x140778860 (PiPnpRtlGatherPanelRemoveInfo.c)
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1409A6000 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreePanelRemoveInfo(void **P)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( P )
  {
    v2 = *P;
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = P[1];
    if ( v3 )
      PiDmObjectRelease(v3);
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
