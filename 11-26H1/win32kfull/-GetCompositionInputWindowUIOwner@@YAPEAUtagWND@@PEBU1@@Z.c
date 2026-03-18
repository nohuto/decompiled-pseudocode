/*
 * XREFs of ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x14008C1D8
 * Callers:
 *     EditionPostDwmSpeedHitTest @ 0x14008C7D0 (EditionPostDwmSpeedHitTest.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x14008D494 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x140099DDC (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14013774C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x14024F4BC (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     EditionGetCompositionInputWindowUIOwner @ 0x140252E30 (EditionGetCompositionInputWindowUIOwner.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxTrackMouseMove @ 0x14027D0C8 (xxxTrackMouseMove.c)
 *     ?AltF4Callback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x14029B000 (-AltF4Callback@@YA-AW4tagHotKeyCallBackResult@@_K_J@Z.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x14029CCE0 (EditionChangeForegroundQueueForMouseInput.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1400369B4 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 */

struct tagWND *__fastcall GetCompositionInputWindowUIOwner(const struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)a1 + 95) & 0x40000000) == 0 )
    return 0LL;
  v1 = 0LL;
  v3 = 0LL;
  CWindowProp::GetProp<CInputQueueProp>((__int64)a1, &v3);
  if ( *(_DWORD *)(v3 + 32) )
    return *(struct tagWND **)(v3 + 40);
  return (struct tagWND *)v1;
}
