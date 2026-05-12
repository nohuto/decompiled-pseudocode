/*
 * XREFs of TcglibpReinitRequestResources @ 0x140134228
 * Callers:
 *     TcglibpCallMethod @ 0x140133D2C (TcglibpCallMethod.c)
 *     TcglibpOpenSession @ 0x140136744 (TcglibpOpenSession.c)
 *     TcglibpTransaction @ 0x140136A88 (TcglibpTransaction.c)
 * Callees:
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     TcglibEalReuseCommand @ 0x14008D9CC (TcglibEalReuseCommand.c)
 */

__int64 __fastcall TcglibpReinitRequestResources(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 && a3 )
  {
    result = TcglibEalReuseCommand(a1, a2);
    if ( (int)result >= 0 )
      return TcglibEalReuseCommand(a1, a3);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_26031245b0af395f80dcd19d8421604d_Traceguids);
    return 3221225485LL;
  }
  return result;
}
