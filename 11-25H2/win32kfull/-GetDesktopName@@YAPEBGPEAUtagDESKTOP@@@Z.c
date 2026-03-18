/*
 * XREFs of ?GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z @ 0x140202C0C
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x140242920 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall GetDesktopName(PVOID Object, __int64 a2)
{
  struct _OBJECT_NAME_INFORMATION *UserSessionState; // rax
  struct _OBJECT_NAME_INFORMATION *v4; // rbx
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  UserSessionState = (struct _OBJECT_NAME_INFORMATION *)W32GetUserSessionState(Object, a2);
  ReturnLength = 198;
  v4 = UserSessionState;
  if ( !Object || ObQueryNameString(Object, UserSessionState + 3937, 0xC6u, &ReturnLength) < 0 )
    return L"null";
  v4[3937].Name.Buffer[(unsigned __int64)v4[3937].Name.Length >> 1] = 0;
  return v4[3937].Name.Buffer;
}
