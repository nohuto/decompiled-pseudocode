/*
 * XREFs of PsIsImageNotifyEnabled @ 0x140AB60A0
 * Callers:
 *     MiAllocateImageVad @ 0x14099E928 (MiAllocateImageVad.c)
 *     DbgkCreateThread @ 0x1409E74F4 (DbgkCreateThread.c)
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
