/*
 * XREFs of ?IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z @ 0x14008FA04
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008E350 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008F290 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?HasFallbackInteractionSink@@YA_NPEBUtagWND@@@Z @ 0x14008FD9C (-HasFallbackInteractionSink@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall IsCompositionInputWindowForHitTest(struct tagWND *a1, __int64 a2)
{
  if ( (*((_DWORD *)a1 + 95) & 0x40000000) == 0 )
    return 0;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1, a2) )
    return 1;
  if ( (*((_DWORD *)a1 + 95) & 0x1000) != 0 )
    return 0;
  return !HasFallbackInteractionSink(a1);
}
