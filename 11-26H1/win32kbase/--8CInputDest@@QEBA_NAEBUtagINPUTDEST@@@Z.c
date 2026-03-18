/*
 * XREFs of ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400D0D68
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14009C278 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1400CCB98 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1400CEB40 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?IsMouseOwner@CMouseProcessor@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1400D029C (-IsMouseOwner@CMouseProcessor@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     HandleInputDestDestruction @ 0x1400D0AC8 (HandleInputDestDestruction.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x14010A518 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x14010AFBC (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1402153E0 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputDest::operator==(__int64 a1, __int64 a2)
{
  int v4; // eax
  char v5; // cl
  bool v6; // zf

  if ( !*(_DWORD *)a1 && !*(_DWORD *)a2 )
  {
    LOBYTE(v4) = 1;
    return v4;
  }
  v4 = *(_DWORD *)a2 & *(_DWORD *)a1;
  if ( v4 )
  {
    v5 = 1;
    if ( (v4 & 1) != 0 )
    {
      if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(a2 + 8) )
        goto LABEL_14;
      v6 = *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 12);
    }
    else
    {
      if ( (v4 & 2) == 0 )
      {
        if ( (v4 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 463LL);
        LOBYTE(v4) = *(_QWORD *)(a1 + 80) == *(_QWORD *)(a2 + 80);
        return v4;
      }
      if ( *(_DWORD *)(a1 + 32) != *(_DWORD *)(a2 + 32) || *(_DWORD *)(a1 + 36) != *(_DWORD *)(a2 + 36) )
        goto LABEL_14;
      v6 = *(_QWORD *)(a1 + 24) == *(_QWORD *)(a2 + 24);
    }
    if ( v6 )
    {
LABEL_12:
      LOBYTE(v4) = v5;
      return v4;
    }
LABEL_14:
    v5 = 0;
    goto LABEL_12;
  }
  return v4;
}
