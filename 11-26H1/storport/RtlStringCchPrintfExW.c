/*
 * XREFs of RtlStringCchPrintfExW @ 0x14004B494
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x1400A7264 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1400A7A78 (RaidUnitGetHardwareIds.c)
 *     NvmeNamespaceGetCompatibleIds @ 0x1401061A8 (NvmeNamespaceGetCompatibleIds.c)
 *     NvmeNamespaceGetHardwareIds @ 0x140106680 (NvmeNamespaceGetHardwareIds.c)
 *     NvmeNamespaceGetHardwareIdsEx @ 0x140106AAC (NvmeNamespaceGetHardwareIdsEx.c)
 * Callees:
 *     RtlStringExHandleOtherFlagsW @ 0x1400AAA74 (RtlStringExHandleOtherFlagsW.c)
 *     RtlStringVPrintfWorkerW @ 0x1400AAB34 (RtlStringVPrintfWorkerW.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

NTSTATUS RtlStringCchPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  NTSTATUS v9; // ebx
  const wchar_t *v10; // r9
  NTSTRSAFE_PWSTR v11; // r13
  size_t v12; // r14
  NTSTATUS v13; // eax
  size_t v14; // rcx
  NTSTRSAFE_PWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list argList; // [rsp+C0h] [rbp+78h] BYREF

  va_start(argList, pszFormat);
  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v10 = pszFormat;
    v11 = pszDest;
    ppszDestEnda = pszDest;
    v12 = cchDest;
    pcchNewDestLength[0] = cchDest;
    if ( (dwFlags & 0x100) != 0 && !pszFormat )
      v10 = &word_140152E7C;
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      pcchNewDestLength[0] = 0LL;
      v13 = RtlStringVPrintfWorkerW(pszDest, cchDest, pcchNewDestLength, v10, argList);
      v14 = pcchNewDestLength[0];
      v9 = v13;
      v12 = cchDest - pcchNewDestLength[0];
      pcchNewDestLength[0] = cchDest - pcchNewDestLength[0];
      v11 = &pszDest[v14];
      ppszDestEnda = v11;
      if ( v13 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v12 > 1 && 2 * v12 > 2 )
          memset_0(v11 + 1, (unsigned __int8)dwFlags, 2 * v12 - 2);
        goto LABEL_20;
      }
    }
    else
    {
      if ( !*v10 )
      {
LABEL_20:
        if ( ppszDestEnd )
          *ppszDestEnd = v11;
        if ( pcchRemaining )
          *pcchRemaining = v12;
        return v9;
      }
      v9 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      RtlStringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)ppszDestEnd, &ppszDestEnda, pcchNewDestLength, dwFlags);
      v11 = ppszDestEnda;
      v12 = pcchNewDestLength[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_20;
  }
  return v9;
}
