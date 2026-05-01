/*
 * XREFs of ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18043F194
 * Callers:
 *     _lambda_7e2780c5544860c2230bb0766c4bf63e_::operator() @ 0x180439A38 (_lambda_7e2780c5544860c2230bb0766c4bf63e_--operator().c)
 *     ?WindowDiscoveredFromShellHook@WindowWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x18043F8E0 (-WindowDiscoveredFromShellHook@WindowWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x1801F32C8 (-PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x18043CD00 (-NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18043D0CC (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?PushPointerActivationPolicyToWindow@WindowWrapperBase@@AEAAXXZ @ 0x18043D278 (-PushPointerActivationPolicyToWindow@WindowWrapperBase@@AEAAXXZ.c)
 *     ?PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x18043D2F4 (-PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z.c)
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18043D5E0 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180441148 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowWrapperBase::SetWindowId(__int64 a1, int a2, int a3)
{
  HWND v4; // rbx
  __int64 v6; // rcx
  const char *v7; // r9
  int v8; // r14d
  int v9; // esi
  bool v10; // zf
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (HWND)a2;
  v6 = *(_QWORD *)(a1 + 280);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 216LL))(v6);
    v8 = *(_DWORD *)(a1 + 296);
    if ( (_DWORD)v4 != v8 )
    {
      *(_DWORD *)(a1 + 296) = (_DWORD)v4;
      WindowReadyState::SetWindow(a1 + 360, v4, 0LL);
      v9 = 0;
      v10 = (_DWORD)v4 == 0;
      if ( (_DWORD)v4 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 184LL))(a1, 0LL);
        if ( a3 != 1 )
        {
          WindowWrapperBase::PushZbidToWindow(a1, *(_DWORD *)(a1 + 492));
          WindowWrapperBase::PushBoundsToWindow(a1, 3);
          WindowWrapperBase::PushPointerActivationPolicyToWindow((WindowWrapperBase *)a1);
          LightweightPropertySet::PushLightweightPropertiesToWindow((LightweightPropertySet *)(a1 + 200), v4);
        }
        v10 = (_DWORD)v4 == 0;
      }
      if ( !v10 )
        v8 = (int)v4;
      LOBYTE(v9) = (_DWORD)v4 == 0;
      WindowWrapperBase::NotifyGlobalComponentsForWindowStateChange(a1, v8, v9);
      WindowWrapperBase::ReconcileSessionIdleTaskCompletion((WindowWrapperBase *)a1);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x67E,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      v7);
  }
}
