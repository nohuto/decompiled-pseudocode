/*
 * XREFs of ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18002A22C
 * Callers:
 *     ?HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800131F8 (-HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x18002A52C (-RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     CempLockTrackerIsSetForThread @ 0x18002A6C4 (CempLockTrackerIsSetForThread.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmSrvResourceSetReleaseResources(struct _RM_SERVICE_GLOBALS *a1, unsigned __int64 a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rbx
  int v4; // r14d
  __int64 v5; // rdi
  int ObjectByHandle; // eax
  char *v7; // rsi
  int v8; // ebx
  int v9; // ebx
  unsigned __int64 v11; // [rsp+38h] [rbp-D0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v14[144]; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E8h] [rbp-20h] BYREF
  void *v16; // [rsp+F8h] [rbp-10h]
  int v17; // [rsp+100h] [rbp-8h]
  int v18; // [rsp+104h] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+108h] [rbp+0h] BYREF
  void *v20; // [rsp+118h] [rbp+10h]
  int v21; // [rsp+120h] [rbp+18h]
  int v22; // [rsp+124h] [rbp+1Ch]
  unsigned __int64 *v23; // [rsp+128h] [rbp+20h]
  __int64 v24; // [rsp+130h] [rbp+28h]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+138h] [rbp+30h]
  __int64 v26; // [rsp+140h] [rbp+38h]

  v2 = RmSvcGlobals;
  memset_0(v14, 0, 0x88uLL);
  if ( (unsigned int)CempLockTrackerIsSetForThread() )
  {
    v4 = 0;
  }
  else
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
    v4 = 1;
  }
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    v16 = &unk_1800D1C2D;
    UserData.Reserved = 2;
    v17 = 32;
    v18 = 1;
    LODWORD(v11) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v5 = 0LL;
  RmpAcquireGlobalLock();
  v11 = a2;
  P = 0LL;
  ObjectByHandle = RmpObjectTableFindObjectByHandle(
                     (struct _RM_SERVICE_GLOBALS *)((char *)v2 + 648),
                     &v11,
                     (struct _RM_OBJECT_HEADER **)&P);
  v7 = 0LL;
  if ( ObjectByHandle >= 0 )
    v7 = (char *)P;
  v8 = 0;
  if ( ObjectByHandle < 0 )
    v8 = ObjectByHandle;
  if ( v8 >= 0 )
  {
    v5 = *((_QWORD *)v7 + 6);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v8 = 0;
  }
  if ( v7 )
    RmpObjectRelease(v7);
  if ( v8 < 0 )
  {
    v9 = v8 | 0x10000000;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
    if ( v9 >= 0 )
      v9 = 0;
  }
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 9) != 0 && (qword_1800E1290 & 9) == qword_1800E1290 )
  {
    v24 = 4LL;
    p_EventDescriptor = &EventDescriptor;
    *(_QWORD *)&EventDescriptor.Id = a2;
    v23 = &v11;
    v19.Ptr = (ULONGLONG)off_1800E1280;
    LODWORD(v11) = v9;
    v26 = 8LL;
    UserData.Ptr = 0x2040B000000LL;
    *(_QWORD *)&UserData.Size = 9LL;
    v19.Size = *(unsigned __int16 *)off_1800E1280;
    v20 = &unk_1800D1C59;
    v19.Reserved = 2;
    v21 = 50;
    v22 = 1;
    LODWORD(P) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, (PCEVENT_DESCRIPTOR)&UserData, 0LL, 0LL, 4u, &v19);
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v4 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v9;
}
