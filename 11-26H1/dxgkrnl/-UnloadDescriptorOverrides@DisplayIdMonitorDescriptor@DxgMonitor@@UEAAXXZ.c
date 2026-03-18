/*
 * XREFs of ?UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x140282120
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x140067340 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     ??$swap@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@YAXAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@0@0@Z @ 0x140099700 (--$swap@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@YAXAEAV-$unique_ptr@$$BY0A@EU-$default.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x14009EEB8 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 */

void __fastcall DxgMonitor::DisplayIdMonitorDescriptor::UnloadDescriptorOverrides(
        DxgMonitor::DisplayIdMonitorDescriptor *this)
{
  unsigned int v2; // r8d
  char **v3; // rdx
  char *v4; // rdx

  if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *((_DWORD *)this + 2) == 1 )
    {
      *((_DWORD *)this + 2) = 0;
      wistd::swap<unsigned char [0],wistd::default_delete<unsigned char [0]>>((__int64 *)this + 8, (__int64 *)this + 2);
      v2 = *((_DWORD *)this + 14);
      v4 = *v3;
      *((_DWORD *)this + 3) = v2;
      DisplayID_Initialize((DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24), v4, v2);
      wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)this + 8);
      *((_DWORD *)this + 14) = 0;
    }
  }
}
