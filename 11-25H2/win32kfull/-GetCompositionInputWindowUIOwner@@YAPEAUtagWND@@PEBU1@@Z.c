/*
 * XREFs of ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140021688
 * Callers:
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1400213F0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x14011A8A4 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     EditionGetCompositionInputWindowUIOwner @ 0x140219520 (EditionGetCompositionInputWindowUIOwner.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1402210AC (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x140238340 (EditionChangeForegroundQueueForMouseInput.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x14023F260 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?HandleAltF4@@YAHPEBUtagHOTKEY@@@Z @ 0x14024614C (-HandleAltF4@@YAHPEBUtagHOTKEY@@@Z.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     xxxTrackMouseMove @ 0x14025D2EC (xxxTrackMouseMove.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x14026AB74 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     ?AltF4Callback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x140275700 (-AltF4Callback@@YA-AW4tagHotKeyCallBackResult@@_K_J@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionPostDwmSpeedHitTest @ 0x1402A50B0 (EditionPostDwmSpeedHitTest.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x14001F8E0 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
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
