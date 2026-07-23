/*
 * XREFs of ZwDeleteKey @ 0x140729B40
 * Callers:
 *     DifZwDeleteKeyWrapper @ 0x1406A7C50 (DifZwDeleteKeyWrapper.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079722C (IopCopyBootLogRegistryToFile.c)
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14082D1D0 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmDeleteKeyRecursive @ 0x1408577C8 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x140859990 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x140869C08 (CmpDoReDoRecord.c)
 *     NtEnableLastKnownGood @ 0x1408AD040 (NtEnableLastKnownGood.c)
 *     VrpDestroyNamespaceNode @ 0x140939B04 (VrpDestroyNamespaceNode.c)
 *     BiDeleteKey @ 0x1409A2588 (BiDeleteKey.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140A3F778 (_RegRtlDeleteKeyTransacted.c)
 *     ExpSetPendingUILanguage @ 0x140B202E0 (ExpSetPendingUILanguage.c)
 *     MfgInitSystem @ 0x140CB19A8 (MfgInitSystem.c)
 *     PiLastGoodCopyKeyContents @ 0x140CCA8EC (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140CCAB88 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
