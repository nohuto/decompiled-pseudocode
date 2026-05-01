/*
 * XREFs of TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x18000C380
 * Callers:
 *     DllMain @ 0x18000C2A0 (DllMain.c)
 * Callees:
 *     __security_check_cookie @ 0x18001A5F0 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EventRegister_EventSetInformation(ULONGLONG *CallbackContext)
{
  bool v1; // zf
  signed int v3; // esi
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v1 = CallbackContext[4] == 0;
  ProviderId = *(GUID *)(CallbackContext[1] - 16);
  if ( !v1 )
    __fastfail(5u);
  CallbackContext[5] = 0LL;
  CallbackContext[6] = 0LL;
  v3 = EventRegister(&ProviderId, (PENABLECALLBACK)tlgEnableCallback, CallbackContext, CallbackContext + 4);
  if ( v3 )
  {
    if ( v3 > 0 )
      return (unsigned __int16)v3 | 0x80070000;
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
  }
  return (unsigned int)v3;
}
