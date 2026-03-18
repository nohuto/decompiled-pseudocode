/*
 * XREFs of ViZwShouldCheck @ 0x140C47B84
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm_Entry @ 0x140C32100 (VfZwAccessCheckAndAuditAlarm_Entry.c)
 *     VfZwQueryDriverEntryOrder_Entry @ 0x140C32180 (VfZwQueryDriverEntryOrder_Entry.c)
 *     VfZwTranslateFilePath_Entry @ 0x140C321C0 (VfZwTranslateFilePath_Entry.c)
 *     VfZwPowerInformation_Entry @ 0x140C32210 (VfZwPowerInformation_Entry.c)
 *     VfZwAlpcAcceptConnectPort_Entry @ 0x140C32250 (VfZwAlpcAcceptConnectPort_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140C322B0 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwAlpcCreatePort_Entry @ 0x140C32350 (VfZwAlpcCreatePort_Entry.c)
 *     VfZwAlpcCreateSecurityContext_Entry @ 0x140C323A0 (VfZwAlpcCreateSecurityContext_Entry.c)
 *     VfZwQueryObject_Entry @ 0x140C323D0 (VfZwQueryObject_Entry.c)
 *     VfZwAlpcSendWaitReceivePort_Entry @ 0x140C32410 (VfZwAlpcSendWaitReceivePort_Entry.c)
 *     VfZwSetDriverEntryOrder_Entry @ 0x140C32480 (VfZwSetDriverEntryOrder_Entry.c)
 *     VfZwCloseObjectAuditAlarm_Entry @ 0x140C324B0 (VfZwCloseObjectAuditAlarm_Entry.c)
 *     VfZwConnectPort_Entry @ 0x140C324E0 (VfZwConnectPort_Entry.c)
 *     VfZwOpenKey_Entry @ 0x140C32560 (VfZwOpenKey_Entry.c)
 *     VfZwCreateEnlistment_Entry @ 0x140C325A0 (VfZwCreateEnlistment_Entry.c)
 *     VfZwCreateTimer_Entry @ 0x140C325E0 (VfZwCreateTimer_Entry.c)
 *     VfZwCreateFile_Entry @ 0x140C32620 (VfZwCreateFile_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140C32680 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSection_Entry @ 0x140C326D0 (VfZwCreateSection_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140C32720 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140C32770 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140C327C0 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteFile_Entry @ 0x140C32820 (VfZwDeleteFile_Entry.c)
 *     VfZwDeleteValueKey_Entry @ 0x140C32850 (VfZwDeleteValueKey_Entry.c)
 *     VfZwDeviceIoControlFile_Entry @ 0x140C32880 (VfZwDeviceIoControlFile_Entry.c)
 *     VfZwDuplicateObject_Entry @ 0x140C328F0 (VfZwDuplicateObject_Entry.c)
 *     VfZwDuplicateToken_Entry @ 0x140C32920 (VfZwDuplicateToken_Entry.c)
 *     VfZwFlushVirtualMemory_Entry @ 0x140C32960 (VfZwFlushVirtualMemory_Entry.c)
 *     VfZwFreeVirtualMemory_Entry @ 0x140C329B0 (VfZwFreeVirtualMemory_Entry.c)
 *     VfZwLoadKey_Entry @ 0x140C329F0 (VfZwLoadKey_Entry.c)
 *     VfZwMapViewOfSection_Entry @ 0x140C32A30 (VfZwMapViewOfSection_Entry.c)
 *     VfZwNotifyChangeKey_Entry @ 0x140C32A80 (VfZwNotifyChangeKey_Entry.c)
 *     VfZwOpenEnlistment_Entry @ 0x140C32B10 (VfZwOpenEnlistment_Entry.c)
 *     VfZwOpenFile_Entry @ 0x140C32B50 (VfZwOpenFile_Entry.c)
 *     VfZwOpenThread_Entry @ 0x140C32BA0 (VfZwOpenThread_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140C32BF0 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwOpenTransaction_Entry @ 0x140C32C40 (VfZwOpenTransaction_Entry.c)
 *     VfZwProtectVirtualMemory_Entry @ 0x140C32C90 (VfZwProtectVirtualMemory_Entry.c)
 *     VfZwQueryDirectoryFileEx_Entry @ 0x140C32CE0 (VfZwQueryDirectoryFileEx_Entry.c)
 *     VfZwQueryDirectoryFile_Entry @ 0x140C32D50 (VfZwQueryDirectoryFile_Entry.c)
 *     VfZwQueryEaFile_Entry @ 0x140C32DC0 (VfZwQueryEaFile_Entry.c)
 *     VfZwQueryFullAttributesFile_Entry @ 0x140C32E10 (VfZwQueryFullAttributesFile_Entry.c)
 *     VfZwQueryLicenseValue_Entry @ 0x140C32E50 (VfZwQueryLicenseValue_Entry.c)
 *     VfZwQuerySymbolicLinkObject_Entry @ 0x140C32EA0 (VfZwQuerySymbolicLinkObject_Entry.c)
 *     VfZwQueryValueKey_Entry @ 0x140C32EE0 (VfZwQueryValueKey_Entry.c)
 *     VfZwWriteFile_Entry @ 0x140C32F30 (VfZwWriteFile_Entry.c)
 *     VfZwRemoveIoCompletionEx_Entry @ 0x140C32FA0 (VfZwRemoveIoCompletionEx_Entry.c)
 *     VfZwReplaceKey_Entry @ 0x140C32FF0 (VfZwReplaceKey_Entry.c)
 *     VfZwSetTimer_Entry @ 0x140C33030 (VfZwSetTimer_Entry.c)
 *     VfZwSetValueKey_Entry @ 0x140C33080 (VfZwSetValueKey_Entry.c)
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
