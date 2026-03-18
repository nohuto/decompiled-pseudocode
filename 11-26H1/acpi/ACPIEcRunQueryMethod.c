/*
 * XREFs of ACPIEcRunQueryMethod @ 0x14003E600
 * Callers:
 *     ACPIEcDispatchQueries @ 0x14003E738 (ACPIEcDispatchQueries.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     ACPIEcCompleteQueryMethod @ 0x14003E6C0 (ACPIEcCompleteQueryMethod.c)
 */

__int64 __fastcall ACPIEcRunQueryMethod(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rsi
  unsigned int v4; // ebx

  v3 = AMLIGetNamedChild(
         *(__int64 **)(a1 + 56),
         (((unsigned __int8)rgHexDigit[(unsigned __int64)a2 >> 4] | ((unsigned __int8)rgHexDigit[a2 & 0xF] << 8)) << 16) | 0x515Fu);
  if ( !v3 )
  {
    v4 = -1073741772;
    goto LABEL_4;
  }
  v4 = AMLIAsyncEvalObject(v3, 0LL, 0, 0LL, ACPIEcCompleteQueryMethod, a1);
  AMLIDereferenceHandleEx((__int64)v3);
  if ( v4 != 259 )
LABEL_4:
    ACPIEcCompleteQueryMethod(0LL, v4, 0LL, a1);
  return v4;
}
