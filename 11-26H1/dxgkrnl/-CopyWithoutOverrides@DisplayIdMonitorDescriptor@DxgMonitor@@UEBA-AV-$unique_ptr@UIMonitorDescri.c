/*
 * XREFs of ?CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140281710
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140018A24 (-reset@-$unique_ptr@VCFlipManagerSignal@@U-$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x1400632F0 (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x140067340 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1402815D0 (-CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@Dxg.c)
 */

_QWORD *__fastcall DxgMonitor::DisplayIdMonitorDescriptor::CopyWithoutOverrides(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall ***v5)(_QWORD, __int64); // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
  {
    DxgMonitor::DisplayIdMonitorDescriptor::CopyInstance(a1, &v5);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64)))(*v5)[5])(v5);
    wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
      (__int64)a2,
      (__int64 *)&v5);
    wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(&v5, 0LL);
  }
  else
  {
    DxgMonitor::DisplayIdMonitorDescriptor::CopyInstance(a1, a2);
  }
  return a2;
}
