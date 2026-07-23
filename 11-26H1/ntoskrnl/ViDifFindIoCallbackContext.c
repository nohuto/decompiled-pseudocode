/*
 * XREFs of ViDifFindIoCallbackContext @ 0x140C2E4E0
 * Callers:
 *     VfDifRecoverIoCallbacks @ 0x140644F38 (VfDifRecoverIoCallbacks.c)
 *     ViDifCaptureIoCallbacks @ 0x140C2672C (ViDifCaptureIoCallbacks.c)
 *     ViDifCaptureDriverEntry @ 0x140C2E494 (ViDifCaptureDriverEntry.c)
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
