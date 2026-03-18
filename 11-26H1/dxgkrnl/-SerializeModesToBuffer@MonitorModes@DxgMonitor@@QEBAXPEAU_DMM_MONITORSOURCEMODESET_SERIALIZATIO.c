/*
 * XREFs of ?SerializeModesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORSOURCEMODESET_SERIALIZATION@@I@Z @ 0x14018B6F0
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276B58 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 * Callees:
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1?$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ @ 0x140059934 (--1-$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ.c)
 *     ?GetModesSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ @ 0x14018B818 (-GetModesSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ.c)
 */

void __fastcall DxgMonitor::MonitorModes::SerializeModesToBuffer(
        PERESOURCE Resource,
        struct _DMM_MONITORSOURCEMODESET_SERIALIZATION *a2,
        unsigned int a3)
{
  struct _ERESOURCE *v6; // rax
  struct _LIST_ENTRY **p_Blink; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  struct _ERESOURCE *v10; // rax
  struct _ERESOURCE *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = Resource;
  if ( Resource )
    MonitorResourceLock::AcquireShared(Resource);
  if ( DxgMonitor::MonitorModes::GetModesSerializationSizeInBytes(Resource) <= a3 )
  {
    *(_DWORD *)a2 = Resource[1].OwnerTable;
    v6 = *(struct _ERESOURCE **)&Resource[1].ActiveCount;
    if ( v6 != (struct _ERESOURCE *)&Resource[1].ActiveCount )
    {
      p_Blink = &v6[-1].SystemResourcesList.Blink;
      v8 = 0;
      if ( !v6 )
        p_Blink = 0LL;
      while ( p_Blink && v8 < LODWORD(Resource[1].OwnerTable) )
      {
        v9 = 104LL * v8;
        *(_DWORD *)((char *)a2 + v9 + 104) = *((_DWORD *)p_Blink + 28);
        *(_OWORD *)((char *)a2 + v9 + 8) = *(_OWORD *)p_Blink;
        *(_OWORD *)((char *)a2 + v9 + 24) = *((_OWORD *)p_Blink + 1);
        *(_OWORD *)((char *)a2 + v9 + 40) = *((_OWORD *)p_Blink + 2);
        *(_OWORD *)((char *)a2 + v9 + 56) = *((_OWORD *)p_Blink + 3);
        *(_OWORD *)((char *)a2 + v9 + 72) = *((_OWORD *)p_Blink + 4);
        *(_OWORD *)((char *)a2 + v9 + 88) = *((_OWORD *)p_Blink + 5);
        v10 = (struct _ERESOURCE *)p_Blink[12];
        if ( v10 == (struct _ERESOURCE *)&Resource[1].ActiveCount )
        {
          p_Blink = 0LL;
        }
        else
        {
          p_Blink = &v10[-1].SystemResourcesList.Blink;
          if ( !v10 )
            p_Blink = 0LL;
        }
        ++v8;
      }
    }
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 177;
    RESOURCE_LOCK<DxgMonitor::MonitorModes>::~RESOURCE_LOCK<DxgMonitor::MonitorModes>(&v11);
  }
}
