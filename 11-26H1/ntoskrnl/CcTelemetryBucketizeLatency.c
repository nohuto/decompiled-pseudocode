/*
 * XREFs of CcTelemetryBucketizeLatency @ 0x140A814A8
 * Callers:
 *     CcCopyReadEx @ 0x14021CC00 (CcCopyReadEx.c)
 *     CcCopyWriteEx @ 0x14026CF40 (CcCopyWriteEx.c)
 *     CcCompleteAsyncRead @ 0x14039E848 (CcCompleteAsyncRead.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcTelemetryBucketizeLatency(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // r9
  __int64 result; // rax
  __int64 v6; // rdx

  v4 = CcLatencyBuckets;
  result = 0LL;
  while ( a1 > *v4 )
  {
    result = (unsigned int)(result + 1);
    ++v4;
    if ( (unsigned int)result >= 0xC )
      return result;
  }
  v6 = (unsigned int)result;
  *(_QWORD *)(a2 + 8LL * (unsigned int)result) = *(_QWORD *)(a2 + 8 * result) + 1LL;
  result = *(_QWORD *)(a3 + 8LL * (unsigned int)result);
  *(_QWORD *)(a3 + 8 * v6) = result + a1;
  return result;
}
