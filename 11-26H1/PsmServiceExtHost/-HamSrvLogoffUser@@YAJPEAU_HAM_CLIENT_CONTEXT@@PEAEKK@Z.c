/*
 * XREFs of ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x18007A570
 * Callers:
 *     HamRpcSrvSessionStateLogoffUser @ 0x18007C7C0 (HamRpcSrvSessionStateLogoffUser.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x180001F6C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSid@U_SID@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z @ 0x180037D28 (-HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z.c)
 *     ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180037E08 (-HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     CempUtilValidateAndCaptureSid @ 0x18006E2D8 (CempUtilValidateAndCaptureSid.c)
 *     ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007F2AC (-HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvLogoffUser(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned int a4)
{
  NTSTATUS v8; // ebx
  struct _HAM_SESSION *v9; // rax
  struct _HAM_SESSION *v10; // rbx
  struct _HAM_USER *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+40h] [rbp-128h] BYREF
  NTSTATUS v17; // [rsp+44h] [rbp-124h] BYREF
  unsigned __int8 *v18; // [rsp+48h] [rbp-120h] BYREF
  _BYTE v19[80]; // [rsp+50h] [rbp-118h] BYREF
  _BYTE v20[144]; // [rsp+A0h] [rbp-C8h] BYREF

  memset_0(v20, 0, 0x88uLL);
  memset_0(v19, 0, 0x44uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CE89D);
  v8 = CempUtilValidateAndCaptureSid(a2, a3, v19);
  if ( v8 >= 0 )
  {
    v9 = HampSessionFindInManager(
           (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL)
                                           - 48LL * *((unsigned __int8 *)a1 + 164)
                                           - 16),
           *((_DWORD *)a1 + 42));
    v10 = v9;
    if ( v9 && (v11 = HampUserFindInSession(v9, (union _RM_SID *)v19), CemRcObjectDereference(v10), v11) )
    {
      v8 = HampUserLogoff(v11, a1, a4);
      if ( v8 >= 0 )
        v8 = 0;
      CemRcObjectDereference(v11);
    }
    else
    {
      v8 = -1058275321;
    }
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
  {
    v16 = *((_DWORD *)a1 + 42);
    v18 = a2;
    v17 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>>(
      v12,
      (__int64)&unk_1800CE467,
      v13,
      v14,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v18);
  }
  return (unsigned int)v8;
}
