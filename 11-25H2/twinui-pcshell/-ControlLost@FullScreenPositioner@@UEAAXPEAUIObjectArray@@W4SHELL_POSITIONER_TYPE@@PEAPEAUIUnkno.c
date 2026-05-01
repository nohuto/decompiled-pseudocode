/*
 * XREFs of ?ControlLost@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1803236F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?RemoveView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18014BD88 (-RemoveView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180324B20 (-SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180324D68 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::ControlLost(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  void (__fastcall *v6)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  __int64 v8; // r8
  const char *v9; // r9
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v13; // [rsp+40h] [rbp+8h] BYREF

  *a4 = 0LL;
  v13 = 0LL;
  v6 = *(void (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v13);
  v6(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v7);
  FullScreenPositioner::SetPositionerMonitor(v13, 0LL);
  FullScreenPositioner::RemoveView((FullScreenPositioner *)(a1 - 120), (struct IUnknown *)v13, v8, v9);
  v10 = FullScreenPositioner::SetVisibleView((FullScreenPositioner *)(a1 - 120), 0LL);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x253,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v10);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
}
