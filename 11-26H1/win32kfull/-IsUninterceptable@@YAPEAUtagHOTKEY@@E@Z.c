/*
 * XREFs of ?IsUninterceptable@@YAPEAUtagHOTKEY@@E@Z @ 0x140203930
 * Callers:
 *     EditionKeyEventLLHook @ 0x140172CB0 (EditionKeyEventLLHook.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401E3D68 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x140203980 (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 */

unsigned __int64 __fastcall IsUninterceptable(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rax
  unsigned __int64 result; // rax

  v2 = (unsigned __int8)a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  result = (unsigned __int64)IsHotKey(*(_DWORD *)(UserSessionState + 14000), v2);
  if ( result )
    result &= -(__int64)((*(_WORD *)(result + 34) & 0x800) != 0);
  return result;
}
