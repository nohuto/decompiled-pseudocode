/*
 * XREFs of FxIsTestSigningOn @ 0x1400964D4
 * Callers:
 *     FxLibraryIsV35DriverAllowed @ 0x14008E520 (FxLibraryIsV35DriverAllowed.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxIsTestSigningOn()
{
  int v0; // ebx
  _SYSTEM_CODEINTEGRITY_INFORMATION codeIntegrityInfo; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(v0) = result;
  if ( result == -1 )
  {
    v0 = 0;
    codeIntegrityInfo.CodeIntegrityOptions = 0;
    codeIntegrityInfo.Length = 8;
    if ( NtQuerySystemInformation(SystemCodeIntegrityInformation, &codeIntegrityInfo, 8u, 0LL) >= 0 )
      v0 = (codeIntegrityInfo.CodeIntegrityOptions & 2) != 0;
    result = v0;
  }
  return v0;
}
