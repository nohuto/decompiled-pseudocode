/*
 * XREFs of ??_EFeatureLogging@details@wil@@UEAAPEAXI@Z @ 0x140007390
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140004C34 (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1400070C0 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

wil::details::FeatureLogging *__fastcall wil::details::FeatureLogging::`vector deleting destructor'(
        wil::details::FeatureLogging *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
