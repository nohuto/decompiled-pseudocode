/*
 * XREFs of PiPnpRtlFreeInstallerClassChangeInfo @ 0x140B64E18
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140963A50 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140B43844 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 * Callees:
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1409A9DA0 (PiDmRemoveCacheReferenceForObject.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlFreeInstallerClassChangeInfo(unsigned int **P, __int64 a2, unsigned int *a3)
{
  unsigned int *v4; // rcx
  unsigned int *v5; // rcx
  unsigned int *v6; // rcx

  if ( P )
  {
    v4 = *P;
    if ( v4 )
      PiDmObjectRelease(v4);
    v5 = P[1];
    if ( v5 )
      PiDmObjectRelease(v5);
    v6 = P[2];
    if ( v6 )
    {
      PiDmRemoveCacheReferenceForObject(v6[7], *((_QWORD *)v6 + 2), a3);
      PiDmObjectRelease(P[2]);
    }
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
