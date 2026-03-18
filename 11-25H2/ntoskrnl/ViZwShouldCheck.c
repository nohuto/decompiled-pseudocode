/*
 * XREFs of ViZwShouldCheck @ 0x140B84DE4
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm_Entry @ 0x140B83C70 (VfZwAccessCheckAndAuditAlarm_Entry.c)
 *     VfZwQueryDriverEntryOrder_Entry @ 0x140B83CF0 (VfZwQueryDriverEntryOrder_Entry.c)
 *     VfZwTranslateFilePath_Entry @ 0x140B83D30 (VfZwTranslateFilePath_Entry.c)
 *     VfZwPowerInformation_Entry @ 0x140B83D80 (VfZwPowerInformation_Entry.c)
 *     VfZwAlpcAcceptConnectPort_Entry @ 0x140B83DC0 (VfZwAlpcAcceptConnectPort_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140B83E20 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwAlpcCreatePort_Entry @ 0x140B83EC0 (VfZwAlpcCreatePort_Entry.c)
 *     VfZwAlpcCreateSecurityContext_Entry @ 0x140B83F10 (VfZwAlpcCreateSecurityContext_Entry.c)
 *     VfZwQueryObject_Entry @ 0x140B83F40 (VfZwQueryObject_Entry.c)
 *     VfZwAlpcSendWaitReceivePort_Entry @ 0x140B83F80 (VfZwAlpcSendWaitReceivePort_Entry.c)
 *     VfZwSetDriverEntryOrder_Entry @ 0x140B83FF0 (VfZwSetDriverEntryOrder_Entry.c)
 *     VfZwCloseObjectAuditAlarm_Entry @ 0x140B84020 (VfZwCloseObjectAuditAlarm_Entry.c)
 *     VfZwConnectPort_Entry @ 0x140B84050 (VfZwConnectPort_Entry.c)
 *     VfZwOpenKey_Entry @ 0x140B840D0 (VfZwOpenKey_Entry.c)
 *     VfZwCreateEnlistment_Entry @ 0x140B84110 (VfZwCreateEnlistment_Entry.c)
 *     VfZwCreateTimer_Entry @ 0x140B84150 (VfZwCreateTimer_Entry.c)
 *     VfZwCreateFile_Entry @ 0x140B84190 (VfZwCreateFile_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140B841F0 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSection_Entry @ 0x140B84240 (VfZwCreateSection_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140B84290 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140B842E0 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140B84330 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteBootEntry_Entry @ 0x140B84390 (VfZwDeleteBootEntry_Entry.c)
 *     VfZwDeleteFile_Entry @ 0x140B843C0 (VfZwDeleteFile_Entry.c)
 *     VfZwDeleteValueKey_Entry @ 0x140B843F0 (VfZwDeleteValueKey_Entry.c)
 *     VfZwDeviceIoControlFile_Entry @ 0x140B84420 (VfZwDeviceIoControlFile_Entry.c)
 *     VfZwDuplicateObject_Entry @ 0x140B84490 (VfZwDuplicateObject_Entry.c)
 *     VfZwDuplicateToken_Entry @ 0x140B844C0 (VfZwDuplicateToken_Entry.c)
 *     VfZwFlushVirtualMemory_Entry @ 0x140B84500 (VfZwFlushVirtualMemory_Entry.c)
 *     VfZwFreeVirtualMemory_Entry @ 0x140B84550 (VfZwFreeVirtualMemory_Entry.c)
 *     VfZwLoadKey_Entry @ 0x140B84590 (VfZwLoadKey_Entry.c)
 *     VfZwMapViewOfSection_Entry @ 0x140B845D0 (VfZwMapViewOfSection_Entry.c)
 *     VfZwNotifyChangeKey_Entry @ 0x140B84620 (VfZwNotifyChangeKey_Entry.c)
 *     VfZwOpenEnlistment_Entry @ 0x140B846A0 (VfZwOpenEnlistment_Entry.c)
 *     VfZwOpenFile_Entry @ 0x140B846E0 (VfZwOpenFile_Entry.c)
 *     VfZwOpenThread_Entry @ 0x140B84730 (VfZwOpenThread_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140B84780 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwOpenTransaction_Entry @ 0x140B847D0 (VfZwOpenTransaction_Entry.c)
 *     VfZwProtectVirtualMemory_Entry @ 0x140B84820 (VfZwProtectVirtualMemory_Entry.c)
 *     VfZwQueryDirectoryFileEx_Entry @ 0x140B84870 (VfZwQueryDirectoryFileEx_Entry.c)
 *     VfZwQueryDirectoryFile_Entry @ 0x140B848E0 (VfZwQueryDirectoryFile_Entry.c)
 *     VfZwQueryEaFile_Entry @ 0x140B84950 (VfZwQueryEaFile_Entry.c)
 *     VfZwQueryFullAttributesFile_Entry @ 0x140B849A0 (VfZwQueryFullAttributesFile_Entry.c)
 *     VfZwQueryLicenseValue_Entry @ 0x140B849E0 (VfZwQueryLicenseValue_Entry.c)
 *     VfZwQuerySymbolicLinkObject_Entry @ 0x140B84A30 (VfZwQuerySymbolicLinkObject_Entry.c)
 *     VfZwQueryValueKey_Entry @ 0x140B84A70 (VfZwQueryValueKey_Entry.c)
 *     VfZwWriteFile_Entry @ 0x140B84AC0 (VfZwWriteFile_Entry.c)
 *     VfZwRemoveIoCompletionEx_Entry @ 0x140B84B30 (VfZwRemoveIoCompletionEx_Entry.c)
 *     VfZwReplaceKey_Entry @ 0x140B84B80 (VfZwReplaceKey_Entry.c)
 *     VfZwSetTimer_Entry @ 0x140B84BC0 (VfZwSetTimer_Entry.c)
 *     VfZwSetValueKey_Entry @ 0x140B84C10 (VfZwSetValueKey_Entry.c)
 * Callees:
 *     <none>
 */

__int64 ViZwShouldCheck()
{
  unsigned int v0; // ecx
  struct _KPROCESS *Process; // rdx

  v0 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( PsInitialSystemProcess && Process != PsInitialSystemProcess )
    return Process != PsIdleProcess;
  return v0;
}
