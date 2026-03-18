/*
 * XREFs of ?CursorApiToString@Api@Cursor@InputTraceLogging@@SAPEBDW4CursorApi@123@@Z @ 0x1402DB650
 * Callers:
 *     ?ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z @ 0x140221338 (-ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::Cursor::Api::CursorApiToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return "Unknown";
  v1 = a1 - 1;
  if ( !v1 )
    return "Dwm";
  if ( v1 == 1 )
    return "Gre";
  return "UNKNOWN VALUE";
}
