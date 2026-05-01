/*
 * XREFs of RmgrSrv_RmAccessCheck @ 0x18000D7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000D5C8 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?GetCallerPID@@YAKPEAX@Z @ 0x18000DA2C (-GetCallerPID@@YAKPEAX@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmgrSrv_RmAccessCheck(void *a1, int a2, DWORD a3)
{
  unsigned int CallerPID; // edx
  struct _RM_SERVICE_GLOBALS **v6; // rbx
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  DWORD v12; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v14[144]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E0h] [rbp-20h] BYREF
  void *v16; // [rsp+F0h] [rbp-10h]
  int v17; // [rsp+F8h] [rbp-8h]
  int v18; // [rsp+FCh] [rbp-4h]
  unsigned int *v19; // [rsp+100h] [rbp+0h]
  __int64 v20; // [rsp+108h] [rbp+8h]
  DWORD *v21; // [rsp+110h] [rbp+10h]
  __int64 v22; // [rsp+118h] [rbp+18h]
  int *v23; // [rsp+120h] [rbp+20h]
  __int64 v24; // [rsp+128h] [rbp+28h]

  CallerPID = GetCallerPID(a1);
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 2) != 0 && (qword_1800E1290 & 2) == qword_1800E1290 )
  {
    v9 = CallerPID;
    v23 = &v11;
    v11 = a2;
    v21 = &v12;
    v12 = a3;
    v19 = &v9;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    v24 = 4LL;
    v22 = 4LL;
    v20 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 2LL;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    v16 = &unk_1800CB667;
    UserData.Reserved = 2;
    v17 = 66;
    v18 = 1;
    v10 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  v6 = (struct _RM_SERVICE_GLOBALS **)g_pResourceManager;
  memset_0(v14, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  RmpAcquireGlobalLock();
  v7 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v6, a2, a3, 1);
  RmpReleaseGlobalLock();
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 2) != 0 && (qword_1800E1290 & 2) == qword_1800E1290 )
  {
    v10 = v7;
    v19 = &v10;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    v20 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 2LL;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    v16 = &unk_1800CB2F5;
    UserData.Reserved = 2;
    v17 = 35;
    v18 = 1;
    v9 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return v7;
}
