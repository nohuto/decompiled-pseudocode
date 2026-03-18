/*
 * XREFs of MiFreeModWriterEntry @ 0x1402CCB90
 * Callers:
 *     MiWriteComplete @ 0x14040A870 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x140496920 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x1404973CC (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x14086B6A4 (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x1402CCBF4 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *P, unsigned int a2)
{
  __int64 v3; // rsi
  void *v6; // rcx

  v3 = P[7];
  if ( (P[5] & 0x20) != 0 )
  {
    v6 = (void *)P[9];
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  ExFreePoolWithTag(P, 0);
  return MiReleaseWriteInProgressCharges(v3, 1LL, a2);
}
