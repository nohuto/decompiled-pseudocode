/*
 * XREFs of RtlCompareUnicodeStrings @ 0x140981100
 * Callers:
 *     EtwpAvlCompareKeyNames @ 0x1404EAEF0 (EtwpAvlCompareKeyNames.c)
 *     ApiSetpSearchForApiSet @ 0x1404EEA08 (ApiSetpSearchForApiSet.c)
 *     ApiSetpSearchForApiSetHost @ 0x1406D9520 (ApiSetpSearchForApiSetHost.c)
 *     AsiSortValueList @ 0x1406D9EA0 (AsiSortValueList.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x1406DB45C (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     IopExecuteHardwareProfileChange @ 0x1407B8550 (IopExecuteHardwareProfileChange.c)
 *     KsepCacheDeviceEqual @ 0x1407BEA50 (KsepCacheDeviceEqual.c)
 *     PopConnectToPolicyDevice @ 0x1407D746C (PopConnectToPolicyDevice.c)
 *     PopDirectedDripsUmTestDeviceCompare @ 0x1407E27F0 (PopDirectedDripsUmTestDeviceCompare.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1408226FC (WmipCheckSMBiosSysInfoString.c)
 *     sub_140838A90 @ 0x140838A90 (sub_140838A90.c)
 *     CmpLoadSystemVersionData @ 0x140855F4C (CmpLoadSystemVersionData.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1408A9D74 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     CmpFindSubKeyInRoot @ 0x1408D1B40 (CmpFindSubKeyInRoot.c)
 *     CmpCompareInIndex @ 0x1408D27E0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408D2EE0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1408D4080 (CmpDoCompareKeyName.c)
 *     CmpFindNameInListWithStatus @ 0x1408D5200 (CmpFindNameInListWithStatus.c)
 *     CmpWalkOneLevel @ 0x1408D5620 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408D7490 (CmpFindSubKeyByNameWithStatus.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14092F570 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x140980D50 (PiSwBusRelationsCompareInstancePath.c)
 *     CmpFindNameInListCellWithStatus @ 0x140980D90 (CmpFindNameInListCellWithStatus.c)
 *     PnpCheckDeviceIdsChanged @ 0x140982820 (PnpCheckDeviceIdsChanged.c)
 *     PiDevCfgConfigureDevice @ 0x1409894D0 (PiDevCfgConfigureDevice.c)
 *     SeExamineGlobalSacl @ 0x1409F8758 (SeExamineGlobalSacl.c)
 *     SepAdtStagingEvent @ 0x1409FB6F8 (SepAdtStagingEvent.c)
 *     CmpCheckRegistry2 @ 0x140A079F0 (CmpCheckRegistry2.c)
 *     PiGetServiceNameInfo @ 0x140A11DB4 (PiGetServiceNameInfo.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A47070 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A71014 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A71F50 (PiDevCfgResolveVariableExpression.c)
 *     PnpCompareMultiSz @ 0x140A7ADF8 (PnpCompareMultiSz.c)
 *     SepRmGlobalSaclFind @ 0x140A906C0 (SepRmGlobalSaclFind.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140A91DA8 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140AB4F0C (RtlpProcessIFEOKeyFilter.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140AB6258 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     MiResolveImageReferences @ 0x140ADCF50 (MiResolveImageReferences.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140AF0268 (SepCaptureTokenSecurityAttributesInformation.c)
 *     PiCompareDDBCacheEntries @ 0x140B0B000 (PiCompareDDBCacheEntries.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140B2DDF0 (_RtlpMuiRegInitLIPLanguage.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 */

LONG __stdcall RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  int v5; // r14d
  int v7; // edi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  SIZE_T v10; // r9
  SIZE_T v11; // rdx
  SIZE_T v12; // rsi
  struct _LIST_ENTRY *Flink; // r11
  const WCHAR *v14; // r10
  SIZE_T v15; // rcx
  signed __int64 v17; // rbp
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9

  v5 = String2Length;
  v7 = String1Length;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v12 = v11;
  if ( v11 > v10 )
    v12 = v10;
  Flink = CurrentServerSiloGlobals[75].Flink;
  v14 = &String1[v12];
  if ( CaseInSensitive )
  {
    v17 = (char *)String2 - (char *)String1;
    while ( String1 < v14 )
    {
      v18 = *String1;
      v19 = *(PCWCH)((char *)String1 + v17);
      if ( (_WORD)v18 != (_WORD)v19 )
      {
        if ( (unsigned int)v18 >= 0x61 )
        {
          if ( (unsigned int)v18 > 0x7A )
          {
            if ( Flink && (unsigned __int16)v18 >= 0xC0u )
              LOWORD(v18) = *((_WORD *)&Flink->Flink
                            + (v18 & 0xF)
                            + *((unsigned __int16 *)&Flink->Flink
                              + ((unsigned __int8)v18 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v18 >> 8))))
                          + v18;
          }
          else
          {
            LOWORD(v18) = v18 - 32;
          }
        }
        if ( (unsigned int)v19 >= 0x61 )
        {
          if ( (unsigned int)v19 > 0x7A )
          {
            if ( Flink )
            {
              if ( (unsigned __int16)v19 >= 0xC0u )
                LOWORD(v19) = *((_WORD *)&Flink->Flink
                              + (v19 & 0xF)
                              + *((unsigned __int16 *)&Flink->Flink
                                + ((unsigned __int8)v19 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v19 >> 8))))
                            + v19;
            }
          }
          else
          {
            LOWORD(v19) = v19 - 32;
          }
        }
        if ( (_WORD)v18 != (_WORD)v19 )
          return (unsigned __int16)v18 - (unsigned __int16)v19;
      }
      ++String1;
    }
  }
  else
  {
    v15 = RtlCompareMemory(String1, String2, 2 * v12) >> 1;
    if ( v15 < v12 )
      return String1[v15] - String2[v15];
  }
  return v7 - v5;
}
