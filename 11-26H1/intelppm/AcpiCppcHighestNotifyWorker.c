/*
 * XREFs of AcpiCppcHighestNotifyWorker @ 0x140045AE0
 * Callers:
 *     <none>
 * Callees:
 *     CpcHighestNotifyWorker @ 0x140045AFC (CpcHighestNotifyWorker.c)
 */

__int64 __fastcall AcpiCppcHighestNotifyWorker(__int64 a1, __int64 a2)
{
  return CpcHighestNotifyWorker(a1, a2, "Notify 0x85");
}
