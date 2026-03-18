/*
 * XREFs of ?_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ @ 0x140409F64
 * Callers:
 *     ?LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x14027EED0 (-LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry.c)
 *     ?UnloadDescriptorOverrides@EdidMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x1402811B0 (-UnloadDescriptorOverrides@EdidMonitorDescriptor@DxgMonitor@@UEAAXXZ.c)
 *     ??1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x140409F04 (--1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@U?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@2@@wistd@@QEAAX$$T@Z @ 0x14003B024 (-reset@-$unique_ptr@$$BY0A@V-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWm.c)
 *     ??4?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005EB68 (--4-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ??1?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x14005EBC0 (--1-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x14005EBD8 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x1400632F0 (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 */

void __fastcall DxgMonitor::EdidMonitorDescriptor::_CleanupRegistryOverridedMonitorDescriptors(
        DxgMonitor::EdidMonitorDescriptor *this)
{
  __int64 v2; // rdi
  void **v3; // rsi
  __int64 *v4; // rax
  unsigned int v5; // r8d
  __int64 i; // rdx
  void *v7; // rbp
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 4) )
  {
    v2 = 0LL;
    do
    {
      v3 = (void **)(*((_QWORD *)this + 3) + 8 * v2);
      v4 = (__int64 *)*v3;
      if ( *v3 )
      {
        while ( v4 )
        {
          if ( *((_DWORD *)v4 + 2) == 3 )
          {
            wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
              (__int64)&v8,
              v4);
            wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
              v3,
              0LL);
            wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
              v3,
              &v8);
            v7 = v8;
            --*((_DWORD *)this + 5);
            v8 = 0LL;
            if ( v7 )
            {
              wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v7);
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
            }
          }
          else
          {
            v3 = (void **)v4;
          }
          v4 = (__int64 *)*v3;
        }
      }
      v5 = *((_DWORD *)this + 4);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v5 );
    for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
    {
      if ( !*(_QWORD *)(*((_QWORD *)this + 3) + 8 * i) )
      {
        *((_DWORD *)this + 4) = i;
        break;
      }
    }
    if ( !*((_DWORD *)this + 4) )
      wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset((__int64 *)this + 3);
  }
  else if ( *((_QWORD *)this + 3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 887;
  }
}
