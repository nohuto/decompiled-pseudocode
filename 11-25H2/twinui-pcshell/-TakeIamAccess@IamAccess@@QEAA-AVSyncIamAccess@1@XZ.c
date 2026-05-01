/*
 * XREFs of ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x180197C3C
 * Callers:
 *     ?ShellSetWindowPos@PrivilegedWindowingOperations@@EEAAJPEAUHWND__@@0PEAUtagRECT@@KKW4__MIDL___MIDL_itf_privilegedoperations_0000_0010_0001@@@Z @ 0x180197B30 (-ShellSetWindowPos@PrivilegedWindowingOperations@@EEAAJPEAUHWND__@@0PEAUtagRECT@@KKW4__MIDL___MI.c)
 *     ?EnableShellWindowManagementBehavior@CPrivilegedTabletModeOperations@@EEAAJKK@Z @ 0x180197BD0 (-EnableShellWindowManagementBehavior@CPrivilegedTabletModeOperations@@EEAAJKK@Z.c)
 *     ?RegisterForCustomDockTargets@CPrivilegedArrangementOperations@@EEAAHPEAUHWND__@@@Z @ 0x18024D4D0 (-RegisterForCustomDockTargets@CPrivilegedArrangementOperations@@EEAAHPEAUHWND__@@@Z.c)
 *     ?ApplyWindowAction@PrivilegedWindowingOperations@@EEAAJPEAUHWND__@@U_WINDOW_ACTION@@@Z @ 0x1803E9B40 (-ApplyWindowAction@PrivilegedWindowingOperations@@EEAAJPEAUHWND__@@U_WINDOW_ACTION@@@Z.c)
 *     ?ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ @ 0x1803E9C10 (-ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ.c)
 *     ?EnableShellWindowManagementBehavior@CPrivilegedArrangementOperations@@EEAAHPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0004_0001@@1@Z @ 0x1803E9C70 (-EnableShellWindowManagementBehavior@CPrivilegedArrangementOperations@@EEAAHPEAUHWND__@@W4__MIDL.c)
 *     ?MaximizeWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@@Z @ 0x1803E9DA0 (-MaximizeWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?SetBridgeWindowChild@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1803E9FB0 (-SetBridgeWindowChild@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z.c)
 *     ?SetFallbackForeground@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@K@Z @ 0x1803EA020 (-SetFallbackForeground@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@K@Z.c)
 *     ?SetFallbackForeground@CPrivilegedForegroundOperations@@EEAAJPEAUHWND__@@K@Z @ 0x1803EA090 (-SetFallbackForeground@CPrivilegedForegroundOperations@@EEAAJPEAUHWND__@@K@Z.c)
 *     ?SetProcessLaunchForegroundPolicy@CPrivilegedForegroundOperations@@EEAAJKW4tagPROCESS_LAUNCH_FOREGROUND_POLICY@@@Z @ 0x1803EA130 (-SetProcessLaunchForegroundPolicy@CPrivilegedForegroundOperations@@EEAAJKW4tagPROCESS_LAUNCH_FOR.c)
 *     ?SetWindowCompositionAttribute@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@KPEAXI@Z @ 0x1803EA1A0 (-SetWindowCompositionAttribute@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@KPEAXI@Z.c)
 *     ?SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z @ 0x1803EA370 (-SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z.c)
 *     ?SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z @ 0x1803EA3F4 (-SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?SuppressWindowDisplayChange@PrivilegedWindowingOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1803EA4F0 (-SuppressWindowDisplayChange@PrivilegedWindowingOperations@@EEAAJPEAUHWND__@@H@Z.c)
 *     ?UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z @ 0x1803EA560 (-UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall IamAccess::TakeIamAccess(__int64 a1, RTL_SRWLOCK **a2)
{
  signed __int32 v3; // eax

  *a2 = (RTL_SRWLOCK *)a1;
  if ( a1 )
  {
    do
      v3 = *(_DWORD *)(a1 + 36);
    while ( v3 != 0x7FFFFFFF && v3 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 36), v3 + 1, v3) );
  }
  AcquireSRWLockExclusive(*a2 + 6);
  EnableIAMAccess((*a2)[5].Ptr, 1LL);
  return a2;
}
