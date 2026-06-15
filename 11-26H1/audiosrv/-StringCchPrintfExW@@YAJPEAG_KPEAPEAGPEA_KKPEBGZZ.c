/*
 * XREFs of ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800321E8
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x180031BB0 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     StringExHandleOtherFlagsW @ 0x18010FA7C (StringExHandleOtherFlagsW.c)
 *     StringVPrintfWorkerW_0 @ 0x18013DE74 (StringVPrintfWorkerW_0.c)
 */

__int64 StringCchPrintfExW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        unsigned __int16 **a3,
        unsigned __int64 *a4,
        DWORD dwFlags,
        const unsigned __int16 *a6,
        ...)
{
  int v9; // ebx
  const wchar_t *v10; // r9
  STRSAFE_LPWSTR v11; // r13
  unsigned __int64 v12; // r14
  HRESULT v13; // eax
  size_t v14; // rcx
  STRSAFE_LPWSTR ppszDestEnd; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list argList; // [rsp+C0h] [rbp+78h] BYREF

  va_start(argList, a6);
  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v9 = -2147024809;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v9 = -2147024809;
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
      v10 = &LocaleName;
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -2147024809;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      pcchNewDestLength[0] = 0LL;
      v13 = StringVPrintfWorkerW_0(pszDest, cchDest, pcchNewDestLength, v10, argList);
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
      v9 = pszDest != 0LL ? -2147024774 : -2147024809;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)a3, &ppszDestEnd, pcchNewDestLength, dwFlags);
      v11 = ppszDestEnd;
      v12 = pcchNewDestLength[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147024774 )
      goto LABEL_20;
  }
  return (unsigned int)v9;
}
