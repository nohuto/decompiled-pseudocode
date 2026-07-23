/*
 * XREFs of PsChargeProcessWakeCounter @ 0x14098F230
 * Callers:
 *     EtwpQueueNotification @ 0x140914660 (EtwpQueueNotification.c)
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140AF4534 (PopPowerRequestSpecialRequestSet.c)
 *     PspCreateActivityReference @ 0x140B294C8 (PspCreateActivityReference.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x140480370 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x14098F2A0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsChargeProcessWakeCounter(PVOID Object)
{
  __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId((__int64)Object);
  if ( result )
    return PspChargeProcessWakeCounter(Object, 1, 1, 0LL);
  return result;
}
