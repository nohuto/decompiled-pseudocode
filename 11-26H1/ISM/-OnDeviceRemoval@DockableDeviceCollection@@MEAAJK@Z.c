/*
 * XREFs of ?OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z @ 0x1800DE320
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800292CC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180057190 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@@std.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180064414 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??0?$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@Z @ 0x18007DFAC (--0-$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@.c)
 *     ??1?$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18007F710 (--1-$com_ptr_t@VSystemContextManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D3070 (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 *     ?DockableDeviceDetached@DeviceDock@InputTraceLogging@@SAXK@Z @ 0x1800DE05C (-DockableDeviceDetached@DeviceDock@InputTraceLogging@@SAXK@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800DFC70 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDockableDeviceRemoval@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x180184450 (-OnDockableDeviceRemoval@DeviceDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DockableDeviceCollection::OnDeviceRemoval(DockableDeviceCollection *this, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const char *v7; // r9
  __int64 *v8; // rbx
  int Device; // eax
  unsigned int v10; // edi
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF
  struct RIMDevice *v16; // [rsp+60h] [rbp+18h] BYREF
  DeviceDockServer *v17; // [rsp+68h] [rbp+20h] BYREF

  v15 = a2;
  InputTraceLogging::DeviceDock::DockableDeviceDetached(a2);
  v4 = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
    (__int64 *)this + 346,
    (__int64)&v16,
    &v15);
  v8 = (__int64 *)v16;
  if ( v16 == *((struct RIMDevice **)this + 346) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x78,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      v7);
  if ( *((_DWORD *)v16 + 8) == 1 )
  {
    v16 = 0LL;
    Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v16, 0LL);
    v10 = Device;
    if ( Device < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x84,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
        (const char *)(unsigned int)Device);
      return v10;
    }
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 56LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
    wil::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>(
      &v17,
      v12);
    DeviceDockServer::OnDockableDeviceRemoval(v17, *((struct DockableDeviceInfo **)v16 + 4));
    wil::com_ptr_t<SystemContextManager,wil::err_exception_policy>::~com_ptr_t<SystemContextManager,wil::err_exception_policy>((__int64 *)&v17);
  }
  v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(
          (__int64 **)this + 346,
          v8);
  std::_Deallocate<16>(v13, (struct std::nothrow_t *)0x28);
  return 0LL;
}
