/*
 * XREFs of ?CreateWorkerWindowInBand@CApplicationManagerUtility@@YAPEAUHWND__@@P6A_JPEAU2@I_K_J@Z0KKPEAUHMENU__@@PEAXW4ZBID@@@Z @ 0x1801708BC
 * Callers:
 *     ??0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_MODE@@@Z @ 0x180170784 (--0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_M.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

HWND CApplicationManagerUtility::CreateWorkerWindowInBand()
{
  HWND v0; // rbx

  v0 = (HWND)SHCreateWorkerWindowW(
               CImmersiveMode::CDesktopVisibilityChangeSource::s_ActivationFilterWndProc,
               0LL,
               0LL,
               0LL,
               0LL,
               0LL);
  if ( v0
    && (*(int (__fastcall **)(PVOID, HWND, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                           + 32LL))(
         CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
         v0,
         0LL,
         12LL) < 0 )
  {
    DestroyWindow(v0);
    return 0LL;
  }
  return v0;
}
