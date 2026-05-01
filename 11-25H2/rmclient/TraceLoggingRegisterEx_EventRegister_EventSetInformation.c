/*
 * XREFs of TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x18000C6B0
 * Callers:
 *     DllMain @ 0x18000C5D0 (DllMain.c)
 * Callees:
 *     __security_check_cookie @ 0x18001C080 (__security_check_cookie.c)
 */

signed int __fastcall TraceLoggingRegisterEx_EventRegister_EventSetInformation(ULONGLONG *CallbackContext)
{
  bool v1; // zf
  signed int result; // eax
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v1 = CallbackContext[4] == 0;
  ProviderId = *(GUID *)(CallbackContext[1] - 16);
  if ( !v1 )
    __fastfail(5u);
  CallbackContext[5] = 0LL;
  CallbackContext[6] = 0LL;
  result = EventRegister(&ProviderId, (PENABLECALLBACK)tlgEnableCallback, CallbackContext, CallbackContext + 4);
  if ( result )
  {
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    EventSetInformation(
      CallbackContext[4],
      2LL,
      CallbackContext[1],
      *(unsigned __int16 *)CallbackContext[1],
      *(_QWORD *)&ProviderId.Data1,
      *(_QWORD *)ProviderId.Data4);
    return 0;
  }
  return result;
}
