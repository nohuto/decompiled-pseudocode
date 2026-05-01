/*
 * XREFs of ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18004BB0C
 * Callers:
 *     ?WindowDiscoveredFromShellHook@UwpWindowWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x18004CA10 (-WindowDiscoveredFromShellHook@UwpWindowWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 *     _lambda_a977afc9c59ce0858e320274f367b95a_::operator() @ 0x180446234 (_lambda_a977afc9c59ce0858e320274f367b95a_--operator().c)
 * Callees:
 *     ?NotifyGlobalComponentsForWindowStateChange@UwpWindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x18004BC50 (-NotifyGlobalComponentsForWindowStateChange@UwpWindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChang.c)
 *     ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004BF74 (-ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18004C2A8 (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18004C394 (-CachePersistingStateName@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel.c)
 *     ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18017EC68 (-PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ @ 0x1801C9FA0 (-TryPushWindowResizingState@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?PushZbidToWindow@UwpWindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x1801DA940 (-PushZbidToWindow@UwpWindowWrapperBase@@AEAAXW4ZBID@@@Z.c)
 *     ?PushPointerActivationPolicyToWindow@UwpWindowWrapperBase@@AEAAXXZ @ 0x1801F25C4 (-PushPointerActivationPolicyToWindow@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x1801F32C8 (-PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapperBase::SetWindowId(__int64 a1, int a2, int a3)
{
  HWND v4; // rbx
  const char *v6; // r9
  int v7; // r14d
  unsigned int v8; // esi
  bool v9; // zf
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v4 = (HWND)a2;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
    v7 = *(_DWORD *)(a1 + 296);
    if ( (_DWORD)v4 != v7 )
    {
      *(_DWORD *)(a1 + 296) = (_DWORD)v4;
      WakeAllConditionVariable((PCONDITION_VARIABLE)(a1 + 304));
      UwpWindowReadyState::SetWindow(a1 + 360, v4, 0LL);
      v8 = 0;
      if ( !*(_QWORD *)(a1 + 536) )
        UwpWindowWrapperBase::CachePersistingStateName(a1, *(unsigned int *)(a1 + 296));
      v9 = (_DWORD)v4 == 0;
      if ( (_DWORD)v4 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 200LL))(a1, 0LL);
        if ( a3 != 1 )
        {
          UwpWindowWrapperBase::PushZbidToWindow(a1, *(unsigned int *)(a1 + 492));
          UwpWindowWrapperBase::PushBoundsToWindow(a1, 3LL);
          UwpWindowWrapperBase::PushPointerActivationPolicyToWindow((UwpWindowWrapperBase *)a1);
          LightweightPropertySet::PushLightweightPropertiesToWindow((LightweightPropertySet *)(a1 + 200), v4);
          UwpWindowWrapperBase::TryPushWindowResizingState((UwpWindowWrapperBase *)a1);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 192LL))(a1);
        v9 = (_DWORD)v4 == 0;
      }
      if ( !v9 )
        v7 = (int)v4;
      LOBYTE(v8) = (_DWORD)v4 == 0;
      UwpWindowWrapperBase::NotifyGlobalComponentsForWindowStateChange(a1, v7, v8);
      UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion((UwpWindowWrapperBase *)a1);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x6A1,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      v6);
  }
}
