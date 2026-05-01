/*
 * XREFs of ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800446D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180006C30 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     CempListEntryRemoveAndClear @ 0x180013890 (CempListEntryRemoveAndClear.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180014FC0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180043B08 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x1800449A0 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180046FB4 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18006C548 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall RmpOfferLazyDecommitWorkerCallback(struct _TP_CALLBACK_INSTANCE *a1, _QWORD *a2, struct _TP_WORK *a3)
{
  unsigned __int64 v4; // rsi
  int v5; // r15d
  _QWORD **v6; // r13
  __int64 v7; // rbx
  _DWORD *v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  bool v11; // cc
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v19[64]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-50h]
  __int128 v21; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-30h]
  _BYTE v23[144]; // [rsp+E0h] [rbp-20h] BYREF

  memset_0(v23, 0, 0x88uLL);
  memset_0(v19, 0, 0x50uLL);
  v21 = 0LL;
  v22 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v23);
  if ( (unsigned int)dword_1800E1278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E1278, 17LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E1278,
      byte_1800D41F0);
  RtlQueryUnbiasedInterruptTime(&v16);
  v4 = 0LL;
  v5 = 0;
  RmpAcquireGlobalLock();
  v6 = (_QWORD **)(a2 + 1);
  while ( 1 )
  {
    v7 = (__int64)*v6;
    if ( *v6 == v6 )
      break;
    CempListEntryRemoveAndClear(*v6);
    if ( *(int *)(v7 - 1256) >= 0 && (*(_BYTE *)(*(_QWORD *)(v7 - 1232) + 3536LL) & 1) == 0 )
    {
      v8 = (_DWORD *)(v7 - 32);
      if ( (*(_BYTE *)(v7 - 28) & 0x10) != 0 )
        *v8 |= 2u;
      v22 = 0LL;
      v21 = 0xFFFFFFFFFFFFFFFFuLL;
      LODWORD(v22) = (*(_DWORD *)(v7 - 28) & 0x10 | 0x20u) >> 4;
      RmpReleaseGlobalLock();
      if ( (int)RmpActivityHostDecommitOfferedMemory(
                  (struct _RM_ACTIVITY_HOST *)(v7 - 1280),
                  (struct _RM_OFFERED_DECOMMIT_INFO *)&v21) >= 0 )
      {
        v4 += *((_QWORD *)&v21 + 1);
        ++v5;
        RmpSystemMemoryMetricsQuery((struct _RM_SYSTEM_MEMORY_METRICS *)v19);
        *(_QWORD *)(v7 - 48) = v20;
      }
      RmpAcquireGlobalLock();
      if ( (*v8 & 2) != 0 )
      {
        *v8 &= ~2u;
        RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)(v7 - 1280));
      }
    }
    RmpObjectRelease((char *)(v7 - 1280));
  }
  RtlQueryUnbiasedInterruptTime(&v15);
  if ( (unsigned int)dword_1800E1278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E1278, 25LL) )
  {
    v17 = v15 - v16;
    v14 = v5;
    v18 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800E1278,
      byte_1800D4245,
      v12,
      v13,
      (__int64)&v18,
      (__int64)&v14,
      (__int64)&v17);
  }
  a2[7] += v4;
  v9 = v4;
  v10 = v15;
  if ( v4 >= a2[8] )
    v9 = a2[8];
  v11 = v4 <= a2[9];
  a2[8] = v9;
  if ( v11 )
    v4 = a2[9];
  a2[10] += v10 - v16;
  *((_DWORD *)a2 + 22) += v5;
  ++*((_DWORD *)a2 + 23);
  *((_DWORD *)a2 + 6) &= ~1u;
  a2[9] = v4;
  a2[4] = v10;
  RmpReleaseGlobalLock();
  CempLockTrackerClearForThread(HampLockTrackerId);
}
