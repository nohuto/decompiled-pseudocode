/*
 * XREFs of TppWorkerpInnerExceptionFilter @ 0x18011EFA4
 * Callers:
 *     TppWorkerThread @ 0x180028B50 (TppWorkerThread.c)
 * Callees:
 *     RtlReportException @ 0x18010B740 (RtlReportException.c)
 *     TppExceptionFilter @ 0x18011F03C (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x18011F478 (TppTerminateProcess.c)
 */

__int64 __fastcall TppWorkerpInnerExceptionFilter(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  EXCEPTION_RECORD *v7; // rcx

  v5 = TppExceptionFilter();
  v6 = v5;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v7 = *(EXCEPTION_RECORD **)a1;
      if ( **(_DWORD **)a1 == -1073741571 )
      {
        RtlReportException(v7, *(PCONTEXT *)(a1 + 8), 3u);
      }
      else
      {
        if ( v7->ExceptionCode != -1073740021
          && v7->ExceptionCode != -1073740020
          && v7->ExceptionCode != -1073740019
          && v7->ExceptionCode != -1073740018
          && v7->ExceptionCode != -1073740016 )
        {
          TppTerminateProcess(a1);
          __debugbreak();
        }
        return (unsigned int)-1;
      }
    }
  }
  else
  {
    *a3 = 1;
  }
  return v6;
}
