/*
 * XREFs of RtlStringVPrintfWorkerW @ 0x14003EB40
 * Callers:
 *     RtlStringCchPrintfW @ 0x14003E918 (RtlStringCchPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x14003E964 (RtlStringCchPrintfExW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringVPrintfWorkerW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszFormat,
        va_list argList)
{
  size_t v5; // rbx
  NTSTATUS v8; // ebp
  int v9; // eax

  v5 = cchDest - 1;
  v8 = 0;
  v9 = _vsnwprintf(pszDest, cchDest - 1, pszFormat, argList);
  if ( v9 < 0 )
    goto LABEL_2;
  if ( v9 == v5 )
    goto LABEL_3;
  if ( v9 > v5 )
  {
LABEL_2:
    v8 = -2147483643;
LABEL_3:
    pszDest[v5] = 0;
    goto LABEL_4;
  }
  v5 = v9;
LABEL_4:
  if ( pcchNewDestLength )
    *pcchNewDestLength = v5;
  return v8;
}
