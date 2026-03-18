/*
 * XREFs of PsChargeProcessWakeCounter @ 0x1409BE250
 * Callers:
 *     EtwpQueueNotification @ 0x140938AC0 (EtwpQueueNotification.c)
 *     AlpcpCompleteDispatchMessage @ 0x1409BF938 (AlpcpCompleteDispatchMessage.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140AF1C64 (PopPowerRequestSpecialRequestSet.c)
 *     PspCreateActivityReference @ 0x140B27418 (PspCreateActivityReference.c)
 * Callees:
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x140486A00 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     PspChargeProcessWakeCounter @ 0x1409BE2C0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsChargeProcessWakeCounter(PVOID Object)
{
  __int64 result; // rax

  result = PsGetProcessInheritedFromUniqueProcessId((__int64)Object);
  if ( result )
    return PspChargeProcessWakeCounter(Object, 1, 1, 0LL);
  return result;
}
