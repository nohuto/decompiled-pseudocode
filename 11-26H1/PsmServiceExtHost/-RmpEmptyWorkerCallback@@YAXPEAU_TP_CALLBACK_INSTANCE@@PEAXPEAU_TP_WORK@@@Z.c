/*
 * XREFs of ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180044B40
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180045630 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall RmpEmptyWorkerCallback(struct _TP_CALLBACK_INSTANCE *a1, unsigned int *a2, struct _TP_WORK *a3)
{
  __int64 v4; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v6; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v7[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v9; // [rsp+100h] [rbp+0h]
  int v10; // [rsp+108h] [rbp+8h]
  int v11; // [rsp+10Ch] [rbp+Ch]
  __int64 *v12; // [rsp+110h] [rbp+10h]
  __int64 v13; // [rsp+118h] [rbp+18h]
  __int64 *v14; // [rsp+120h] [rbp+20h]
  __int64 v15; // [rsp+128h] [rbp+28h]

  memset_0(v7, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v7);
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 0x11) != 0 && (qword_1800E1290 & 0x11) == qword_1800E1290 )
  {
    v6 = a2[332];
    v4 = *((_QWORD *)a2 + 4);
    v14 = &v6;
    v12 = &v4;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    v15 = 8LL;
    v13 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 17LL;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    v9 = &unk_1800D2349;
    UserData.Reserved = 2;
    v10 = 39;
    v11 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  RmHamHostActOnProcesses(
    (struct _RM_ACTIVITY_HOST *)a2,
    0x3000u,
    1u,
    (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpEnforcementEmptyProcess,
    (void *)a2[332]);
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 0x11) != 0 && (qword_1800E1290 & 0x11) == qword_1800E1290 )
  {
    v4 = *((_QWORD *)a2 + 4);
    v13 = 8LL;
    v12 = &v4;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 17LL;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    v9 = &unk_1800D23F1;
    UserData.Reserved = 2;
    v10 = 30;
    v11 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  NtSetEvent(*((HANDLE *)a2 + 165), 0LL);
  RmpObjectRelease((char *)a2);
  CempLockTrackerClearForThread(HampLockTrackerId);
}
