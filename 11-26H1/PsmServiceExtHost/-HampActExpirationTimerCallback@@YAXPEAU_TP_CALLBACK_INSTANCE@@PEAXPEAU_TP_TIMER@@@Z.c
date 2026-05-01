/*
 * XREFs of ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18007CAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015AF4 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18004028C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180063B20 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18007CC58 (-HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActVerify@@YA?AW4_HAM_ACTIVITY_VERIFY_STATUS@@PEAU_HAM_ACTIVITY@@K@Z @ 0x18007D0A8 (-HampActVerify@@YA-AW4_HAM_ACTIVITY_VERIFY_STATUS@@PEAU_HAM_ACTIVITY@@K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HampActExpirationTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_HAM_ACTIVITY_HOST **a2,
        struct _TP_TIMER *a3)
{
  struct _HAM_DEPENDENCY_GROUP *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  struct _RM_HAM_ACTIVITY_HOST *v8; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v9[144]; // [rsp+40h] [rbp-A8h] BYREF

  memset_0(v9, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v9);
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CFF74);
  HampHostAcquireLockExclusiveEx(a2[10], 0);
  HampActVerify(a2);
  if ( a2[67] == a3 )
  {
    a2[67] = 0LL;
    a2[68] = 0LL;
    HampActMarkExpired((struct _HAM_ACTIVITY *)a2);
    HampHostUpdateActivityState(a2[10]);
  }
  else
  {
    a3 = 0LL;
  }
  HampActVerify(a2);
  if ( a3 )
    v5 = HampHostCheckEnterDependencyWorker(a2[10]);
  else
    v5 = 0LL;
  HampHostReleaseLockExclusive(a2[10]);
  CemRcObjectDereference(a2);
  if ( v5 )
    HampDepGroupRunStateChangeWorker(v5);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( a3 )
    TpReleaseTimer(a3);
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 64LL) )
  {
    v8 = a2[5];
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (__int64)&dword_1800E12B0,
      byte_1800CFF38,
      v6,
      v7,
      (__int64)&v8);
  }
}
