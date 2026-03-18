/*
 * XREFs of ViDifFindIoCallbackContext @ 0x140B7A8E4
 * Callers:
 *     VfDifRecoverIoCallbacks @ 0x140604F70 (VfDifRecoverIoCallbacks.c)
 *     ViDifCaptureDriverEntry @ 0x140B7A72C (ViDifCaptureDriverEntry.c)
 *     ViDifCaptureIoCallbacks @ 0x140B7A778 (ViDifCaptureIoCallbacks.c)
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
