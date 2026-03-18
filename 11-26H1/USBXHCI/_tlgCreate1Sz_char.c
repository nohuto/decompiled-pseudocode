/*
 * XREFs of _tlgCreate1Sz_char @ 0x140001008
 * Callers:
 *     Etw_DeviceUpdate @ 0x140001114 (Etw_DeviceUpdate.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x14004F608 (Etw_ReportControllerHealthWithPortInfo.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x140057954 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tlgCreate1Sz_char(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    result = (unsigned int)(v2 + 1);
  }
  else
  {
    a2 = &unk_14005EB8E;
    result = 1LL;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
