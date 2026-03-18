/*
 * XREFs of ExpReducedLicenseData @ 0x140B45E80
 * Callers:
 *     SLUpdateLicenseDataInternal @ 0x140839788 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

char ExpReducedLicenseData()
{
  char result; // al

  result = 0;
  if ( (_DWORD)InitSafeBootMode || InitIsWinPEMode )
    return 1;
  return result;
}
