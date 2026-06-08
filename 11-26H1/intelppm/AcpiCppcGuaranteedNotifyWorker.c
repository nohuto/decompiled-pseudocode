/*
 * XREFs of AcpiCppcGuaranteedNotifyWorker @ 0x140029090
 * Callers:
 *     <none>
 * Callees:
 *     CpcGuaranteedNotifyWorker @ 0x1400480FC (CpcGuaranteedNotifyWorker.c)
 */

__int64 __fastcall AcpiCppcGuaranteedNotifyWorker(__int64 a1, __int64 a2)
{
  return CpcGuaranteedNotifyWorker(a1, a2, "Notify 0x83");
}
