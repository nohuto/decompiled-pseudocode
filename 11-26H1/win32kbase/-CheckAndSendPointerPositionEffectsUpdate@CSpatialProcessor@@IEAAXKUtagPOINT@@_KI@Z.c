/*
 * XREFs of ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KI@Z @ 0x1401992A8
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x14009B3E4 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAI@Z @ 0x14010DBCC (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     ApiSetAddMagnificationOutputTransform @ 0x140070F74 (ApiSetAddMagnificationOutputTransform.c)
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     IsInputProcessingActivated @ 0x1400D10D0 (IsInputProcessingActivated.c)
 *     ?CheckAndUpdateLastPointerPositionEffectsTimestamp@CSpatialProcessor@@AEAA_N_K@Z @ 0x140147CF4 (-CheckAndUpdateLastPointerPositionEffectsTimestamp@CSpatialProcessor@@AEAA_N_K@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        CSpatialProcessor *this,
        int a2,
        struct tagPOINT a3,
        __int64 a4,
        unsigned int a5)
{
  int v9; // eax
  _DWORD v10[104]; // [rsp+20h] [rbp-1A8h] BYREF

  if ( IsInputProcessingActivated((int)this, a2, a3.x) )
  {
    v9 = *((_DWORD *)this + 6);
    if ( v9 == a2 && (v9 != 2 || *((_DWORD *)this + 7) == a5) )
    {
      if ( CSpatialProcessor::CheckAndUpdateLastPointerPositionEffectsTimestamp(this, a4) )
      {
        memset(v10, 0, 0x198uLL);
        v10[0] = 1;
        v10[2] = a2;
        *(struct tagPOINT *)&v10[3] = a3;
        v10[5] = a5;
        ApiSetAddMagnificationOutputTransform((__int64)&v10[3]);
        SendMessageTo(4, (int)v10, 408);
      }
    }
  }
}
