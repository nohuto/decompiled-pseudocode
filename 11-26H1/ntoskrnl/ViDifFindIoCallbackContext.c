/*
 * XREFs of ViDifFindIoCallbackContext @ 0x140C284D8
 * Callers:
 *     VfDifRecoverIoCallbacks @ 0x140641358 (VfDifRecoverIoCallbacks.c)
 *     ViDifCaptureIoCallbacks @ 0x140C20720 (ViDifCaptureIoCallbacks.c)
 *     ViDifCaptureDriverEntry @ 0x140C2848C (ViDifCaptureDriverEntry.c)
 * Callees:
 *     <none>
 */

char **__fastcall ViDifFindIoCallbackContext(int a1)
{
  char **result; // rax

  result = &VfDifIoCallbackThunks;
  while ( *((_DWORD *)result + 6) != a1 )
  {
    result += 4;
    if ( !*result )
      return 0LL;
  }
  return result;
}
