/*
 * XREFs of PiDqQueryActionQueueEntryFree @ 0x1409A8548
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x14098E76C (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryFreeActiveData @ 0x140990044 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1409A6000 (PiDmObjectRelease.c)
 *     PiPnpRtlObjectEventRelease @ 0x1409A7DD4 (PiPnpRtlObjectEventRelease.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqQueryActionQueueEntryFree(_QWORD *P)
{
  unsigned int *v2; // rcx
  char *v3; // rcx

  v2 = (unsigned int *)P[2];
  if ( v2 )
    PiDmObjectRelease(v2);
  v3 = (char *)P[3];
  if ( v3 )
    PiPnpRtlObjectEventRelease(v3);
  ExFreePoolWithTag(P, 0x58706E50u);
}
