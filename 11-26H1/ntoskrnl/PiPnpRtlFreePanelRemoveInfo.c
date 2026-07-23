/*
 * XREFs of PiPnpRtlFreePanelRemoveInfo @ 0x14077DA9C
 * Callers:
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14077B650 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x14077B700 (PiPnpRtlGatherPanelRemoveInfo.c)
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
