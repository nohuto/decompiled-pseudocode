/*
 * XREFs of ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x14000FF0C
 * Callers:
 *     PostMousePointerLeaveAndCleanup @ 0x1400545E0 (PostMousePointerLeaveAndCleanup.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 */

void __fastcall SetMiPWindowFlags(struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  if ( a1 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    InternalSetProp(a1, *(unsigned __int16 *)(UserSessionState + 41364), a2, 5LL);
  }
}
