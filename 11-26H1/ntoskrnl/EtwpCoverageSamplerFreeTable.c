/*
 * XREFs of EtwpCoverageSamplerFreeTable @ 0x14093F1BC
 * Callers:
 *     EtwpCoverageSamplerCleanup @ 0x1408310E4 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCovSampContextAddSamples @ 0x14093E870 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x14093F1FC (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerQuery @ 0x14093FBF0 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCoverageSamplerFreeTable(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[3];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x56777445u);
    P[3] = 0LL;
  }
  ExFreePoolWithTag(P, 0x56777445u);
}
