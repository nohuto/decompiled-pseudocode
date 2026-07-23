/*
 * XREFs of PsGetCurrentSilo @ 0x140413410
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x14052DB88 (IoRevokeHandlesForProcess.c)
 *     PsRootSiloInformation @ 0x1407783B8 (PsRootSiloInformation.c)
 *     PsRegisterSiloMonitor @ 0x140801550 (PsRegisterSiloMonitor.c)
 *     ObGetSiloRootDirectoryPath @ 0x1408AD75C (ObGetSiloRootDirectoryPath.c)
 *     CmpParseKey @ 0x1408D19A0 (CmpParseKey.c)
 *     AlpcpCreateClientPort @ 0x1408F0020 (AlpcpCreateClientPort.c)
 *     ObReferenceObjectByNameEx @ 0x1408F238C (ObReferenceObjectByNameEx.c)
 *     ObpInsertOrLocateNamedObject @ 0x1408F50B0 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1408F8820 (ObReferenceObjectByName.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     ObOpenObjectByName @ 0x14092C800 (ObOpenObjectByName.c)
 *     CmCreateKey @ 0x140936900 (CmCreateKey.c)
 *     CmOpenKey @ 0x140937170 (CmOpenKey.c)
 *     VRegEnabledInJob @ 0x14093A35C (VRegEnabledInJob.c)
 *     CmpLinkHiveToMaster @ 0x14093E12C (CmpLinkHiveToMaster.c)
 *     IopReferenceDriverObjectByName @ 0x1409713C8 (IopReferenceDriverObjectByName.c)
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 *     IoQueryInformationByName @ 0x1409857A0 (IoQueryInformationByName.c)
 *     NtQueryFullAttributesFile @ 0x1409868B0 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x140986B10 (NtQueryAttributesFile.c)
 *     ObpCreateSymbolicLinkName @ 0x1409DE86C (ObpCreateSymbolicLinkName.c)
 *     PopGetSettingNotificationName @ 0x1409F6CE4 (PopGetSettingNotificationName.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     CmLockKeyForWrite @ 0x140A4BA6C (CmLockKeyForWrite.c)
 *     NtOpenSymbolicLinkObject @ 0x140A95620 (NtOpenSymbolicLinkObject.c)
 *     NtOpenDirectoryObject @ 0x140A9DF40 (NtOpenDirectoryObject.c)
 *     NtOpenEvent @ 0x140AA8FA0 (NtOpenEvent.c)
 *     NtOpenSection @ 0x140AA91B0 (NtOpenSection.c)
 *     NtOpenMutant @ 0x140AC7630 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x140ACA880 (NtOpenSemaphore.c)
 *     ExCreateCallback @ 0x140AFD610 (ExCreateCallback.c)
 *     NtDeleteFile @ 0x140B2A470 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140B4DF10 (IopFastQueryNetworkAttributes.c)
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
