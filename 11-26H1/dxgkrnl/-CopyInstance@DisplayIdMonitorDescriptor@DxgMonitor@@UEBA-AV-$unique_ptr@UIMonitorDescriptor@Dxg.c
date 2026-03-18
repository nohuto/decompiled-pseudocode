/*
 * XREFs of ?CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1402815D0
 * Callers:
 *     ?CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140281710 (-CopyWithoutOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescri.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??4?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005DCB4 (--4-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x1400632F0 (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x140067340 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     ??_GDisplayIdMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x140099720 (--_GDisplayIdMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x140281218 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 */

_QWORD *__fastcall DxgMonitor::DisplayIdMonitorDescriptor::CopyInstance(__int64 a1, _QWORD *a2)
{
  void *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // ecx
  void *v8; // rax
  DxgMonitor::DisplayIdMonitorDescriptor *v9; // rcx
  void *v11; // [rsp+50h] [rbp+30h] BYREF
  void *v12; // [rsp+60h] [rbp+40h] BYREF
  DxgMonitor::DisplayIdMonitorDescriptor *v13; // [rsp+68h] [rbp+48h] BYREF

  v4 = (void *)operator new[](*(unsigned int *)(a1 + 12), 0x4D677844u, 256LL);
  v11 = v4;
  if ( !v4
    || (memmove(v4, *(const void **)(a1 + 24), *(unsigned int *)(a1 + 12)),
        (v5 = operator new(0x48uLL, 0x4D677844u, 256LL)) == 0)
    || (v13 = (DxgMonitor::DisplayIdMonitorDescriptor *)DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(
                                                          v5,
                                                          &v11,
                                                          *(_DWORD *)(a1 + 12)),
        (v6 = (__int64)v13) == 0) )
  {
    *a2 = 0LL;
    goto LABEL_13;
  }
  if ( !(unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline()
    || (v7 = *(_DWORD *)(a1 + 8), *(_DWORD *)(v6 + 8) = v7, v7 != 1) )
  {
LABEL_10:
    wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
      (__int64)a2,
      (__int64 *)&v13);
    v9 = v13;
    if ( !v13 )
      goto LABEL_13;
    goto LABEL_8;
  }
  v8 = (void *)operator new[](*(unsigned int *)(a1 + 56), 0x4D677844u, 256LL);
  v12 = v8;
  if ( v8 )
  {
    memmove(v8, *(const void **)(a1 + 64), *(unsigned int *)(a1 + 56));
    wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::operator=((void **)(v6 + 64), &v12);
    *(_DWORD *)(v6 + 56) = *(_DWORD *)(a1 + 56);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v12);
    goto LABEL_10;
  }
  *a2 = 0LL;
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v12);
  v9 = (DxgMonitor::DisplayIdMonitorDescriptor *)v6;
LABEL_8:
  DxgMonitor::DisplayIdMonitorDescriptor::`scalar deleting destructor'(v9, 1);
LABEL_13:
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v11);
  return a2;
}
