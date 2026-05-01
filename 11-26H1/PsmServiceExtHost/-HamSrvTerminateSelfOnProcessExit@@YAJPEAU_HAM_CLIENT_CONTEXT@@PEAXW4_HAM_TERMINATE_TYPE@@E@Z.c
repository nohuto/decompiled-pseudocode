/*
 * XREFs of ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007B824
 * Callers:
 *     HamRpcSrvTerminateSelfOnRequiredProcessExit @ 0x18007C870 (HamRpcSrvTerminateSelfOnRequiredProcessExit.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4344@Z @ 0x18000241C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U1@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026B1C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18002EFB8 (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_A.c)
 *     ?HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180041CD8 (-HampHostFindByClient@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007D628 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateSelfOnProcessExit(__int64 a1, void *a2, DWORD a3, char a4)
{
  __int64 v5; // r15
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  int v8; // eax
  struct _RM_HAM_ACTIVITY_HOST *v9; // rsi
  int v10; // ebx
  void *v11; // r13
  char *v12; // rax
  int v13; // eax
  struct _RM_HAM_ACTIVITY_HOST *v14; // rdi
  char *v15; // rax
  DWORD ProcessId; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v21; // [rsp+28h] [rbp-D8h]
  DWORD v23; // [rsp+54h] [rbp-ACh] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v24; // [rsp+58h] [rbp-A8h] BYREF
  void *v25; // [rsp+60h] [rbp-A0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v26; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v27; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Process; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v29[144]; // [rsp+80h] [rbp-80h] BYREF

  v23 = a3;
  Process = a2;
  memset_0(v29, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CE438);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v29);
  v5 = -1LL;
  v26 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  v6 = -1LL;
  v7 = 0LL;
  v8 = HampHostFindByClient(a1, 0, &v24, (unsigned __int64 *)&v25);
  v9 = v24;
  v10 = v8;
  v11 = v25;
  v12 = 0LL;
  if ( v10 >= 0 )
  {
    if ( v24 )
      v12 = (char *)v24 - 56;
    v6 = *((_QWORD *)v12 + 4);
    v13 = HampHostFindByProcessHandle(
            (*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *(unsigned __int8 *)(a1 + 164) - 16,
            Process,
            0LL,
            &v26,
            &v27);
    v14 = v26;
    v10 = v13;
    v7 = v27;
    v15 = 0LL;
    if ( v10 >= 0 )
    {
      if ( v26 )
        v15 = (char *)v26 - 56;
      v5 = *((_QWORD *)v15 + 4);
      v21 = a4;
      v10 = HampDepGroupAddTerminateDependency(v9, v11, v26, v27, v23, v21);
      if ( v10 >= 0 )
        v10 = 0;
    }
    if ( v14 )
      RmHamHostDereference(v14);
  }
  if ( v9 )
    RmHamHostDereference(v9);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
  {
    v27 = v7;
    v26 = (struct _RM_HAM_ACTIVITY_HOST *)v5;
    ProcessId = GetProcessId(Process);
    Process = v11;
    v23 = ProcessId;
    v25 = (void *)v6;
    LODWORD(v24) = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v17,
      (__int64)&unk_1800CE79C,
      v18,
      v19,
      (__int64)&v24,
      (__int64)&v25,
      (__int64)&Process,
      (__int64)&v23,
      (__int64)&v26,
      (__int64)&v27);
  }
  return (unsigned int)v10;
}
