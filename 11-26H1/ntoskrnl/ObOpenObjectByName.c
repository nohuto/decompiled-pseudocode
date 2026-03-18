/*
 * XREFs of ObOpenObjectByName @ 0x1408FC870
 * Callers:
 *     NtOpenIoCompletion @ 0x140796E40 (NtOpenIoCompletion.c)
 *     NtOpenCpuPartition @ 0x1407F1E00 (NtOpenCpuPartition.c)
 *     NtOpenPartition @ 0x1407FD970 (NtOpenPartition.c)
 *     NtOpenTimer @ 0x14083AA90 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x140841DC0 (NtOpenKeyedEvent.c)
 *     CmpCreatePredefined @ 0x14084B04C (CmpCreatePredefined.c)
 *     NtOpenRegistryTransaction @ 0x14084F1E0 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x140863A58 (CmpDoReOpenTransKey.c)
 *     NtOpenJobObject @ 0x140A77BE0 (NtOpenJobObject.c)
 *     NtOpenEvent @ 0x140AAB9F0 (NtOpenEvent.c)
 *     NtOpenMutant @ 0x140AC59C0 (NtOpenMutant.c)
 *     NtOpenSession @ 0x140B28070 (NtOpenSession.c)
 *     IopUnloadDriver @ 0x140B2ADF8 (IopUnloadDriver.c)
 *     CmInitSystem1 @ 0x140CE888C (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14041BBC0 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1408FCDF0 (ObOpenObjectByNameEx.c)
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
