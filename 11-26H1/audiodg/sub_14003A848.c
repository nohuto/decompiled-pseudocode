/*
 * XREFs of sub_14003A848 @ 0x14003A848
 * Callers:
 *     sub_14003A7F0 @ 0x14003A7F0 (sub_14003A7F0.c)
 *     sub_14003A820 @ 0x14003A820 (sub_14003A820.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14003A848(_QWORD *CallbackContext)
{
  _QWORD *v1; // rsi
  bool v2; // zf
  signed int v4; // eax
  unsigned int v5; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v1 = CallbackContext + 4;
  v2 = CallbackContext[4] == 0LL;
  ProviderId = *(GUID *)(CallbackContext[1] - 16LL);
  if ( !v2 )
    __fastfail(5u);
  CallbackContext[5] = 0LL;
  CallbackContext[6] = 0LL;
  v4 = EventRegister(&ProviderId, (PENABLECALLBACK)EnableCallback, CallbackContext, CallbackContext + 4);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      return (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    EventSetInformation(
      *v1,
      2LL,
      CallbackContext[1],
      *(unsigned __int16 *)CallbackContext[1],
      *(_QWORD *)&ProviderId.Data1,
      *(_QWORD *)ProviderId.Data4);
  }
  return v5;
}
