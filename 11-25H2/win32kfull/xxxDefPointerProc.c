/*
 * XREFs of xxxDefPointerProc @ 0x14015D838
 * Callers:
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxPromotePointerToMouse @ 0x140138C44 (xxxPromotePointerToMouse.c)
 *     SetMiPPromotion @ 0x14015DF28 (SetMiPPromotion.c)
 */

__int64 __fastcall xxxDefPointerProc(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int64 a4)
{
  unsigned int v5; // edi
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v8; // rax

  v5 = a2;
  if ( a3 == 1 )
  {
    v8 = PtiCurrent(a1, a2);
    SetMiPPromotion(v8, v5);
  }
  else if ( a4 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    xxxPromotePointerToMouse(a3, 0x10000000LL);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    CTouchProcessor::PromotePointerDataToMouse(*(CTouchProcessor **)(UserSessionState + 3256), a4, 0x10000000u);
  }
  return 0LL;
}
