/*
 * XREFs of ?MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1400603DC
 * Callers:
 *     _anonymous_namespace_::MoveCursor @ 0x14005EEF0 (_anonymous_namespace_--MoveCursor.c)
 *     HideMouseTrails @ 0x1401CA390 (HideMouseTrails.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1401F18C0 (ApplyGatheredDeviceInfoSummaryInformation.c)
 * Callees:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140060500 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z @ 0x1400607F0 (-MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z.c)
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
