/*
 * XREFs of ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x1800818EC
 * Callers:
 *     RmgrSrv_RmAvailabilityCheck @ 0x180074960 (RmgrSrv_RmAvailabilityCheck.c)
 * Callees:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000D5C8 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x18002E8C4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002F224 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180057990 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAU_RM_HAM_ACTIVITY_HOST@@PEA_N@Z @ 0x1800893BC (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAvailabilityCheck(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  ExecutionModel::ResourceManager *v5; // r15
  int v8; // edi
  struct _RM_HAM_ACTIVITY_HOST *v9; // rsi
  int v10; // ebx
  NTSTATUS v11; // ebx
  __int64 v12; // rcx
  __int64 i; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE v18[4]; // [rsp+40h] [rbp-A1h] BYREF
  int v19; // [rsp+44h] [rbp-9Dh] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v20; // [rsp+48h] [rbp-99h] BYREF
  unsigned int v21; // [rsp+50h] [rbp-91h] BYREF
  unsigned int v22; // [rsp+54h] [rbp-8Dh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-89h] BYREF
  _BYTE v24[144]; // [rsp+60h] [rbp-81h] BYREF

  v5 = g_pResourceManager;
  v19 = a4;
  v18[0] = 0;
  v8 = a4;
  memset_0(v24, 0, 0x88uLL);
  v9 = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  if ( a3 )
  {
    v11 = RmpSystemOpenProcess(&Handle, 0x1000u, a5);
    if ( v11 >= 0 )
    {
      RmHamFindHostByProcessHandle(*((_QWORD *)v5 + 16) + 2360LL, Handle, 0, &v20);
      RmpAcquireGlobalLock();
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v9 = v20;
        if ( (unsigned int)i >= a2 )
          break;
        v10 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(
                (struct _RM_SERVICE_GLOBALS **)v5,
                *(_DWORD *)(a3 + 24 * i),
                a5,
                1);
        if ( v10 < 0 )
        {
          v8 = v19;
          goto LABEL_14;
        }
      }
      v8 = v19;
      v10 = ExecutionModel::ExternalResourceSet::AvailabilityCheck(v12, *((_QWORD *)v5 + 3), a2, a3, v19, a5, v20, v18);
      if ( v10 >= 0 && !v18[0] )
        v10 = -2147467259;
LABEL_14:
      RmpReleaseGlobalLock();
    }
    else
    {
      v10 = v11 | 0x10000000;
    }
  }
  else
  {
    v10 = -2147024882;
  }
  if ( Handle )
    NtClose(Handle);
  if ( v9 )
    RmHamHostDereference(v9);
  if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 1LL) )
  {
    v19 = v8;
    v21 = a2;
    v22 = a5;
    LODWORD(v20) = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v14,
      byte_1800D1210,
      v15,
      v16,
      (__int64)&v20,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v19);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v10;
}
