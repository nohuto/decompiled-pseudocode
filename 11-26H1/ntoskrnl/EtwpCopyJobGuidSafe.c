/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x140B06E70
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1406C8698 (EtwTraceJobServerSiloMonitorCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpCopyJobGuidSafe(_OWORD *a1, __int64 a2)
{
  if ( a2 )
    *a1 = *(_OWORD *)(a2 + 1472);
  else
    *a1 = 0LL;
}
