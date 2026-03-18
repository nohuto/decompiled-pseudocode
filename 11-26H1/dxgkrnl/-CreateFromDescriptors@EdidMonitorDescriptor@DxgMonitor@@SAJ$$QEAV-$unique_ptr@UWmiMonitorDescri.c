/*
 * XREFs of ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x14040BA9C
 * Callers:
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x140279F70 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 *     ?OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x14040B864 (-OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003B4B0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1400431C8 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ??4?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005EB68 (--4-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x14005EBD8 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1400613C0 (--_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ??$?0VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@XX@?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@$$QEAV?$unique_ptr@VEdidMonitorDescriptor@DxgMonitor@@U?$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x1400632F0 (--$-0VEdidMonitorDescriptor@DxgMonitor@@U-$default_delete@VEdidMonitorDescriptor@DxgMonitor@@@wi.c)
 *     ??$reset@PEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@?$unique_ptr@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@U?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@2@@wistd@@QEAAXPEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x14006D89C (--$reset@PEAV-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescrip.c)
 *     ??4?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140098C40 (--4-$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U-$default_delete@UIMonitorDescriptor@DxgMonitor.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x1403EBA64 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::CreateFromDescriptors(
        __int64 **a1,
        __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  DxgMonitor::EdidMonitorDescriptor *v4; // rax
  bool v5; // dl
  DxgMonitor::EdidMonitorDescriptor *v6; // rbx
  unsigned int v7; // esi
  __int64 *v8; // r10
  int IsEDIDBaseBlock; // edi
  __int64 v10; // rax
  bool v11; // cf
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  char *v14; // rdi
  __int64 result; // rax
  void *v16; // [rsp+60h] [rbp+18h] BYREF
  DxgMonitor::EdidMonitorDescriptor *v17; // [rsp+68h] [rbp+20h] BYREF

  v4 = (DxgMonitor::EdidMonitorDescriptor *)operator new(0x20uLL, 0x4D677844u, 256LL);
  v6 = v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 2) = 0LL;
    *(_QWORD *)v4 = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptor'};
    v7 = 0;
    v17 = v4;
    *((_QWORD *)v4 + 1) = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptorEnumerator'};
    *((_QWORD *)v4 + 3) = 0LL;
    v8 = *a1;
    while ( v8 )
    {
      if ( !*v8 )
      {
        IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((const unsigned __int8 *)v8 + 24, v5);
        if ( IsEDIDBaseBlock < 0 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 262;
          MonitorLogBadEDID(IsEDIDBaseBlock);
LABEL_28:
          DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'(v6, 1);
          return (unsigned int)IsEDIDBaseBlock;
        }
      }
      v8 = (__int64 *)*v8;
      ++v7;
    }
    if ( !v7 )
    {
      IsEDIDBaseBlock = -1071841279;
      goto LABEL_28;
    }
    v10 = 8LL * v7;
    if ( !is_mul_ok(v7, 8uLL) )
      v10 = -1LL;
    v11 = __CFADD__(v10, 8LL);
    v12 = v10 + 8;
    if ( v11 )
      v12 = -1LL;
    v13 = operator new[](v12, 0x4D677844u, 256LL);
    if ( v13 )
    {
      v14 = (char *)(v13 + 8);
      *(_QWORD *)v13 = v7;
      `vector constructor iterator'(
        (char *)(v13 + 8),
        8LL,
        v7,
        (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
    }
    else
    {
      v14 = 0LL;
    }
    wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> *>(
      (char **)v6 + 3,
      v14);
    if ( !*((_QWORD *)v6 + 3) )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 281;
      IsEDIDBaseBlock = -1073741801;
      goto LABEL_28;
    }
    *((_DWORD *)v6 + 4) = v7;
    do
    {
      if ( !*a1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 294;
      }
      wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>(
        (__int64)&v16,
        *a1);
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
        (void **)(*((_QWORD *)v6 + 3) + 8LL * --v7),
        (void **)a1);
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
        (void **)a1,
        &v16);
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
        &v16,
        0LL);
    }
    while ( v7 );
    if ( *a1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 301;
    }
    wistd::unique_ptr<DxgMonitor::IMonitorDescriptor,wistd::default_delete<DxgMonitor::IMonitorDescriptor>>::operator=(
      a2,
      (__int64 (__fastcall ****)(_QWORD, __int64))&v17);
    if ( v17 )
      DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'(v17, 1);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 247;
  }
  return result;
}
