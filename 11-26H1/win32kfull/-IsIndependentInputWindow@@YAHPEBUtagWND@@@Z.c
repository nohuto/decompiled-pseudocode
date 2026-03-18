/*
 * XREFs of ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x14008D9DC
 * Callers:
 *     EditionPostDwmSpeedHitTest @ 0x14008C7D0 (EditionPostDwmSpeedHitTest.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x14008D494 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x140099DDC (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14013774C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x14024F4BC (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxTrackMouseMove @ 0x14027D0C8 (xxxTrackMouseMove.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x14029CCE0 (EditionChangeForegroundQueueForMouseInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsIndependentInputWindow(const struct tagWND *a1)
{
  unsigned int v1; // edx
  __int64 v3; // r8
  __int64 v4; // rax

  v1 = 0;
  if ( (*((_DWORD *)a1 + 95) & 0x40000000) != 0 )
  {
    v3 = *((_QWORD *)a1 + 3);
    v4 = 0LL;
    if ( v3 )
      v4 = *(_QWORD *)(v3 + 112);
    if ( *((_QWORD *)a1 + 13) == v4 )
      return 1;
  }
  return v1;
}
