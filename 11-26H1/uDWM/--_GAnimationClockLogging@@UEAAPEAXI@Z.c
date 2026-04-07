/*
 * XREFs of ??_GAnimationClockLogging@@UEAAPEAXI@Z @ 0x180090BC0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_1_@?1??Instance@UDwmTrace@@KAPEAV3@XZ@SA@XZ @ 0x1800CC010 (-_lambda_invoker_cdecl_@_lambda_1_@-1--Instance@UDwmTrace@@KAPEAV3@XZ@SA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180090A0C (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

AnimationClockLogging *__fastcall AnimationClockLogging::`scalar deleting destructor'(
        AnimationClockLogging *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  wil::TraceLoggingProvider::~TraceLoggingProvider(this, a2, a3);
  if ( (v3 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
