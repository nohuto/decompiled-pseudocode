/*
 * XREFs of ?SetMouseMoveTimes@QHelper@@YAXAEBVCInputDest@@_K1@Z @ 0x1402221D4
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14018FD48 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1400B96E8 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall QHelper::SetMouseMoveTimes(QHelper *this, const struct CInputDest *a2, __int64 a3)
{
  __int64 Queue; // rax
  __int64 v7; // rax

  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 485);
  Queue = CInputDest::GetQueue(this, 2);
  if ( Queue )
    *(_QWORD *)(Queue + 208) = a2;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 499);
  v7 = CInputDest::GetQueue(this, 2);
  if ( v7 )
    *(_QWORD *)(v7 + 216) = a3;
}
