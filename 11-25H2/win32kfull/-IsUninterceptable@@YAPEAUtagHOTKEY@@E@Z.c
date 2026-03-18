/*
 * XREFs of ?IsUninterceptable@@YAPEAUtagHOTKEY@@E@Z @ 0x1401D2ADC
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401B2F08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     EditionKeyEventLLHook @ 0x14024FFF0 (EditionKeyEventLLHook.c)
 * Callees:
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1401D2B2C (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 */

unsigned __int64 __fastcall IsUninterceptable(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rax
  unsigned __int64 result; // rax

  v2 = (unsigned __int8)a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  result = (unsigned __int64)IsHotKey(*(_DWORD *)(UserSessionState + 14008), v2);
  if ( result )
    result &= -(__int64)((*(_WORD *)(result + 34) & 0x800) != 0);
  return result;
}
