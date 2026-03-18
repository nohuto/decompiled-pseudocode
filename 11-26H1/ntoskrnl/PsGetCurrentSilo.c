/*
 * XREFs of PsGetCurrentSilo @ 0x14041BBC0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x14052B668 (IoRevokeHandlesForProcess.c)
 *     PsRootSiloInformation @ 0x1407753B8 (PsRootSiloInformation.c)
 *     PsRegisterSiloMonitor @ 0x1407FBB20 (PsRegisterSiloMonitor.c)
 *     ObGetSiloRootDirectoryPath @ 0x1408A72EC (ObGetSiloRootDirectoryPath.c)
 *     CmpParseKey @ 0x1408CB3F0 (CmpParseKey.c)
 *     AlpcpCreateClientPort @ 0x1408E9A60 (AlpcpCreateClientPort.c)
 *     ObReferenceObjectByNameEx @ 0x1408EBDCC (ObReferenceObjectByNameEx.c)
 *     ObpInsertOrLocateNamedObject @ 0x1408EEAF0 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1408F2260 (ObReferenceObjectByName.c)
 *     ObOpenObjectByName @ 0x1408FC870 (ObOpenObjectByName.c)
 *     IopReferenceDriverObjectByName @ 0x14091695C (IopReferenceDriverObjectByName.c)
 *     CmCreateKey @ 0x1409748F0 (CmCreateKey.c)
 *     CmOpenKey @ 0x140975160 (CmOpenKey.c)
 *     VRegEnabledInJob @ 0x14097834C (VRegEnabledInJob.c)
 *     CmpLinkHiveToMaster @ 0x14097C11C (CmpLinkHiveToMaster.c)
 *     IopCreateFile @ 0x1409B3A58 (IopCreateFile.c)
 *     IoQueryInformationByName @ 0x1409B46E0 (IoQueryInformationByName.c)
 *     NtQueryFullAttributesFile @ 0x1409B57F0 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x1409B5A50 (NtQueryAttributesFile.c)
 *     ObpCreateSymbolicLinkName @ 0x1409E185C (ObpCreateSymbolicLinkName.c)
 *     ObQueryNameStringMode @ 0x1409FDA40 (ObQueryNameStringMode.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     CmLockKeyForWrite @ 0x140A30B0C (CmLockKeyForWrite.c)
 *     PopGetSettingNotificationName @ 0x140A3B2C4 (PopGetSettingNotificationName.c)
 *     NtOpenSymbolicLinkObject @ 0x140A90AD0 (NtOpenSymbolicLinkObject.c)
 *     NtOpenDirectoryObject @ 0x140A99DC0 (NtOpenDirectoryObject.c)
 *     NtOpenEvent @ 0x140AAB9F0 (NtOpenEvent.c)
 *     NtOpenSection @ 0x140AABC00 (NtOpenSection.c)
 *     NtOpenMutant @ 0x140AC59C0 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x140AC8C90 (NtOpenSemaphore.c)
 *     ExCreateCallback @ 0x140AFB990 (ExCreateCallback.c)
 *     NtDeleteFile @ 0x140B28140 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140B4C180 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *PsGetCurrentSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
    return CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  for ( result = (struct _LIST_ENTRY *)CurrentThread->Process[1].Padding[3]; result; result = result[81].Blink )
  {
    if ( ((__int64)result[97].Flink & 0x40000000) != 0 )
      break;
  }
  return result;
}
