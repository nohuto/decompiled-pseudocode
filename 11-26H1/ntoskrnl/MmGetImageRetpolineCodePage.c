/*
 * XREFs of MmGetImageRetpolineCodePage @ 0x1407007B0
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x140368B2C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140368BB4 (MmLockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x140368C40 (MmFindDataTableEntryByAddress.c)
 */

unsigned __int64 __fastcall MmGetImageRetpolineCodePage(PVOID a1, _QWORD *a2)
{
  struct _LIST_ENTRY *DataTableEntryByAddress; // rax
  unsigned __int64 v5; // rbx
  unsigned __int8 v6; // r11
  unsigned __int64 result; // rax

  if ( a1 == PsNtosImageBase || a1 == PsHalImageBase )
  {
    *a2 = 0LL;
    return 0LL;
  }
  else
  {
    MmLockLoadedModuleListShared();
    DataTableEntryByAddress = MmFindDataTableEntryByAddress((unsigned __int64)a1);
    v5 = (unsigned __int64)DataTableEntryByAddress[3].Flink
       + LODWORD(DataTableEntryByAddress[4].Flink)
       + (unsigned __int64)(unsigned int)(HIDWORD(stru_140E366D8.SListFaultAddress)
                                        + LODWORD(stru_140E366D8.QuantumTarget));
    MmUnlockLoadedModuleListShared(v6);
    result = v5;
    *a2 = (unsigned int)(*(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[76] << 12);
  }
  return result;
}
