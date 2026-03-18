/*
 * XREFs of wcsncmp @ 0x1405381A0
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x1404ABCB0 (LdrpCompareResourceNamesWithValidation.c)
 *     HalpInsertProfileSource @ 0x14058045C (HalpInsertProfileSource.c)
 *     CarGetDriverInfoFromDriverName @ 0x140648F10 (CarGetDriverInfoFromDriverName.c)
 *     EtwpApplyPredicate @ 0x1406C966C (EtwpApplyPredicate.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1407CDE90 (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopWakeSourceIsChild @ 0x1407CF940 (PopWakeSourceIsChild.c)
 *     PopWakeSourceIsParent @ 0x1407CF9B0 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x140826F90 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathClean @ 0x140888FB0 (AslPathClean.c)
 *     AslPathCleanUstr @ 0x140889218 (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x140889920 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x14088AD4C (AslpPathWildcardMakeLeaves.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140987604 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PfSnPopulateReadList @ 0x1409B9120 (PfSnPopulateReadList.c)
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x1409EA1EC (PfSnAltProfileTreeCompareByScenarioId.c)
 *     WmipFindISinGEbyName @ 0x140A0B3A0 (WmipFindISinGEbyName.c)
 *     PfSnPrefetchMetadata @ 0x140A501C8 (PfSnPrefetchMetadata.c)
 *     pIoQueryBusDescription @ 0x140A744A8 (pIoQueryBusDescription.c)
 *     LdrpResCompareResourceNames @ 0x140A94044 (LdrpResCompareResourceNames.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140ACFC14 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     HalpFindDevice @ 0x140C12214 (HalpFindDevice.c)
 *     HalpDeviceEquals @ 0x140C123C4 (HalpDeviceEquals.c)
 *     ExpWatchProductTypeInitialization @ 0x140CE4EEC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  if ( !MaxCount )
    return 0;
  while ( --MaxCount && *Str1 && *Str1 == *Str2 )
  {
    ++Str1;
    ++Str2;
  }
  return *Str1 - *Str2;
}
