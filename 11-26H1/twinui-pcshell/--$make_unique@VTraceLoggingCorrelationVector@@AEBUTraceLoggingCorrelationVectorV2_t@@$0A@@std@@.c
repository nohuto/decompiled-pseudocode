/*
 * XREFs of ??$make_unique@VTraceLoggingCorrelationVector@@AEBUTraceLoggingCorrelationVectorV2_t@@$0A@@std@@YA?AV?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@0@AEBUTraceLoggingCorrelationVectorV2_t@@@Z @ 0x1802B6248
 * Callers:
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x1803322B0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 * Callees:
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x1802B627C (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<TraceLoggingCorrelationVector,TraceLoggingCorrelationVectorV2_t const &,0>(
        _QWORD *a1)
{
  void *v3; // [rsp+48h] [rbp+10h]

  v3 = operator new(0x90uLL);
  *a1 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector(v3);
  return a1;
}
