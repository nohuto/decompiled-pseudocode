/*
 * XREFs of ?GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z @ 0x14028DFF4
 * Callers:
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x140138088 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall GetPwndFromPointerMsgId(unsigned __int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  HWND v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( CTouchProcessor::GetPointerMessageInfo(
         *(CTouchProcessor **)(UserSessionState + 3256),
         a1,
         0,
         &v5,
         0LL,
         0LL,
         0LL,
         0LL) )
  {
    return (struct tagWND *)ValidateHwnd(v5);
  }
  else
  {
    return 0LL;
  }
}
