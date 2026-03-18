/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003B4B0
 * Callers:
 *     ?Get@?$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z @ 0x14006C688 (-Get@-$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z.c)
 *     ??0VSYNC_TIME_STATS@@QEAA@XZ @ 0x14006E610 (--0VSYNC_TIME_STATS@@QEAA@XZ.c)
 *     ?Initialize@MOCKDRIVERSTATE@@QEAAJPEAVDXGADAPTER@@@Z @ 0x14006EEAC (-Initialize@MOCKDRIVERSTATE@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ??0DISPLAYDIAGNOSTICADAPTERDATA@@QEAA@XZ @ 0x140075F90 (--0DISPLAYDIAGNOSTICADAPTERDATA@@QEAA@XZ.c)
 *     ??0_unnamed_type_BlockerArray_@DripsBlockerTrackingHelper@@QEAA@XZ @ 0x14007B8B0 (--0_unnamed_type_BlockerArray_@DripsBlockerTrackingHelper@@QEAA@XZ.c)
 *     ??0DripsBlockerTrackingHelper@@QEAA@XZ @ 0x14007BA7C (--0DripsBlockerTrackingHelper@@QEAA@XZ.c)
 *     ?InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ @ 0x14019CA30 (-InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray @ 0x1401B3C7C (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--AdapterArray.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter @ 0x1401B3EE8 (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--AddAdapter.c)
 *     DxgkCheckDisplayState @ 0x1401CC150 (DxgkCheckDisplayState.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1401ED3A4 (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x14021CF60 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     ?LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x14027EED0 (-LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry.c)
 *     ?CopyInstance@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140280530 (-CopyInstance@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@DxgMonit.c)
 *     ?CreateFromSingleEdidBlob@EdidMonitorDescriptor@DxgMonitor@@SAJAEAU_DXGK_MONITOR_DESCRIPTOR@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x140280738 (-CreateFromSingleEdidBlob@EdidMonitorDescriptor@DxgMonitor@@SAJAEAU_DXGK_MONITOR_DESCRIPTOR@@AEA.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x14028C280 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402E2810 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x140376110 (DxgkUpdateGpuVirtualAddress.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAAPEAVDXGRESOURCEREFERENCE@@I@Z @ 0x140388C40 (-AllocateElements@-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAAPEAVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x140395050 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1403ED958 (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 *     ?CopyWithoutOverrides@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140400290 (-CopyWithoutOverrides@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x14040BA9C (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx

  if ( a3 )
  {
    v5 = a3;
    do
    {
      a4(a1);
      a1 += a2;
      --v5;
    }
    while ( v5 );
  }
}
