/*
 * XREFs of ??$?4U?$default_delete@VTraceLoggingCorrelationVector@@@std@@$0A@@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803253BC
 * Callers:
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x1803322B0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 *     ?RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA?AUIInspectable@Foundation@Windows@winrt@@PEAUHWND__@@AEBUhstring@5@@Z @ 0x1805FC660 (-RegisterFlyoutWindow@ApplicationFlyoutView@@UEAA-AUIInspectable@Foundation@Windows@winrt@@PEAUH.c)
 * Callees:
 *     ?reset@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAXPEAVTraceLoggingCorrelationVector@@@Z @ 0x18021CA0C (-reset@-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVe.c)
 */

void **__fastcall std::unique_ptr<TraceLoggingCorrelationVector>::operator=<std::default_delete<TraceLoggingCorrelationVector>,0>(
        void **a1,
        void **a2)
{
  void *v4; // rdx

  v4 = *a2;
  *a2 = 0LL;
  std::unique_ptr<TraceLoggingCorrelationVector>::reset(a1, v4);
  return a1;
}
