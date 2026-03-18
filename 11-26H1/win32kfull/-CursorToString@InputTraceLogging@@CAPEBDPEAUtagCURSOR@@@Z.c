/*
 * XREFs of ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1401CAE90
 * Callers:
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1401CA5CC (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     ?SetQueueCursor@Cursor@InputTraceLogging@@SAXPEAUtagQ@@PEAUtagCURSOR@@@Z @ 0x1401CAE10 (-SetQueueCursor@Cursor@InputTraceLogging@@SAXPEAUtagQ@@PEAUtagCURSOR@@@Z.c)
 * Callees:
 *     ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x1401CAFCC (-CurIndexName@InputTraceLogging@@CAPEBDI@Z.c)
 */

const char *__fastcall InputTraceLogging::CursorToString(struct tagCURSOR *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 i; // rdi

  v2 = 0;
  if ( !a1 )
    return "Empty";
  for ( i = 0LL; i < 10488; i += 552LL )
  {
    if ( *(struct tagCURSOR **)(W32GetUserSessionState(a1, a2) + i + 21912) == a1 )
      return InputTraceLogging::CurIndexName(v2);
    ++v2;
  }
  return "Custom";
}
