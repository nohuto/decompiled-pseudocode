/*
 * XREFs of ?HamSrvQueryActivityPendDiagnostics@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z @ 0x18007A724
 * Callers:
 *     HamRpcSrvQueryActivityPendDiagnostics @ 0x1800744C0 (HamRpcSrvQueryActivityPendDiagnostics.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800115D8 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180012068 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DE80 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DF14 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18004630C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWrite.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampActGetPendDurations@@YAXPEAU_HAM_ACTIVITY_START_PERFORMANCE@@PEAT_HAM_PEND_DURATIONS@@@Z @ 0x18005C20C (-HampActGetPendDurations@@YAXPEAU_HAM_ACTIVITY_START_PERFORMANCE@@PEAT_HAM_PEND_DURATIONS@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvQueryActivityPendDiagnostics(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        struct _HAM_PEND_DIAGNOSTICS *a3)
{
  unsigned int v6; // edi
  struct _HAM_ACTIVITY *v7; // rax
  struct _HAM_ACTIVITY *v8; // rbx
  struct _HAM_ACTIVITY_START_PERFORMANCE *v9; // rcx
  __int128 v10; // xmm0
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE v14[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v15; // [rsp+44h] [rbp-BCh] BYREF
  __int128 v16; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h]
  _BYTE v19[144]; // [rsp+70h] [rbp-90h] BYREF

  memset_0(v19, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CE267);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v19);
  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( HampClientIsActive(a1) )
  {
    v7 = HampActFindForClient(a1, a2);
    v8 = v7;
    if ( v7 )
    {
      HampHostAcquireLockSharedEx(*((struct _RM_HAM_ACTIVITY_HOST **)v7 + 10), 0);
      if ( *((_BYTE *)v8 + 562) == 2 )
      {
        v9 = (struct _HAM_ACTIVITY_START_PERFORMANCE *)*((_QWORD *)v8 + 66);
        LODWORD(v17) = *((unsigned __int8 *)v8 + 563);
        HampActGetPendDurations(v9, (union _HAM_PEND_DURATIONS *)((char *)&v17 + 4));
        HampHostReleaseLockSharedEx(*((struct _RM_HAM_ACTIVITY_HOST **)v8 + 10));
        v10 = v17;
        *(_OWORD *)a3 = v17;
        v16 = v10;
        *((_QWORD *)a3 + 2) = v18;
        v6 = 0;
      }
      else
      {
        v6 = -1073741436;
        HampHostReleaseLockSharedEx(*((struct _RM_HAM_ACTIVITY_HOST **)v8 + 10));
      }
      CemRcObjectDereference(v8);
    }
    else
    {
      v6 = -1073741275;
    }
  }
  else
  {
    v6 = -1073741661;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
  {
    v14[0] = v16;
    *(_QWORD *)&v16 = a2;
    v15 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      (__int64)&dword_1800E12B0,
      byte_1800CF4BB,
      v11,
      v12,
      (__int64)&v15,
      (__int64)&v16,
      (__int64)v14);
  }
  return v6;
}
