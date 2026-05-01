/*
 * XREFs of ??1?$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@@@QEAA@XZ @ 0x18006F940
 * Callers:
 *     ??1CWin32ApplicationView@@UEAA@XZ @ 0x18006F8CC (--1CWin32ApplicationView@@UEAA@XZ.c)
 *     ?_ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@AEAAXPEAUHWND__@@W4ZBID@@_J@Z @ 0x180086FC4 (-_ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@AEAAXPEAUHWND__@@W4ZBID@@_J@.c)
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180088250 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 *     ?GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x1800898D0 (-GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800920B0 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??1DISCOVER_OWNED_WINDOWS@CReportWindowVisibilityChange@@QEAA@XZ @ 0x180218810 (--1DISCOVER_OWNED_WINDOWS@CReportWindowVisibilityChange@@QEAA@XZ.c)
 *     ??1?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@QEAA@XZ @ 0x18021A210 (--1-$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@.c)
 *     wil::details::ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___::_ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___ @ 0x1802C3CE8 (wil--details--ScopeExitFn__lambda_66de74ac6126f13436c8b14bcd082fdb___--_ScopeExitFn__lambda_66de.c)
 *     ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x1802EC6D0 (-EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHW.c)
 *     ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18030ABA0 (-EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ??1?$CSimplePointerArray@UContextMenuRenderingData@@VCTContainer_PolicyNewMem@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@QEAA@XZ @ 0x1804D30C4 (--1-$CSimplePointerArray@UContextMenuRenderingData@@VCTContainer_PolicyNewMem@@V-$CSimpleArraySt.c)
 *     ??1AppResizeData@@UEAA@XZ @ 0x180534688 (--1AppResizeData@@UEAA@XZ.c)
 *     ?RecomputeDropTargets@AppResizeData@@UEAAJXZ @ 0x180534F60 (-RecomputeDropTargets@AppResizeData@@UEAAJXZ.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18055E664 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IUtagRECT@@@Z @ 0x180569E30 (-CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V-$shared_any_.c)
 *     ??1CServiceHostComponent@@UEAA@XZ @ 0x180583F24 (--1CServiceHostComponent@@UEAA@XZ.c)
 *     _RecoverApplicationWindows_::_1_::dtor$0 @ 0x1806DA901 (_RecoverApplicationWindows_--_1_--dtor$0.c)
 *     _VirtualDesktopPersistence::VirtualDesktopCollectionChanged_::_1_::dtor$1 @ 0x1806F4858 (_VirtualDesktopPersistence--VirtualDesktopCollectionChanged_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
