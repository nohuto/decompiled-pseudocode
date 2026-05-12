/*
 * XREFs of RaUnitReadIoCounterSetCallback @ 0x140039240
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitSendInstanceCounters @ 0x140039378 (RaUnitSendInstanceCounters.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaUnitReadIoCounterSetCallback(int a1, int a2)
{
  int v5; // [rsp+30h] [rbp-138h]
  _BYTE v6[272]; // [rsp+40h] [rbp-128h] BYREF

  memset_0(v6, 0, 0x108uLL);
  v5 = 1;
  return RaUnitSendInstanceCounters(
           a1,
           a2,
           (unsigned int)v6,
           264,
           (__int64)StorpTelemetryGetUnitIoCounters,
           (__int64)SpPerfAddUnitWriteCounterSet,
           v5,
           0LL);
}
