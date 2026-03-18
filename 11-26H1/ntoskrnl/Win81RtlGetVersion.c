/*
 * XREFs of Win81RtlGetVersion @ 0x1407BF8F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetVersion @ 0x140A92BE0 (RtlGetVersion.c)
 */

NTSTATUS __fastcall Win81RtlGetVersion(struct _OSVERSIONINFOW *a1)
{
  NTSTATUS result; // eax
  ULONG dwOSVersionInfoSize; // ecx

  result = RtlGetVersion(a1);
  if ( result >= 0 )
  {
    a1->szCSDVersion[0] = 0;
    dwOSVersionInfoSize = a1->dwOSVersionInfoSize;
    a1->dwMajorVersion = 6;
    a1->dwMinorVersion = 3;
    a1->dwBuildNumber = 9600;
    if ( dwOSVersionInfoSize == 284 || dwOSVersionInfoSize == 292 )
      a1[1].dwOSVersionInfoSize = 0;
  }
  return result;
}
