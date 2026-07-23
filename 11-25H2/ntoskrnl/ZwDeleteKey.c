/*
 * XREFs of ZwDeleteKey @ 0x14069CCC0
 * Callers:
 *     BiZwDeleteKey @ 0x1404C1BD4 (BiZwDeleteKey.c)
 *     DifZwDeleteKeyWrapper @ 0x140632D90 (DifZwDeleteKeyWrapper.c)
 *     IopCopyBootLogRegistryToFile @ 0x140705D7C (IopCopyBootLogRegistryToFile.c)
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x140799B94 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     CmDeleteKeyRecursive @ 0x1407C2CD8 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x1407C4E54 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x1407D6E40 (CmpDoReDoRecord.c)
 *     NtEnableLastKnownGood @ 0x14081AAE0 (NtEnableLastKnownGood.c)
 *     VrpDestroyNamespaceNode @ 0x14094749C (VrpDestroyNamespaceNode.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140A68474 (_RegRtlDeleteKeyTransacted.c)
 *     ExpSetPendingUILanguage @ 0x140A6EE30 (ExpSetPendingUILanguage.c)
 *     MfgInitSystem @ 0x140BFACB0 (MfgInitSystem.c)
 *     PiLastGoodCopyKeyContents @ 0x140C12440 (PiLastGoodCopyKeyContents.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C126E0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
