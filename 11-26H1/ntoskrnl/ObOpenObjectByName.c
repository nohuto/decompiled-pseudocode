/*
 * XREFs of ObOpenObjectByName @ 0x14092C800
 * Callers:
 *     NtOpenIoCompletion @ 0x140799970 (NtOpenIoCompletion.c)
 *     NtOpenCpuPartition @ 0x1407F7960 (NtOpenCpuPartition.c)
 *     NtOpenPartition @ 0x1408033A0 (NtOpenPartition.c)
 *     NtOpenTimer @ 0x140840CD0 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x14084BE00 (NtOpenKeyedEvent.c)
 *     CmpCreatePredefined @ 0x14085135C (CmpCreatePredefined.c)
 *     NtOpenRegistryTransaction @ 0x1408554F0 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x140869E38 (CmpDoReOpenTransKey.c)
 *     NtOpenEvent @ 0x140AA8FA0 (NtOpenEvent.c)
 *     NtOpenMutant @ 0x140AC7630 (NtOpenMutant.c)
 *     NtOpenJobObject @ 0x140B0FD10 (NtOpenJobObject.c)
 *     NtOpenSession @ 0x140B29D00 (NtOpenSession.c)
 *     IopUnloadDriver @ 0x140B2CE78 (IopUnloadDriver.c)
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  struct _LIST_ENTRY *CurrentSilo; // rax

  CurrentSilo = PsGetCurrentSilo();
  return ObOpenObjectByNameEx(a1, a2, a3, a4, a5, a6, CurrentSilo, a7);
}
