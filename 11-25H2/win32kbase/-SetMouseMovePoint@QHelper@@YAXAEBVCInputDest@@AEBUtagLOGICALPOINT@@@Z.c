/*
 * XREFs of ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1401926C4
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14018FD48 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1400B96E8 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1400E88C4 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall QHelper::SetMouseMovePoint(
        QHelper *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3)
{
  __int64 Queue; // rbx

  Queue = CInputDest::GetQueue(this, 2);
  if ( Queue )
  {
    if ( (((unsigned __int16)(*((_DWORD *)a2 + 2) >> 8) ^ (unsigned __int16)((unsigned int)CInputDest::GetDpiAwarenessContext(this) >> 8)) & 0x1FF) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 474LL);
    *(_QWORD *)(Queue + 192) = *(_QWORD *)a2;
    *(_DWORD *)(Queue + 200) = *((_DWORD *)a2 + 2);
  }
}
