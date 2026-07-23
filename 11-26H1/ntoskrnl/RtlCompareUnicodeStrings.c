/*
 * XREFs of RtlCompareUnicodeStrings @ 0x140943110
 * Callers:
 *     EtwpAvlCompareKeyNames @ 0x1404E42A0 (EtwpAvlCompareKeyNames.c)
 *     ApiSetpSearchForApiSet @ 0x1404E7FE8 (ApiSetpSearchForApiSet.c)
 *     ApiSetpSearchForApiSetHost @ 0x1406DD6B0 (ApiSetpSearchForApiSetHost.c)
 *     AsiSortValueList @ 0x1406DE030 (AsiSortValueList.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x1406DF6F4 (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     IopExecuteHardwareProfileChange @ 0x1407BB5B0 (IopExecuteHardwareProfileChange.c)
 *     KsepCacheDeviceEqual @ 0x1407C1AB0 (KsepCacheDeviceEqual.c)
 *     PopConnectToPolicyDevice @ 0x1407DAA8C (PopConnectToPolicyDevice.c)
 *     PopDirectedDripsUmTestDeviceCompare @ 0x1407E7880 (PopDirectedDripsUmTestDeviceCompare.c)
 *     WmipCheckSMBiosSysInfoString @ 0x14082890C (WmipCheckSMBiosSysInfoString.c)
 *     sub_14083ECD0 @ 0x14083ECD0 (sub_14083ECD0.c)
 *     CmpLoadSystemVersionData @ 0x14085C2E4 (CmpLoadSystemVersionData.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1408B01E4 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     CmpFindSubKeyInRoot @ 0x1408D8100 (CmpFindSubKeyInRoot.c)
 *     CmpCompareInIndex @ 0x1408D8DA0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408D94A0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1408DA640 (CmpDoCompareKeyName.c)
 *     CmpFindNameInListWithStatus @ 0x1408DB7C0 (CmpFindNameInListWithStatus.c)
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1408DDA50 (CmpFindSubKeyByNameWithStatus.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtStagingEvent @ 0x1409202F8 (SepAdtStagingEvent.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x140942D60 (PiSwBusRelationsCompareInstancePath.c)
 *     CmpFindNameInListCellWithStatus @ 0x140942DA0 (CmpFindNameInListCellWithStatus.c)
 *     PnpCheckDeviceIdsChanged @ 0x140944830 (PnpCheckDeviceIdsChanged.c)
 *     MiResolveImageReferences @ 0x14097E950 (MiResolveImageReferences.c)
 *     PiGetServiceNameInfo @ 0x140A10FA4 (PiGetServiceNameInfo.c)
 *     CmpCheckRegistry2 @ 0x140A1DAC0 (CmpCheckRegistry2.c)
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140A46B84 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A48420 (PiDevCfgResolveVariableExpression.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A50360 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     SeExamineGlobalSacl @ 0x140A61298 (SeExamineGlobalSacl.c)
 *     PnpCompareMultiSz @ 0x140A8BF3C (PnpCompareMultiSz.c)
 *     SepRmGlobalSaclFind @ 0x140A95210 (SepRmGlobalSaclFind.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140A968F8 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140AB62AC (RtlpProcessIFEOKeyFilter.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140AB75F8 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140AF2E38 (SepCaptureTokenSecurityAttributesInformation.c)
 *     PiCompareDDBCacheEntries @ 0x140B0C750 (PiCompareDDBCacheEntries.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140B2FE70 (_RtlpMuiRegInitLIPLanguage.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
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
