/*
 * XREFs of ?GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z @ 0x140147848
 * Callers:
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1401474F0 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 *     ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x140147600 (-AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDES.c)
 *     ?GetMsgPointerIdFromEdition@CTouchProcessor@@QEAAG_K@Z @ 0x1402156F0 (-GetMsgPointerIdFromEdition@CTouchProcessor@@QEAAG_K@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetMsgPointerId(CTouchProcessor *this, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 36) & 0x80u) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 10641LL);
    return *(unsigned __int16 *)(a2 + 16);
  }
  return result;
}
