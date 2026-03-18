/*
 * XREFs of PsGetSessionCreateTime @ 0x140AB69C0
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x14096F92C (EtwQueryProcessTelemetryInfo.c)
 *     EtwpWriteProcessStarted @ 0x140AB66AC (EtwpWriteProcessStarted.c)
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
