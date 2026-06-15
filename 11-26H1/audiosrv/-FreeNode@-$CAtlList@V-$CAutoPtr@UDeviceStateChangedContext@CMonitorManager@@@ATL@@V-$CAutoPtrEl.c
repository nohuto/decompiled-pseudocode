/*
 * XREFs of ?FreeNode@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18006105C
 * Callers:
 *     ?RemoveHead@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@QEAA?AV?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@2@XZ @ 0x180061008 (-RemoveHead@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtr.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@QEAAXXZ @ 0x180080BA0 (-RemoveAll@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtrE.c)
 * Callees:
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x180042A78 (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@QEAAXXZ @ 0x180080BA0 (-RemoveAll@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtrE.c)
 */

__int64 __fastcall ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::FreeNode(
        __int64 a1,
        __int64 *a2)
{
  CMonitorManager::DeviceStateChangedContext *v4; // rcx
  __int64 result; // rax
  bool v6; // zf

  v4 = (CMonitorManager::DeviceStateChangedContext *)a2[2];
  if ( v4 )
    CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v4);
  a2[2] = 0LL;
  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v6 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v6 )
    return ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::RemoveAll(a1);
  return result;
}
