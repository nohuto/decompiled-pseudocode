/*
 * XREFs of RtlPcToFileName @ 0x140419600
 * Callers:
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     KiLogSingleDpcSoftTimeoutEvent @ 0x1405E91A0 (KiLogSingleDpcSoftTimeoutEvent.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x1406C6AF4 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     KitLogFeatureUsage @ 0x1406D2550 (KitLogFeatureUsage.c)
 *     PoRegisterPowerSettingCallback @ 0x140B05F90 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x140366D8C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140366E14 (MmLockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x140366EA0 (MmFindDataTableEntryByAddress.c)
 *     RtlCopyUnicodeString @ 0x140419A90 (RtlCopyUnicodeString.c)
 */

__int64 __fastcall RtlPcToFileName(unsigned __int64 a1, UNICODE_STRING *a2)
{
  unsigned __int8 v4; // di
  struct _LIST_ENTRY *DataTableEntryByAddress; // rax
  unsigned int v6; // ebx

  v4 = MmLockLoadedModuleListShared();
  DataTableEntryByAddress = MmFindDataTableEntryByAddress(a1);
  v6 = 0;
  if ( DataTableEntryByAddress )
    RtlCopyUnicodeString(a2, (PCUNICODE_STRING)&DataTableEntryByAddress[5].Blink);
  else
    v6 = -1073741275;
  MmUnlockLoadedModuleListShared(v4);
  return v6;
}
