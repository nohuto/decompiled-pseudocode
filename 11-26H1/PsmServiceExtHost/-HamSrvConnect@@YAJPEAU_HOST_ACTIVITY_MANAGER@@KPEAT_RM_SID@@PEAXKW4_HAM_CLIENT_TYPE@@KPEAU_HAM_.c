/*
 * XREFs of ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180030D78
 * Callers:
 *     HamRpcSrvConnectServicing @ 0x18002FE00 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectExtendedExecution @ 0x180030000 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvConnect @ 0x180030F90 (HamRpcSrvConnect.c)
 *     HamRpcSrvConnectSessionState @ 0x180064EB0 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x180065710 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectDebugging @ 0x1800658A0 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectFullTrust @ 0x18007C5F0 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180017318 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@33@Z @ 0x180061C0C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@_ea_180061C0C.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18006EE08 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvConnect(
        __int64 a1,
        unsigned int a2,
        void *a3,
        void *a4,
        int a5,
        unsigned __int8 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        unsigned int **a10,
        struct _HAM_CLIENT_CONTEXT **a11)
{
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r15
  unsigned int *v14; // r14
  int v15; // r12d
  unsigned int v16; // ecx
  bool v17; // zf
  unsigned int v18; // ecx
  int v19; // ebx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  unsigned __int8 v24[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v25; // [rsp+64h] [rbp-9Ch] BYREF
  void *v26; // [rsp+68h] [rbp-98h] BYREF
  void *v27; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v28; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v29[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v30[144]; // [rsp+90h] [rbp-70h] BYREF

  v26 = a3;
  v25 = a2;
  v28 = (_DWORD *)a1;
  v27 = a4;
  memset_0(v30, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CF621);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v30);
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( a6 )
  {
    if ( a10 )
    {
      if ( a6 == 6 )
      {
        v18 = **a10;
        if ( v18 >= 0x20 || (v18 & 0x11) == 0x11 )
          goto LABEL_14;
      }
    }
    v16 = a7;
    v17 = a7 == 0;
  }
  else
  {
    v14 = *a10;
    if ( *a10 && (int)RtlStringCchLengthW((const unsigned __int16 *)*a10, v12, v29) < 0 )
      goto LABEL_14;
    v16 = a7;
    v17 = (a7 & 1) == a7;
  }
  if ( !v17 )
  {
LABEL_14:
    v19 = -1073741583;
    goto LABEL_19;
  }
  v19 = HampClientCreate((__int64)v28, a2, v26, v27, a5, a6, v16, 0LL, 0LL, (const unsigned __int16 **)a10, a11);
  if ( v19 >= 0 )
  {
    if ( !a6 )
      v15 = *((_DWORD *)a10 + 4);
    v19 = 0;
    v13 = *((_QWORD *)*a11 + 19);
  }
LABEL_19:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 8LL) )
  {
    LODWORD(v26) = v19;
    LODWORD(v27) = v15;
    v28 = v14;
    v29[0] = v13;
    v24[0] = a6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v20,
      (unsigned int)&unk_1800CE37E,
      v21,
      v22,
      (__int64)&v25,
      (__int64)v24,
      (__int64)v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26);
  }
  return (unsigned int)v19;
}
