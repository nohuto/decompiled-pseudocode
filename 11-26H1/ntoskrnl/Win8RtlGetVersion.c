/*
 * XREFs of Win8RtlGetVersion @ 0x1407C2A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetVersion @ 0x140A97730 (RtlGetVersion.c)
 */

NTSTATUS __fastcall Win8RtlGetVersion(_OSVERSIONINFOW *a1)
{
  NTSTATUS result; // eax
  DWORD dwOSVersionInfoSize; // ecx

  result = RtlGetVersion(a1);
  if ( result >= 0 )
  {
    a1->szCSDVersion[0] = 0;
    dwOSVersionInfoSize = a1->dwOSVersionInfoSize;
    a1->dwMajorVersion = 6;
    a1->dwMinorVersion = 2;
    a1->dwBuildNumber = 9200;
    if ( dwOSVersionInfoSize == 284 || dwOSVersionInfoSize == 292 )
      a1[1].dwOSVersionInfoSize = 0;
  }
  return result;
}
