/*
 * XREFs of ?TraceCurrentThresholds@ShellGesturesRecognizer@@SAXXZ @ 0x18015E014
 * Callers:
 *     ?Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180116250 (-Callback@InputTraceLogging@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?Thresholds@ShellGestures@InputTraceLogging@@SAX_J00000@Z @ 0x18015DF48 (-Thresholds@ShellGestures@InputTraceLogging@@SAX_J00000@Z.c)
 */

void ShellGesturesRecognizer::TraceCurrentThresholds(void)
{
  InputTraceLogging::ShellGestures::Thresholds(
    ShellGesturesRecognizer::s_thresholds,
    (unsigned int)dword_180253208,
    qword_180253210,
    qword_180253218,
    (unsigned int)dword_180253220,
    (unsigned int)dword_180253224);
}
