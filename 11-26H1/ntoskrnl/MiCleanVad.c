/*
 * XREFs of MiCleanVad @ 0x14095B57C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14095B2A4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027F600 (MiUnlockAndDereferenceVad.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiVadDeleted @ 0x140480A68 (MiVadDeleted.c)
 *     MiWaitForVadDeletion @ 0x140531014 (MiWaitForVadDeletion.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiUnmapVad @ 0x1409C3B30 (MiUnmapVad.c)
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
