/*
 * XREFs of ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DE1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005C630 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180064414 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace@AEAKW4DeviceEnumerationState@DockableDeviceCollection@@@?$_Tree@V?$_Tmap_traits@KW4DeviceEnumerationState@DockableDeviceCollection@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@PEAX@std@@_N@1@AEAK$$QEAW4DeviceEnumerationState@DockableDeviceCollection@@@Z @ 0x1800DD7D0 (--$_Emplace@AEAKW4DeviceEnumerationState@DockableDeviceCollection@@@-$_Tree@V-$_Tmap_traits@KW4D.c)
 *     ??1?$unique_ptr@UDockableDeviceInfo@@U?$default_delete@UDockableDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x1800DDB58 (--1-$unique_ptr@UDockableDeviceInfo@@U-$default_delete@UDockableDeviceInfo@@@std@@@std@@QEAA@XZ.c)
 *     ?DockableDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockableDeviceInfo@@@Z @ 0x1800DDF3C (-DockableDeviceAttached@DeviceDock@InputTraceLogging@@SAXKAEBUDockableDeviceInfo@@@Z.c)
 *     ?PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z @ 0x1800DE564 (-PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DockableDeviceCollection::OnDeviceAttach(
        DockableDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  _DWORD *v6; // rdi
  int Device; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct RIMDevice *v11; // [rsp+30h] [rbp-30h] BYREF
  struct DeviceInfo *v12; // [rsp+38h] [rbp-28h] BYREF
  void *v13; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v14[24]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v16; // [rsp+98h] [rbp+38h] BYREF
  _DWORD *v17; // [rsp+A8h] [rbp+48h] BYREF

  v16 = a2;
  v6 = operator new(0x628uLL);
  v17 = v6;
  memset_0(v6, 0, 0x628uLL);
  memset_0(v6, 0, 0x60CuLL);
  v6[2] = 1548;
  v13 = v6;
  v12 = (struct DeviceInfo *)v6;
  Device = HIDDeviceCollection::OnDeviceAttach(this, a2, &v12);
  v8 = Device;
  if ( Device >= 0 )
  {
    v11 = 0LL;
    Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v11, 0LL);
    v8 = Device;
    if ( Device >= 0 )
    {
      LODWORD(v17) = 0;
      std::_Tree<std::_Tmap_traits<unsigned long,enum DockableDeviceCollection::DeviceEnumerationState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum DockableDeviceCollection::DeviceEnumerationState>>,0>>::_Emplace<unsigned long &,enum DockableDeviceCollection::DeviceEnumerationState>(
        (__int64 *)this + 346,
        (__int64)v14,
        &v16,
        &v17);
      Device = DockableDeviceCollection::PopulateDeviceInfo(this, v11, (struct DockableDeviceInfo *)v6);
      v8 = Device;
      if ( Device >= 0 )
      {
        InputTraceLogging::DeviceDock::DockableDeviceAttached(v16, (const struct DockableDeviceInfo *)v6);
        *a3 = v12;
        v13 = 0LL;
        v8 = 0;
        goto LABEL_9;
      }
      v9 = 101LL;
    }
    else
    {
      v9 = 93LL;
    }
  }
  else
  {
    v9 = 87LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
    (const char *)(unsigned int)Device);
LABEL_9:
  std::unique_ptr<DockableDeviceInfo>::~unique_ptr<DockableDeviceInfo>(&v13);
  return v8;
}
