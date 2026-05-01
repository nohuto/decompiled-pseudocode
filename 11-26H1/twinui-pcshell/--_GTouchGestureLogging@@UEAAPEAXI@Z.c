/*
 * XREFs of ??_GTouchGestureLogging@@UEAAPEAXI@Z @ 0x1802D5080
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_75f51455afdd6deeb34ec28b1e80a524_@@CA@XZ @ 0x1802FAFF0 (-_lambda_invoker_cdecl_@_lambda_75f51455afdd6deeb34ec28b1e80a524_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_87ebf9cdbe9512ecf246e0e20380c4a1_@@CA@XZ @ 0x1803F30A0 (-_lambda_invoker_cdecl_@_lambda_87ebf9cdbe9512ecf246e0e20380c4a1_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_fac79a549a8b210f59d21e9b666a8346_@@CA@XZ @ 0x1803F4670 (-_lambda_invoker_cdecl_@_lambda_fac79a549a8b210f59d21e9b666a8346_@@CA@XZ.c)
 * Callees:
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180211708 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TouchGestureLogging *__fastcall TouchGestureLogging::`scalar deleting destructor'(TouchGestureLogging *this, char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
