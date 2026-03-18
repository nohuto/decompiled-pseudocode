/*
 * XREFs of PiPnpRtlFreeInterfaceDeleteInfo @ 0x14077CA04
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1409A2FF0 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140B350F8 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1409A6000 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeInterfaceDeleteInfo(void **P)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  if ( P )
  {
    v2 = *P;
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = P[1];
    if ( v3 )
      PiDmObjectRelease(v3);
    v4 = P[2];
    if ( v4 )
      PiDmObjectRelease(v4);
    v5 = P[3];
    if ( v5 )
      PiDmObjectRelease(v5);
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
