/*
 * XREFs of EtwpFreeRegistration @ 0x18006D308
 * Callers:
 *     EtwNotificationRegister @ 0x1800571C0 (EtwNotificationRegister.c)
 *     EtwNotificationUnregister @ 0x18006D0E0 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x180162D10 (RtlpInterlockedPushEntrySList.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpFreeRegistration(__int64 a1)
{
  __int64 result; // rax

  memset_thunk_772440563353939046((void *)(a1 + 88), 0, 0xA8uLL);
  result = RtlpInterlockedPushEntrySList(&EtwpFreeRegistrationList, a1);
  _InterlockedDecrement(&EtwpRegistrationCount);
  return result;
}
