/*
 * XREFs of RtlGetNtVersionNumbers @ 0x18010AD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlGetNtVersionNumbers(PULONG NtMajorVersion, PULONG NtMinorVersion, PULONG NtBuildNumber)
{
  struct _PEB *v3; // r9

  v3 = NtCurrentPeb();
  if ( NtMajorVersion )
    *NtMajorVersion = v3->OSMajorVersion;
  if ( NtMinorVersion )
    *NtMinorVersion = v3->OSMinorVersion;
  if ( NtBuildNumber )
    *NtBuildNumber = v3->OSBuildNumber | 0xF0000000;
}
