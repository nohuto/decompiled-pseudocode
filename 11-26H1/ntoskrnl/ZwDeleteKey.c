/*
 * XREFs of ZwDeleteKey @ 0x140724F70
 * Callers:
 *     DifZwDeleteKeyWrapper @ 0x1406A4070 (DifZwDeleteKeyWrapper.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407946FC (IopCopyBootLogRegistryToFile.c)
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x140826F90 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmDeleteKeyRecursive @ 0x1408514B8 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x140853680 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x140863828 (CmpDoReDoRecord.c)
 *     NtEnableLastKnownGood @ 0x1408A6BD0 (NtEnableLastKnownGood.c)
 *     VrpDestroyNamespaceNode @ 0x140977AF4 (VrpDestroyNamespaceNode.c)
 *     BiDeleteKey @ 0x1409D15A8 (BiDeleteKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140A2DD6C (_RegRtlDeleteKeyTransacted.c)
 *     ExpSetPendingUILanguage @ 0x140B1E260 (ExpSetPendingUILanguage.c)
 *     MfgInitSystem @ 0x140CAB968 (MfgInitSystem.c)
 *     PiLastGoodCopyKeyContents @ 0x140CC480C (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140CC4AA8 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, v1);
}
