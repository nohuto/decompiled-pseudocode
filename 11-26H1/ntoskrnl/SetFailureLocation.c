/*
 * XREFs of SetFailureLocation @ 0x14048E3E4
 * Callers:
 *     CmpLoadKeyCommon @ 0x140467F14 (CmpLoadKeyCommon.c)
 *     CmpDoFileRead @ 0x14048E1D4 (CmpDoFileRead.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     CmpBuildMachineHiveCache @ 0x14085D9F4 (CmpBuildMachineHiveCache.c)
 *     CmpHiveCacheSubscribePnpNotifications @ 0x14085DBB0 (CmpHiveCacheSubscribePnpNotifications.c)
 *     CmpMachineHiveCacheClaimEntry @ 0x14085DC80 (CmpMachineHiveCacheClaimEntry.c)
 *     CmpMachineHiveCachePopulateEntry @ 0x14085DD0C (CmpMachineHiveCachePopulateEntry.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140862558 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1408632D4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvpMapHiveImage @ 0x140863984 (HvpMapHiveImage.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1408666FC (HvpBuildMapForMemoryBackedHive.c)
 *     CmpHiveCacheAcknowledgeOplockBreak @ 0x140867E80 (CmpHiveCacheAcknowledgeOplockBreak.c)
 *     CmpHiveCacheClaimHiveEntry @ 0x140867F94 (CmpHiveCacheClaimHiveEntry.c)
 *     CmpHiveCacheCreateHiveEntry @ 0x14086808C (CmpHiveCacheCreateHiveEntry.c)
 *     CmpHiveCachePnpNotificationCallback @ 0x1408683C0 (CmpHiveCachePnpNotificationCallback.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1408684F8 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140868610 (CmpHiveCachePopulateHiveEntryThread.c)
 *     CmpRequestOplockOnHiveFile @ 0x140868A28 (CmpRequestOplockOnHiveFile.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     CmpInitHiveFromFile @ 0x1408BAE88 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFiles @ 0x1408BB400 (CmpOpenHiveFiles.c)
 *     CmpOpenHiveFile @ 0x1408BB784 (CmpOpenHiveFile.c)
 *     CmpGetCompleteFileName @ 0x1408BBE90 (CmpGetCompleteFileName.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 *     CmpCheckValueList @ 0x1408DFC60 (CmpCheckValueList.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408E23B0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCells @ 0x1408E2BC0 (HvpEnlistFreeCells.c)
 *     CmpLinkHiveToMaster @ 0x14093E12C (CmpLinkHiveToMaster.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1409C9150 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckRegistry2 @ 0x140A1DAC0 (CmpCheckRegistry2.c)
 *     CmpCheckKey @ 0x140A1E430 (CmpCheckKey.c)
 *     CmpCheckLeaf @ 0x140A20814 (CmpCheckLeaf.c)
 *     HvCheckHive @ 0x140A5D6B0 (HvCheckHive.c)
 *     HvCheckBin @ 0x140A5D8F0 (HvCheckBin.c)
 *     HvpInitMap @ 0x140ABBC40 (HvpInitMap.c)
 *     HvHiveStartFileBacked @ 0x140AC430C (HvHiveStartFileBacked.c)
 *     HvLoadHive @ 0x140AC4740 (HvLoadHive.c)
 *     CmLoadKey @ 0x140ADEAD4 (CmLoadKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140ADF3F4 (CmpResolveHiveLoadConflict.c)
 *     HvpPerformLogFileRecovery @ 0x140AEE1B4 (HvpPerformLogFileRecovery.c)
 *     HvHiveStartMemoryBacked @ 0x140B4A534 (HvHiveStartMemoryBacked.c)
 *     CmCheckRegistry @ 0x140B87680 (CmCheckRegistry.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall SetFailureLocation(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // [rsp+40h] [rbp-71h] BYREF
  int v12; // [rsp+44h] [rbp-6Dh] BYREF
  int v13; // [rsp+48h] [rbp-69h] BYREF
  _DWORD v14[3]; // [rsp+4Ch] [rbp-65h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-41h] BYREF
  char *v17; // [rsp+80h] [rbp-31h]
  int v18; // [rsp+88h] [rbp-29h]
  int v19; // [rsp+8Ch] [rbp-25h]
  char *v20; // [rsp+90h] [rbp-21h]
  __int64 v21; // [rsp+98h] [rbp-19h]
  int *v22; // [rsp+A0h] [rbp-11h]
  __int64 v23; // [rsp+A8h] [rbp-9h]
  int *v24; // [rsp+B0h] [rbp-1h]
  __int64 v25; // [rsp+B8h] [rbp+7h]
  _DWORD *v26; // [rsp+C0h] [rbp+Fh]
  __int64 v27; // [rsp+C8h] [rbp+17h]

  if ( (unsigned int)dword_140E09EE8 > 5 )
  {
    v12 = a3;
    v20 = &v11;
    v13 = a4;
    v22 = &v12;
    v11 = a2;
    v24 = &v13;
    v21 = 1LL;
    v26 = v14;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_140E09EF0;
    v23 = 4LL;
    v25 = 4LL;
    v14[0] = a5;
    v27 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_140E09EF0;
    v17 = byte_140057F25;
    UserData.Reserved = 2;
    v18 = 74;
    v19 = 1;
    v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteEx(qword_140E09F08, &EventDescriptor, 0LL, 0, 0LL, 0LL, 6u, &UserData);
  }
  if ( a1 )
  {
    if ( a2 )
    {
      v10 = *(unsigned __int16 *)(a1 + 10);
      if ( (unsigned int)v10 < 8 )
      {
        *(_DWORD *)(a1 + 12 * (v10 + 9)) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int16 *)(a1 + 10) + 112) = a4;
        *(_DWORD *)(a1 + 12LL * (unsigned __int16)(*(_WORD *)(a1 + 10))++ + 116) = a5;
      }
    }
    else
    {
      v9 = *(unsigned __int16 *)(a1 + 8);
      if ( (unsigned int)v9 < 8 )
      {
        *(_DWORD *)(a1 + 12 * (v9 + 1)) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int16 *)(a1 + 8) + 16) = a4;
        *(_DWORD *)(a1 + 12LL * (unsigned __int16)(*(_WORD *)(a1 + 8))++ + 20) = a5;
      }
    }
  }
}
