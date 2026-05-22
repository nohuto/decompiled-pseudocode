/*
 * XREFs of TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180075B30
 * Callers:
 *     _anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger__ @ 0x18000A120 (_anonymous_namespace_--_dynamic_initializer_for__g_EtwLogger__.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180012278 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     _anonymous_namespace_::_dynamic_initializer_for__g_EtwLogger___0 @ 0x180075B00 (_anonymous_namespace_--_dynamic_initializer_for__g_EtwLogger___0.c)
 *     ?TelemetryRegisterMicrosoft_OneCore_MinInput@@YAXXZ @ 0x180097FFC (-TelemetryRegisterMicrosoft_OneCore_MinInput@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EventRegister_EventSetInformation(ULONGLONG *CallbackContext, ULONGLONG a2)
{
  ULONGLONG *v2; // rsi
  bool v3; // zf
  signed int v5; // eax
  unsigned int v6; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v2 = CallbackContext + 4;
  v3 = CallbackContext[4] == 0;
  ProviderId = *(GUID *)(CallbackContext[1] - 16);
  if ( !v3 )
    __fastfail(5u);
  CallbackContext[5] = a2;
  CallbackContext[6] = 0LL;
  v5 = EventRegister(&ProviderId, (PENABLECALLBACK)tlgEnableCallback, CallbackContext, v2);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      return (unsigned __int16)v5 | 0x80070000;
  }
  else
  {
    EventSetInformation(
      *v2,
      2LL,
      CallbackContext[1],
      *(unsigned __int16 *)CallbackContext[1],
      *(_QWORD *)&ProviderId.Data1,
      *(_QWORD *)ProviderId.Data4);
  }
  return v6;
}
