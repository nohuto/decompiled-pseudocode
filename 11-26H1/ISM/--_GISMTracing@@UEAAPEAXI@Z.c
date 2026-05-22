/*
 * XREFs of ??_GISMTracing@@UEAAPEAXI@Z @ 0x1800701D0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_260b9137d63ddd75627644ad4182c2ea_@@CA@XZ @ 0x1800D2420 (-_lambda_invoker_cdecl_@_lambda_260b9137d63ddd75627644ad4182c2ea_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_f655bc6deafeea110b0bcdbdac4bd35f_@@CA@XZ @ 0x1800D35D0 (-_lambda_invoker_cdecl_@_lambda_f655bc6deafeea110b0bcdbdac4bd35f_@@CA@XZ.c)
 * Callees:
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800702C8 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ISMTracing *__fastcall ISMTracing::`scalar deleting destructor'(ISMTracing *this, char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
