/*
 * XREFs of ACPIBusIrpSetLock @ 0x1400ADD60
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIrpInvokeDispatchRoutine @ 0x1400C8F04 (ACPIIrpInvokeDispatchRoutine.c)
 */

__int64 __fastcall ACPIBusIrpSetLock(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // [rsp+20h] [rbp-18h]

  v4 = 1;
  return ACPIIrpInvokeDispatchRoutine(a1, a2, a3, ACPIBusAndFilterIrpSetLock, v4);
}
