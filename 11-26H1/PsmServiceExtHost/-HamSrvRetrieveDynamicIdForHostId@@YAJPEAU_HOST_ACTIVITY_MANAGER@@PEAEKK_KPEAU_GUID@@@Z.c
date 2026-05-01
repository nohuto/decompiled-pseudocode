/*
 * XREFs of ?HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z @ 0x1800434B4
 * Callers:
 *     HamRpcSrvRetrieveDynamicIdForHostId @ 0x180043C70 (HamRpcSrvRetrieveDynamicIdForHostId.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800353F4 (-HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800367A0 (-HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180036A5C (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HamRcNodeFindChild@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@PEAXP6AJ11@Z@Z @ 0x180036BD0 (-HamRcNodeFindChild@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@PEAXP6AJ11@Z@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18003BC30 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CempUtilValidateSid @ 0x18003DBEC (CempUtilValidateSid.c)
 *     ?HampHostIdStoreRetrieveDynamicIdCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z @ 0x180043768 (-HampHostIdStoreRetrieveDynamicIdCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1800437C4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_tlgWra.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvRetrieveDynamicIdForHostId(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        int a4,
        unsigned __int64 a5,
        struct _GUID *a6)
{
  int v9; // r15d
  unsigned int v10; // ebx
  struct _HAM_HOSTID_STORE *v11; // r15
  char *v12; // r12
  struct _HAM_RC_TREE_NODE *v13; // rcx
  struct _HAM_RC_TREE_NODE *i; // rdi
  struct _HAM_RC_TREE_NODE *Child; // rax
  struct _HAM_RC_TREE_NODE *v16; // r14
  struct _HAM_RC_TREE_NODE *v17; // rax
  struct _HAM_RC_TREE_NODE *v18; // rsi
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v23; // rcx
  void *v24; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID *v25; // [rsp+58h] [rbp-A8h] BYREF
  struct _GUID *v26; // [rsp+60h] [rbp-A0h] BYREF
  char *v27; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v29[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v30; // [rsp+88h] [rbp-78h]
  struct _GUID v31; // [rsp+90h] [rbp-70h] BYREF
  _BYTE DestinationSid[80]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v33[144]; // [rsp+F0h] [rbp-10h] BYREF

  LODWORD(v24) = a4;
  v25 = a6;
  v9 = a4;
  memset_0(DestinationSid, 0, 0x44uLL);
  memset_0(v33, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v33);
  v10 = 0;
  if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v23,
      byte_1800CF5F9);
  v31 = 0LL;
  if ( (int)CempUtilValidateSid(a2, a3) < 0 || RtlCopySid(0x44u, DestinationSid, a2) < 0 )
  {
    v10 = -1073741585;
    v12 = (char *)a1 + 1108;
  }
  else
  {
    v30 = 0LL;
    v11 = (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 792);
    v29[0] = a5;
    v29[1] = &v31;
    v12 = DestinationSid;
    HampHostIdStoreAcquireLockShared((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 792));
    v13 = (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 808);
    i = 0LL;
    Child = HamRcNodeFindChild(
              v13,
              (void *)(unsigned int)v24,
              (__int64 (__fastcall *)(void *, __int64))HampHostIdStoreCompareSessionByKey);
    v16 = Child;
    if ( Child )
    {
      v17 = HamRcNodeFindChild(
              Child,
              DestinationSid,
              (__int64 (__fastcall *)(void *, __int64))HampHostIdStoreCompareUserByKey);
      v18 = v17;
      if ( v17 )
      {
        for ( i = HamRcNodeGetFirst(v17, 2); i; i = HamRcNodeGetSuccessor(v18, i) )
        {
          if ( !HampHostIdStoreRetrieveDynamicIdCallback(i, v29) )
            break;
        }
      }
      CemRcObjectDereference(v16);
      if ( v18 )
        CemRcObjectDereference(v18);
      if ( i )
        CemRcObjectDereference(i);
    }
    HampHostIdStoreReleaseLockShared(v11);
    v9 = (int)v24;
    if ( (_DWORD)v30 )
      *v25 = v31;
    else
      v10 = -1073741275;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    LODWORD(v24) = v9;
    v26 = &v31;
    v27 = v12;
    v28 = a5;
    LODWORD(v25) = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v19,
      (unsigned int)&unk_1800CE696,
      v20,
      v21,
      (__int64)&v25,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v24,
      (__int64)&v26);
  }
  return v10;
}
