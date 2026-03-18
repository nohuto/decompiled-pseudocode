/*
 * XREFs of ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x14015DD90
 * Callers:
 *     PostMousePointerLeaveAndCleanup @ 0x14015DC10 (PostMousePointerLeaveAndCleanup.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 */

__int64 __fastcall GetMiPWindowFlags(struct tagWND *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 UserSessionState; // rax

  result = 0LL;
  if ( a1 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    return GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41324), 1u);
  }
  return result;
}
