/*
 * XREFs of ?MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x14002A69C
 * Callers:
 *     _anonymous_namespace_::MoveCursor @ 0x1400F8EAC (_anonymous_namespace_--MoveCursor.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1402204F0 (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     HideMouseTrails @ 0x1402A2920 (HideMouseTrails.c)
 * Callees:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z @ 0x14002AA18 (-MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z.c)
 */

void __fastcall CursorApiRouter::MovePointerAsync(
        CursorApiRouter *this,
        HDEV a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  InputTraceLogging::Cursor::Api::MovePointerAsync(a3, a4, a5);
  CursorApiRouter::MovePointerImpl(this, a2, a3, a4, a5, 1, 0LL, 0LL);
}
