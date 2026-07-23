/*
 * XREFs of MiCleanVad @ 0x140A00E3C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 *     MiWaitForVadDeletion @ 0x140533514 (MiWaitForVadDeletion.c)
 *     MiUnmapVad @ 0x140994B10 (MiUnmapVad.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 */

__int64 __fastcall MiCleanVad(volatile signed __int32 *P)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  ULONG_PTR v4; // rcx

  v2 = 0;
  if ( (unsigned int)MiVadDeleted((__int64)P) )
  {
    MiWaitForVadDeletion(v3);
    MiUnlockAndDereferenceVad(P);
    return 1;
  }
  else if ( (MiReadVadFlags(v3) & 0x80000) != 0 )
  {
    MiDeleteVad(v4);
  }
  else
  {
    MiUnmapVad(v4);
  }
  return v2;
}
