/*
 * XREFs of ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1400A268C
 * Callers:
 *     ?CommitPosition@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@W4_CommitMousePosAndMoveResult@@@Z @ 0x1400A233C (-CommitPosition@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@W4_CommitMousePosAndMoveResult@@@Z.c)
 *     ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1400A268C (-CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z.c)
 * Callees:
 *     ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1400A268C (-CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z.c)
 */

const char *__fastcall InputTraceLogging::CommitMousePosAndMoveResultToString(int a1, __int64 a2, __int64 a3)
{
  switch ( a1 )
  {
    case 0:
      return "InputEaten";
    case 1:
      return "PosUpdated";
    case 2:
      return "CursorClippedSystem";
    case 4:
      return "CursorClippedApp";
    case 8:
      return "RawInputHandled";
  }
  if ( (a1 & 1) != 0 )
    return (const char *)InputTraceLogging::CommitMousePosAndMoveResultToString(a1 & 0xFFFFFFFE, a2, a3);
  return "UNKNOWN";
}
