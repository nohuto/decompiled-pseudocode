/*
 * XREFs of wcsncmp @ 0x14053A620
 * Callers:
 *     LdrpCompareResourceNamesWithValidation @ 0x1404A5340 (LdrpCompareResourceNamesWithValidation.c)
 *     HalpInsertProfileSource @ 0x14058297C (HalpInsertProfileSource.c)
 *     CarGetDriverInfoFromDriverName @ 0x14064CAF0 (CarGetDriverInfoFromDriverName.c)
 *     EtwpApplyPredicate @ 0x1406CD64C (EtwpApplyPredicate.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x1407D0F30 (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopWakeSourceIsChild @ 0x1407D29E0 (PopWakeSourceIsChild.c)
 *     PopWakeSourceIsParent @ 0x1407D2A50 (PopWakeSourceIsParent.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14082D1D0 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     AslPathClean @ 0x14088F3AC (AslPathClean.c)
 *     AslPathCleanUstr @ 0x14088F614 (AslPathCleanUstr.c)
 *     AslPathWildcardFindFirst @ 0x14088FD1C (AslPathWildcardFindFirst.c)
 *     AslpPathWildcardMakeLeaves @ 0x140891148 (AslpPathWildcardMakeLeaves.c)
 *     PfSnPopulateReadList @ 0x14098A100 (PfSnPopulateReadList.c)
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x1409D2930 (PfSnAltProfileTreeCompareByScenarioId.c)
 *     WmipFindISinGEbyName @ 0x140A0A608 (WmipFindISinGEbyName.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140A4235C (PopFxInitializeSocSubsystemStaticInfo.c)
 *     pIoQueryBusDescription @ 0x140A4AF48 (pIoQueryBusDescription.c)
 *     PfSnPrefetchMetadata @ 0x140A594B8 (PfSnPrefetchMetadata.c)
 *     LdrpResCompareResourceNames @ 0x140A98B94 (LdrpResCompareResourceNames.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140ADFC40 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     HalpFindDevice @ 0x140C18214 (HalpFindDevice.c)
 *     HalpDeviceEquals @ 0x140C183C4 (HalpDeviceEquals.c)
 *     ExpWatchProductTypeInitialization @ 0x140CEB28C (ExpWatchProductTypeInitialization.c)
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
