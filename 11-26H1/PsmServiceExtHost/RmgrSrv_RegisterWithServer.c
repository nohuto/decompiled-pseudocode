/*
 * XREFs of RmgrSrv_RegisterWithServer @ 0x180031310
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002FF30 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x1800314AC (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 *     CempRpcQueryClientInformation @ 0x1800318A4 (CempRpcQueryClientInformation.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmgrSrv_RegisterWithServer(
        RPC_BINDING_HANDLE ClientBinding,
        union _LARGE_INTEGER *a2,
        union _LARGE_INTEGER *a3)
{
  ExecutionModel::ResourceManager *v6; // rcx
  NTSTATUS ClientInformation; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  signed int v14; // eax
  unsigned int v15[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[144]; // [rsp+90h] [rbp-70h] BYREF

  memset_0(DestinationSid, 0, 0x44uLL);
  v15[0] = 0;
  memset_0(v17, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  ClientInformation = CempRpcQueryClientInformation(ClientBinding, DestinationSid, 0LL, 0LL, 0LL);
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 2) != 0 )
  {
    v6 = (ExecutionModel::ResourceManager *)(qword_1800E1290 & 2);
    if ( v6 == (ExecutionModel::ResourceManager *)qword_1800E1290 )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (__int64)&dword_1800E1278,
        byte_1800CB5A7,
        v8,
        v9,
        (__int64)v15);
  }
  if ( ClientInformation < 0 )
  {
    v14 = RtlNtStatusToDosError(ClientInformation);
    v10 = v14;
    if ( v14 > 0 )
      v10 = (unsigned __int16)v14 | 0x80070000;
  }
  else
  {
    v10 = ExecutionModel::ResourceManager::RegisterCommitMemoryWnfStates(v6, 0, DestinationSid, a2, a3);
  }
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 2) != 0 && (qword_1800E1290 & 2) == qword_1800E1290 )
  {
    v15[0] = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)&dword_1800E1278,
      byte_1800CB381,
      v11,
      v12,
      (__int64)v15);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return v10;
}
