/*
 * XREFs of ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x14005BF5C
 * Callers:
 *     PostMousePointerLeaveAndCleanup @ 0x14015DC10 (PostMousePointerLeaveAndCleanup.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     InternalSetProp @ 0x14005BFA8 (InternalSetProp.c)
 */

void __fastcall SetMiPWindowFlags(struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  if ( a1 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    InternalSetProp(a1, *(unsigned __int16 *)(UserSessionState + 41324), a2, 5LL);
  }
}
