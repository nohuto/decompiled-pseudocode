/*
 * XREFs of ??0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_MODE@@@Z @ 0x180170784
 * Callers:
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801703D8 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x180065740 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     ?MonitorRectChanged@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXXZ @ 0x180170834 (-MonitorRectChanged@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXXZ.c)
 *     ?CreateWorkerWindowInBand@CApplicationManagerUtility@@YAPEAUHWND__@@P6A_JPEAU2@I_K_J@Z0KKPEAUHMENU__@@PEAXW4ZBID@@@Z @ 0x1801708BC (-CreateWorkerWindowInBand@CApplicationManagerUtility@@YAPEAUHWND__@@P6A_JPEAU2@I_K_J@Z0KKPEAUHME.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::CDesktopVisibilityChangeSource::CDesktopVisibilityChangeSource(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        char a4,
        struct IUnknown *a5,
        int a6)
{
  int v11; // [rsp+78h] [rbp+20h] BYREF

  *(_QWORD *)a1 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_DWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 12) = a4;
  *(_WORD *)(a1 + 14) = 0;
  *(_QWORD *)(a1 + 16) = CApplicationManagerUtility::CreateWorkerWindowInBand();
  *(_BYTE *)(a1 + 13) = SHIsSameObject(a2, a5);
  CImmersiveMode::CDesktopVisibilityChangeSource::MonitorRectChanged((CImmersiveMode::CDesktopVisibilityChangeSource *)a1);
  CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(a1, a6);
  v11 = 0;
  if ( ((int (__fastcall *)(struct IUnknown *, int *))a2->lpVtbl[5].QueryInterface)(a2, &v11) >= 0 )
    *(_BYTE *)(a1 + 14) = v11 & 1;
  return a1;
}
