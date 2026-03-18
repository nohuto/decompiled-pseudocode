/*
 * XREFs of ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x14019873C
 * Callers:
 *     ?RequestCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1402EEA7C (-RequestCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ?UserGetDwmCursorShape@Api@Cursor@InputTraceLogging@@SAXW4UserGetDwmCursorShapeResult@123@KK@Z @ 0x1402EF170 (-UserGetDwmCursorShape@Api@Cursor@InputTraceLogging@@SAXW4UserGetDwmCursorShapeResult@123@KK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall InputTraceLogging::Enabled(int a1, unsigned __int8 a2)
{
  unsigned int v2; // eax
  char v3; // dl

  v2 = a2;
  v3 = 0;
  if ( v2 < dword_1403AA9C0
    && (!a1 || (a1 & (unsigned __int64)qword_1403AA9D0) != 0 && (qword_1403AA9D8 & a1) == qword_1403AA9D8) )
  {
    return 1;
  }
  return v3;
}
