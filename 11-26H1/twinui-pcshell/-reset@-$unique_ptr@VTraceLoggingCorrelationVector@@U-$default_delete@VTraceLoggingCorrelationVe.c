/*
 * XREFs of ?reset@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAXPEAVTraceLoggingCorrelationVector@@@Z @ 0x18021CA0C
 * Callers:
 *     ??$?4U?$default_delete@VTraceLoggingCorrelationVector@@@std@@$0A@@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803253BC (--$-4U-$default_delete@VTraceLoggingCorrelationVector@@@std@@$0A@@-$unique_ptr@VTraceLoggingCorr.c)
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x1803322B0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805F9344 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<TraceLoggingCorrelationVector>::reset(void **a1, void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    operator delete(v2, (const struct std::nothrow_t *)0x90);
}
