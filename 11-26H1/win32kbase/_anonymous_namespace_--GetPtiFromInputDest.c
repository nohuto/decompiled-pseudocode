/*
 * XREFs of _anonymous_namespace_::GetPtiFromInputDest @ 0x14012D9A4
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14009C278 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x14010AB30 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x14010AFBC (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1402248A8 (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::GetPtiFromInputDest(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  struct tagWND *UserWindow; // rax
  CInputDest *v10; // rcx

  v3 = 0LL;
  if ( a2 == 2 )
  {
    if ( !a1 || !CInputDest::GetUserWindow((CInputDest *)a1) )
      return v3;
    UserWindow = CInputDest::GetUserWindow(v10);
    return *((_QWORD *)UserWindow + 2);
  }
  if ( a1 )
  {
    v5 = 0LL;
    if ( *(_DWORD *)a1 && *(_DWORD *)(a1 + 92) == 2 )
    {
      v6 = *(_QWORD *)(a1 + 80);
      if ( v6 )
        v7 = *(_QWORD *)(v6 + 16);
      else
        v7 = 0LL;
      if ( v7 )
        v5 = *(_QWORD *)(v7 + 464);
    }
  }
  else
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(0, a2, a3) + 18928);
  }
  if ( v5 )
  {
    if ( !a2 )
      return *(_QWORD *)(v5 + 96);
    if ( a2 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 169LL);
      return v3;
    }
    UserWindow = *(struct tagWND **)(v5 + 112);
    if ( !UserWindow )
      return *(_QWORD *)(v5 + 96);
    return *((_QWORD *)UserWindow + 2);
  }
  return v3;
}
