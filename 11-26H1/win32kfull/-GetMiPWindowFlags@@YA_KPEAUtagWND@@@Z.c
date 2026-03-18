/*
 * XREFs of ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x140054720
 * Callers:
 *     PostMousePointerLeaveAndCleanup @ 0x1400545E0 (PostMousePointerLeaveAndCleanup.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 */

__int64 __fastcall GetMiPWindowFlags(struct tagWND *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 UserSessionState; // rax

  result = 0LL;
  if ( a1 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    return GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41364), 1u);
  }
  return result;
}
