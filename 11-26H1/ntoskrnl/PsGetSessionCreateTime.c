/*
 * XREFs of PsGetSessionCreateTime @ 0x1409D1144
 * Callers:
 *     EtwpWriteProcessStarted @ 0x1409D0E30 (EtwpWriteProcessStarted.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1409D1C14 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSessionCreateTime(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 744);
  if ( !v1 || (*(_DWORD *)(a1 + 1532) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(v1 + 168);
}
