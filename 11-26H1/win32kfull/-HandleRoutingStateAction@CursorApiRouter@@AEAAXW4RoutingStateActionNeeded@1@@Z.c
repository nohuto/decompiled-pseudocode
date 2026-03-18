/*
 * XREFs of ?HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z @ 0x1400F9C18
 * Callers:
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1400F9E04 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     ?SetCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1400F776C (-SetCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     DwmAsyncChangeCursorSynchronization @ 0x140346AD4 (DwmAsyncChangeCursorSynchronization.c)
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
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 671LL);
  }
}
