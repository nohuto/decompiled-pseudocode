/*
 * XREFs of ?RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x14026648C
 * Callers:
 *     ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x1401D5B0C (-GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z.c)
 * Callees:
 *     RtlStringExHandleOtherFlagsW @ 0x140321E9C (RtlStringExHandleOtherFlagsW.c)
 *     RtlStringVPrintfWorkerW @ 0x140321F5C (RtlStringVPrintfWorkerW.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 RtlStringCchPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        unsigned __int16 **a3,
        unsigned __int64 *a4,
        ULONG dwFlags,
        const unsigned __int16 *a6,
        ...)
{
  int v9; // ebx
  const wchar_t *v10; // r9
  NTSTRSAFE_PWSTR v11; // r13
  unsigned __int64 v12; // r14
  NTSTATUS v13; // eax
  size_t v14; // rcx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list argList; // [rsp+C0h] [rbp+78h] BYREF

  va_start(argList, a6);
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
    v10 = a6;
    v11 = pszDest;
    ppszDestEnd = pszDest;
    v12 = cchDest;
    pcchNewDestLength[0] = cchDest;
    if ( (dwFlags & 0x100) != 0 && !a6 )
      v10 = &pszFormat;
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
      ppszDestEnd = v11;
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
        if ( a3 )
          *a3 = v11;
        if ( a4 )
          *a4 = v12;
        return (unsigned int)v9;
      }
      v9 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      RtlStringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)a3, &ppszDestEnd, pcchNewDestLength, dwFlags);
      v11 = ppszDestEnd;
      v12 = pcchNewDestLength[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_20;
  }
  return (unsigned int)v9;
}
