/*
 * XREFs of ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1400C462C
 * Callers:
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1401FE1EC (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1401FEE94 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C5510 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

CInputDest *__fastcall CInputDest::CInputDest(CInputDest *this, struct tagWND *const a2)
{
  _OWORD v5[7]; // [rsp+20h] [rbp-89h] BYREF
  _OWORD v6[7]; // [rsp+90h] [rbp-19h] BYREF

  memset(v5, 0, sizeof(v5));
  if ( a2 )
  {
    LODWORD(v5[0]) = 4;
    *(_QWORD *)&v5[5] = a2;
    HIDWORD(v5[5]) = 2;
  }
  v6[0] = v5[0];
  v6[1] = v5[1];
  v6[2] = v5[2];
  v6[3] = v5[3];
  v6[4] = v5[4];
  v6[5] = v5[5];
  v6[6] = v5[6];
  CInputDest::CInputDest(this, (const struct tagINPUTDEST *)v6);
  return this;
}
