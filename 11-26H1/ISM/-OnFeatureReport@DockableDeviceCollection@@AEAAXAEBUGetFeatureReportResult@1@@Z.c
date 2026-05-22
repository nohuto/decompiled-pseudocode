/*
 * XREFs of ?OnFeatureReport@DockableDeviceCollection@@AEAAXAEBUGetFeatureReportResult@1@@Z @ 0x1800DE474
 * Callers:
 *     ?OnFeatureReportStatic@DockableDeviceCollection@@CAJPEAX@Z @ 0x1800DE510 (-OnFeatureReportStatic@DockableDeviceCollection@@CAJPEAX@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D3070 (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 *     ?ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z @ 0x1800DE80C (-ProcessFeatureReport@DockableDeviceCollection@@AEAAJAEBUGetFeatureReportResult@1@@Z.c)
 */

void __fastcall DockableDeviceCollection::OnFeatureReport(
        DockableDeviceCollection *this,
        const struct DockableDeviceCollection::GetFeatureReportResult *a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rbx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 2768);
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
    (__int64 *)this + 346,
    (__int64)&v8,
    (_DWORD *)a2 + 2);
  v5 = v8;
  if ( v8 != *v2 )
  {
    v6 = DockableDeviceCollection::ProcessFeatureReport(this, a2);
    if ( v6 >= 0 )
    {
      *(_DWORD *)(v5 + 32) = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x110,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
        (const char *)(unsigned int)v6);
      *(_DWORD *)(v5 + 32) = 2;
    }
  }
}
