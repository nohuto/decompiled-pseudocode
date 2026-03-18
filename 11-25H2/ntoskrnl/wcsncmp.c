/*
 * XREFs of wcsncmp @ 0x1404FD850
 * Callers:
 *     EtwpApplyPredicate @ 0x1403F0C80 (EtwpApplyPredicate.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1404737B4 (LdrpCompareResourceNamesWithValidation.c)
 *     HalpInsertProfileSource @ 0x140543448 (HalpInsertProfileSource.c)
 *     CarGetDriverInfoFromDriverName @ 0x140609E80 (CarGetDriverInfoFromDriverName.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140741BC8 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14074368C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopWakeSourceIsChild @ 0x1407458C0 (PopWakeSourceIsChild.c)
 *     PopWakeSourceIsParent @ 0x140745930 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x140799B94 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathClean @ 0x1407F9B9C (AslPathClean.c)
 *     AslPathCleanUstr @ 0x1407F9E0C (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x1407FA534 (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x1407FB960 (AslpPathWildcardMakeLeaves.c)
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x140827240 (PfSnAltProfileTreeCompareByScenarioId.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140891064 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PfSnPopulateReadList @ 0x1408C1D90 (PfSnPopulateReadList.c)
 *     pIoQueryBusDescription @ 0x14094CFE4 (pIoQueryBusDescription.c)
 *     WmipFindISinGEbyName @ 0x1409B87C4 (WmipFindISinGEbyName.c)
 *     PfSnPrefetchMetadata @ 0x1409C7D14 (PfSnPrefetchMetadata.c)
 *     LdrpResCompareResourceNames @ 0x1409F35FC (LdrpResCompareResourceNames.c)
 *     HalpDeviceEquals @ 0x140B65580 (HalpDeviceEquals.c)
 *     HalpFindDevice @ 0x140B65770 (HalpFindDevice.c)
 *     ExpWatchProductTypeInitialization @ 0x140C303BC (ExpWatchProductTypeInitialization.c)
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
