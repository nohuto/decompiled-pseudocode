/*
 * XREFs of ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140124220
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x140212E60 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x140124264 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 */

__int64 __fastcall xxxUpdateSystemCursorsFromRegistry(__int64 a1, unsigned int a2)
{
  int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 19; ++i )
    result = xxxUpdateSystemCursorFromRegistry(a1, (unsigned int)i, a2);
  return result;
}
