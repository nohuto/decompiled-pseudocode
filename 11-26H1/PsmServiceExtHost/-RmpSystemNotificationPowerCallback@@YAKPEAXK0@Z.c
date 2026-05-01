/*
 * XREFs of ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x18005BEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z @ 0x18005C0D0 (-RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005C130 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?RmpMemoryMonitorOnSystemStateChanged@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_STATE_CHANGE@@@Z @ 0x18006DD1C (-RmpMemoryMonitorOnSystemStateChanged@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_STATE_CHANGE@@.c)
 *     ?RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z @ 0x180081710 (-RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z.c)
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x1800817F4 (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemNotificationPowerCallback(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  __int64 v6; // rcx
  bool v7; // zf
  int v8; // ecx
  unsigned int v9; // ebx
  DWORD TickCount; // eax
  struct ExecutionModel::BaseResourceSet *v11; // r8
  int v12; // r9d
  unsigned __int64 v13; // rdx
  ExecutionModel::ResourceManager *v14; // rcx
  __int64 v16; // rax
  unsigned int v17; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-B4h]
  unsigned int v19; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v20[144]; // [rsp+40h] [rbp-A8h] BYREF

  memset_0(v20, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
  RmpAcquireGlobalLock();
  v5 = *((_DWORD *)a1 + 192);
  v6 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *a3;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *a3 )
    v6 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - a3[1];
  v7 = v6 == 0;
  v8 = *((_DWORD *)a3 + 5);
  if ( v7 )
  {
    v9 = v5 | 1;
    if ( !v8 )
      v9 = *((_DWORD *)a1 + 192) & 0xFFFFFFFE;
  }
  else if ( v8 )
  {
    v9 = v5 & 0xFFFFFFFD;
  }
  else
  {
    v9 = v5 | 2;
  }
  v17 = *((_DWORD *)a1 + 192);
  v18 = v9;
  RmpMemoryMonitorOnSystemStateChanged(a1, (struct _RM_SYSTEM_STATE_CHANGE *)&v17);
  TickCount = GetTickCount();
  RmpTelemetrySetTimer(a1, (v9 & 1) != 0 ? 3600000 : 900000, TickCount);
  v13 = *((unsigned int *)a1 + 159);
  v14 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 443);
  if ( (_DWORD)v13 )
  {
    v11 = (struct ExecutionModel::BaseResourceSet *)((v18 >> 1) & 1);
    if ( ((v17 >> 1) & 1) != (_DWORD)v11 )
    {
      if ( (_DWORD)v11 )
      {
        ExecutionModel::ResourceManager::RemoveIoCountersFromCirculation(v14, v13, v11);
      }
      else
      {
        v16 = *((_QWORD *)v14 + 4);
        *((_QWORD *)v14 + 6) -= v13;
        if ( (*(_BYTE *)(v16 + 1272) & 4) == 0 )
          ExecutionModel::ResourceManager::ReplenishIoCounterPool(v14, v13);
      }
    }
  }
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
  {
    v17 = *((_DWORD *)a1 + 192);
    v19 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1800E1278,
      (unsigned int)&unk_1800D2EB3,
      (_DWORD)v11,
      v12,
      (__int64)&v17,
      (__int64)&v19);
  }
  *((_DWORD *)a1 + 192) = v9;
  RmpReleaseGlobalLock();
  CempLockTrackerClearForThread(HampLockTrackerId);
  return 0LL;
}
