/*
 * XREFs of SetFailureLocation @ 0x140494894
 * Callers:
 *     CmpLoadKeyCommon @ 0x14046E794 (CmpLoadKeyCommon.c)
 *     CmpDoFileRead @ 0x140494684 (CmpDoFileRead.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14084C298 (CmpMountPreloadedHives.c)
 *     CmpBuildMachineHiveCache @ 0x140857664 (CmpBuildMachineHiveCache.c)
 *     CmpHiveCacheSubscribePnpNotifications @ 0x140857820 (CmpHiveCacheSubscribePnpNotifications.c)
 *     CmpMachineHiveCacheClaimEntry @ 0x1408578F0 (CmpMachineHiveCacheClaimEntry.c)
 *     CmpMachineHiveCachePopulateEntry @ 0x14085797C (CmpMachineHiveCachePopulateEntry.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x14085C268 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x14085CFE4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     HvpMapHiveImage @ 0x14085D694 (HvpMapHiveImage.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x14086040C (HvpBuildMapForMemoryBackedHive.c)
 *     CmpHiveCacheAcknowledgeOplockBreak @ 0x140861AA0 (CmpHiveCacheAcknowledgeOplockBreak.c)
 *     CmpHiveCacheClaimHiveEntry @ 0x140861BB4 (CmpHiveCacheClaimHiveEntry.c)
 *     CmpHiveCacheCreateHiveEntry @ 0x140861CAC (CmpHiveCacheCreateHiveEntry.c)
 *     CmpHiveCachePnpNotificationCallback @ 0x140861FE0 (CmpHiveCachePnpNotificationCallback.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x140862118 (CmpHiveCachePopulateHiveEntry.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140862230 (CmpHiveCachePopulateHiveEntryThread.c)
 *     CmpRequestOplockOnHiveFile @ 0x140862648 (CmpRequestOplockOnHiveFile.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 *     CmpInitHiveFromFile @ 0x1408B48B4 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFiles @ 0x1408B4E2C (CmpOpenHiveFiles.c)
 *     CmpOpenHiveFile @ 0x1408B51B0 (CmpOpenHiveFile.c)
 *     CmpGetCompleteFileName @ 0x1408B58BC (CmpGetCompleteFileName.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 *     CmpCheckValueList @ 0x1408D96A0 (CmpCheckValueList.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408DBDF0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistFreeCells @ 0x1408DC600 (HvpEnlistFreeCells.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14094D7E0 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpLinkHiveToMaster @ 0x14097C11C (CmpLinkHiveToMaster.c)
 *     CmpCheckRegistry2 @ 0x140A079F0 (CmpCheckRegistry2.c)
 *     CmpCheckKey @ 0x140A08360 (CmpCheckKey.c)
 *     CmpCheckLeaf @ 0x140A0A744 (CmpCheckLeaf.c)
 *     HvCheckHive @ 0x140A543C0 (HvCheckHive.c)
 *     HvCheckBin @ 0x140A54600 (HvCheckBin.c)
 *     HvpInitMap @ 0x140ABA780 (HvpInitMap.c)
 *     HvHiveStartFileBacked @ 0x140AC226C (HvHiveStartFileBacked.c)
 *     HvLoadHive @ 0x140AC26A0 (HvLoadHive.c)
 *     CmLoadKey @ 0x140AE15E4 (CmLoadKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140AE1F04 (CmpResolveHiveLoadConflict.c)
 *     HvpPerformLogFileRecovery @ 0x140AEB2A8 (HvpPerformLogFileRecovery.c)
 *     HvHiveStartMemoryBacked @ 0x140B487A4 (HvHiveStartMemoryBacked.c)
 *     CmCheckRegistry @ 0x140B7E7A0 (CmCheckRegistry.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
  int *v17; // [rsp+80h] [rbp-31h]
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
    v17 = &dword_140056F32;
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
