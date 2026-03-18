/*
 * XREFs of ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x1400356D8
 * Callers:
 *     ?MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DD30 (-MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEA.c)
 *     ?MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z @ 0x1403E17AC (-MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 */

CONST_MONITOR_REF_LOCK_ACCESSOR *__fastcall CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR(
        CONST_MONITOR_REF_LOCK_ACCESSOR *this,
        const struct MONITOR_REF_ACCESSOR *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)a2 + 1);
  *(_QWORD *)this = v4;
  if ( v4 )
    MonitorResourceLock::AcquireShared((PERESOURCE)(v4 + 40));
  *((_QWORD *)this + 1) = retaddr;
  v5 = 2LL;
  do
  {
    *((_QWORD *)this + 2) = *((_QWORD *)a2 + 1);
    --v5;
  }
  while ( v5 );
  MONITOR_REF_ACCESSOR::AddReference((CONST_MONITOR_REF_LOCK_ACCESSOR *)((char *)this + 8));
  return this;
}
