/*
 * XREFs of ??1?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@QEAA@XZ @ 0x1800AF540
 * Callers:
 *     _CMonitorManager::QueueDeviceStateChanged_::_1_::dtor$1 @ 0x180164BF8 (_CMonitorManager--QueueDeviceStateChanged_--_1_--dtor$1.c)
 *     _CMonitorManager::ProcessDeviceStateChanged_::_1_::dtor$2 @ 0x180165E91 (_CMonitorManager--ProcessDeviceStateChanged_--_1_--dtor$2.c)
 * Callees:
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x180042A78 (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 */

CMonitorManager::DeviceStateChangedContext *__fastcall ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>::~CAutoPtr<CMonitorManager::DeviceStateChangedContext>(
        CMonitorManager::DeviceStateChangedContext **a1)
{
  CMonitorManager::DeviceStateChangedContext *v2; // rcx
  CMonitorManager::DeviceStateChangedContext *result; // rax

  v2 = *a1;
  if ( v2 )
    result = CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
