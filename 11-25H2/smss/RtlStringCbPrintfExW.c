/*
 * XREFs of RtlStringCbPrintfExW @ 0x14000C8F4
 * Callers:
 *     SmpFinishPFROLogging @ 0x140014ADC (SmpFinishPFROLogging.c)
 *     SmpLogPFROError @ 0x140016F38 (SmpLogPFROError.c)
 * Callees:
 *     RtlStringExHandleOtherFlagsW @ 0x140013308 (RtlStringExHandleOtherFlagsW.c)
 *     RtlStringVPrintfWorkerW @ 0x1400133C8 (RtlStringVPrintfWorkerW.c)
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 */

NTSTATUS RtlStringCbPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  size_t v7; // rdi
  NTSTATUS v10; // ebx
  const wchar_t *v11; // r9
  NTSTRSAFE_PWSTR v12; // r13
  NTSTATUS v13; // eax
  size_t v14; // rcx
  size_t v15; // r8
  NTSTRSAFE_PWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list argList; // [rsp+C0h] [rbp+78h] BYREF

  va_start(argList, pszFormat);
  v7 = cbDest >> 1;
  v10 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && v7 || v7 > 0x7FFFFFFF )
      v10 = -1073741811;
  }
  else if ( v7 - 1 > 0x7FFFFFFE )
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
  {
    if ( v7 )
      *pszDest = 0;
  }
  else
  {
    v11 = pszFormat;
    v12 = pszDest;
    ppszDestEnda = pszDest;
    pcchNewDestLength[0] = cbDest >> 1;
    if ( (dwFlags & 0x100) != 0 && !pszFormat )
      v11 = &word_14002A680;
    v10 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v10 = -1073741811;
      if ( v7 )
        *pszDest = 0;
    }
    else if ( v7 )
    {
      pcchNewDestLength[0] = 0LL;
      v13 = RtlStringVPrintfWorkerW(pszDest, v7, pcchNewDestLength, v11, argList);
      v14 = pcchNewDestLength[0];
      v10 = v13;
      v7 -= pcchNewDestLength[0];
      pcchNewDestLength[0] = v7;
      v12 = &pszDest[v14];
      ppszDestEnda = v12;
      if ( v13 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 )
        {
          v15 = (cbDest & 1) + 2 * v7;
          if ( v15 > 2 )
            memset_0(v12 + 1, (unsigned __int8)dwFlags, v15 - 2);
        }
        goto LABEL_20;
      }
    }
    else
    {
      if ( !*v11 )
      {
LABEL_20:
        if ( ppszDestEnd )
          *ppszDestEnd = v12;
        if ( pcbRemaining )
          *pcbRemaining = (cbDest & 1) + 2 * v7;
        return v10;
      }
      v10 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cbDest )
    {
      RtlStringExHandleOtherFlagsW(pszDest, cbDest, (size_t)ppszDestEnd, &ppszDestEnda, pcchNewDestLength, dwFlags);
      v12 = ppszDestEnda;
      v7 = pcchNewDestLength[0];
    }
    if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
      goto LABEL_20;
  }
  return v10;
}
