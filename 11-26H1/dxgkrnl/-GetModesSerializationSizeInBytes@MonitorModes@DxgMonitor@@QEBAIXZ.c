/*
 * XREFs of ?GetModesSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ @ 0x14018B818
 * Callers:
 *     ?SerializeModesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORSOURCEMODESET_SERIALIZATION@@I@Z @ 0x14018B6F0 (-SerializeModesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORSOURCEMODESET_SERIALIZATIO.c)
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276B58 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 * Callees:
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::GetModesSerializationSizeInBytes(PERESOURCE Resource)
{
  int OwnerTable; // eax
  unsigned int v3; // edi

  if ( Resource )
    MonitorResourceLock::AcquireShared(Resource);
  OwnerTable = (int)Resource[1].OwnerTable;
  if ( OwnerTable )
    v3 = 104 * OwnerTable + 8;
  else
    v3 = 112;
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
  return v3;
}
