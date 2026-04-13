/*
 * XREFs of ??$CreateCvFromGuid@$0M@@TraceLoggingCorrelationVector@@AEAAXU_GUID@@@Z @ 0x180046238
 * Callers:
 *     ??0CorrelationVectorWrapper@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18004B998 (--0CorrelationVectorWrapper@Background@ContentDeliveryManager@@QEAA@XZ.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z @ 0x18007C22C (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180021E51 (memset_0.c)
 *     ??$Base64Encode@$0IB@@TLV@@YAXPEBEIAEAY0IB@D@Z @ 0x18004609C (--$Base64Encode@$0IB@@TLV@@YAXPEBEIAEAY0IB@D@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

char __fastcall TraceLoggingCorrelationVector::CreateCvFromGuid<12>(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  char result; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  *(_BYTE *)(a1 + 129) = 17;
  *(_QWORD *)(a1 + 136) = 0x1300000000LL;
  v5 = v2;
  memset_0((void *)a1, 0, 0x81uLL);
  result = TLV::Base64Encode<129>((unsigned __int8 *)&v5, 0xCu, a1);
  *(_WORD *)(a1 + 16) = 46;
  return result;
}
