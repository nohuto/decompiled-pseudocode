/*
 * XREFs of ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x14020A050
 * Callers:
 *     ?Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z @ 0x14020B198 (-Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1401FDB60 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1402BDBF8 (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 */

int __fastcall MonitoredFenceHelper::CreateSynchObject(MonitoredFenceHelper *this, struct DXGDEVICE *a2, UINT64 a3)
{
  ADAPTER_RENDER *v6; // r8
  _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v8; // [rsp+58h] [rbp-9h] BYREF
  struct DXGSYNCOBJECT *v9; // [rsp+C8h] [rbp+67h] BYREF

  memset(&v8, 0, sizeof(v8));
  v6 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
  v8.hDevice = *((_DWORD *)a2 + 117);
  v8.Info.Semaphore.InitialCount = *((_DWORD *)this + 10);
  v8.Info.Type = D3DDDI_PERIODIC_MONITORED_FENCE;
  v8.Info.Flags.Value = v8.Info.Flags.Value & 0xFFFFFF5F | 0x80;
  v8.Info.SynchronizationMutex.InitialState = 0;
  v8.Info.PeriodicMonitoredFence.EngineAffinity = 1;
  v8.Info.PeriodicMonitoredFence.Time = a3;
  v9 = 0LL;
  if ( (int)CreateSynchronizationObjectInternal((__int64)a2, 0, v6, (__int64)&v8, 0, 0, &v9, (__int64 *)this + 4, 0LL) < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2155;
  }
  return CreatePeriodicMonitoredFenceNotificationInternal(
           *(struct DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL),
           *(struct DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL),
           v9,
           &v8,
           1);
}
