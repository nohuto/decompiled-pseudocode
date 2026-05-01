/*
 * XREFs of ?ControlGained@SurfaceHubPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1804EDB80
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804EEC3C (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SurfaceHubPositioner::ControlGained(__int64 a1, __int64 a2)
{
  SurfaceHubPositioner *v4; // rdi
  void (__fastcall *v5)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = (SurfaceHubPositioner *)(a1 - 112);
  if ( !*(_BYTE *)(a1 - 112 + 576) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16A,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)0x8000FFFFLL);
  if ( *(_BYTE *)(a1 + 464) )
  {
    v10 = 0LL;
    v5 = *(void (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
    v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v10);
    v5(a2, 0LL, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v6);
    v7 = SurfaceHubPositioner::_SetDefaultLayout(v4, v10, 1);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x172,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        (const char *)(unsigned int)v7);
    v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)v10 + 432LL))(v10, 0LL);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x175,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  }
}
