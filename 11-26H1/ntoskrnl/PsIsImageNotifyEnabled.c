/*
 * XREFs of PsIsImageNotifyEnabled @ 0x140AB4D00
 * Callers:
 *     MiAllocateImageVad @ 0x1409CD948 (MiAllocateImageVad.c)
 *     DbgkCreateThread @ 0x1409EAD24 (DbgkCreateThread.c)
 * Callees:
 *     <none>
 */

bool PsIsImageNotifyEnabled()
{
  char v0; // cl

  v0 = 1;
  if ( (PspNotifyEnableMask & 1) == 0 )
    return (PerfGlobalGroupMask[0] & 4) != 0;
  return v0;
}
