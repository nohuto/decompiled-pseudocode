/*
 * XREFs of TppWorkerpOuterExceptionFilter @ 0x180159520
 * Callers:
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 * Callees:
 *     RtlReportException @ 0x18010BBF0 (RtlReportException.c)
 *     TppExceptionFilter @ 0x18011F28C (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x18011F6C8 (TppTerminateProcess.c)
 */

__int64 __fastcall TppWorkerpOuterExceptionFilter(unsigned int **a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *a2 )
  {
    *a2 = 0;
  }
  else
  {
    v2 = TppExceptionFilter((__int64)a1);
    if ( v2 == 1 )
    {
      if ( **a1 != -1073741571 )
      {
        TppTerminateProcess(a1);
        __debugbreak();
      }
      RtlReportException(*a1, a1[1], 3LL);
    }
  }
  return v2;
}
