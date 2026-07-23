/*
 * XREFs of RtlPcToFileName @ 0x14040DB30
 * Callers:
 *     ExpTraceLogBadResourceAddress @ 0x14052FCB0 (ExpTraceLogBadResourceAddress.c)
 *     KiLogSingleDpcSoftTimeoutEvent @ 0x1405EBB10 (KiLogSingleDpcSoftTimeoutEvent.c)
 *     EtwTimLogControlProtectionKernelModeReturnMismatch @ 0x1406CA7F4 (EtwTimLogControlProtectionKernelModeReturnMismatch.c)
 *     KitLogFeatureUsage @ 0x1406D6580 (KitLogFeatureUsage.c)
 *     PoRegisterPowerSettingCallback @ 0x140B080C0 (PoRegisterPowerSettingCallback.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x140368B2C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140368BB4 (MmLockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x140368C40 (MmFindDataTableEntryByAddress.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
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
