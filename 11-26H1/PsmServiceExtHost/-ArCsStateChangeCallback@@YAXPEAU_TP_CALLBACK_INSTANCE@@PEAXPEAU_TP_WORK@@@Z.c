/*
 * XREFs of ?ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180067CC0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180014CE4 (-ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180014D3C (-ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180014F54 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180067DD4 (-ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall ArCsStateChangeCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _ACTIVITY_RESTARTER *a2,
        struct _TP_WORK *a3)
{
  unsigned int v4; // ebx
  int v5; // ebx
  _BYTE v6[144]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(v6, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 0x40) != 0 && (qword_1800E12C8 & 0x40) == qword_1800E12C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CB8DA);
  ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v6);
  while ( 1 )
  {
    ArManagerAcquireLockExclusive(a2);
    v5 = *((_DWORD *)a2 + 18);
    if ( (v5 & 2) == 0 )
      break;
    v4 = v5 & 0xFFFFFFFD;
    *((_DWORD *)a2 + 18) = v4;
    ArManagerReleaseLockExclusive(a2);
    if ( (v4 & 1) == 0 )
      ArManagerRestartActivitiesForPhase(a2);
  }
  *((_DWORD *)a2 + 18) = v5 & 0xFFFFFFFB;
  ArManagerReleaseLockExclusive(a2);
  if ( (unsigned int)dword_1800E12B0 > 4 && tlgKeywordOn((__int64)&dword_1800E12B0, 8LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E12B0,
      byte_1800CB7C5);
  CempLockTrackerClearForThread(ArLockTrackerId);
}
