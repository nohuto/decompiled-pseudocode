/*
 * XREFs of ?HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z @ 0x1402DBE90
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140060500 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x14025CB6C (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1402DC73C (-SetCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     DwmAsyncChangeCursorSynchronization @ 0x1403244E8 (DwmAsyncChangeCursorSynchronization.c)
 */

void __fastcall CursorApiRouter::HandleRoutingStateAction(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  void *v4; // rax

  if ( a2 == 1 )
  {
    InputTraceLogging::Cursor::Api::SetCursorSynchronizationMode(*(_BYTE *)(a1 + 14));
    v4 = (void *)ReferenceDwmApiPort(v3, v2);
    if ( (int)DwmAsyncChangeCursorSynchronization(v4) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 671);
  }
}
