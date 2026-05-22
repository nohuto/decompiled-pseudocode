/*
 * XREFs of ?TelemetryRegisterMicrosoft_OneCore_MinInput@@YAXXZ @ 0x180097FFC
 * Callers:
 *     ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x180059770 (--0OneCoreUAPInputHost@@IEAA@XZ.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180075B30 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

void TelemetryRegisterMicrosoft_OneCore_MinInput(void)
{
  TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_180251248, 0LL);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_180251280, 0LL);
  ISMBamos_AutoBamos::BamoTraceLogging::s_providers = (const struct _tlgProvider_t * near *)&dword_180251280;
  *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) = (const struct _tlgProvider_t * near *)&dword_180251280;
  qword_180254640 = (__int64)&dword_180251280;
}
