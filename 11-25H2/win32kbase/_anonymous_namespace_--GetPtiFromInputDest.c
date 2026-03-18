/*
 * XREFs of _anonymous_namespace_::GetPtiFromInputDest @ 0x1400E67D0
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x140036A78 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x140038784 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1400E66F8 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14018FD48 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1402209F8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x140220B58 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x140221FBC (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1402225F8 (_anonymous_namespace_--ValidateUIPI.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1400B96E8 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1400B9D78 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::GetPtiFromInputDest(CInputDest *a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // edi
  CInputDest *v4; // rcx
  __int64 Queue; // rax
  __int64 v6; // rcx

  v2 = 0LL;
  v3 = a2;
  if ( (_DWORD)a2 == 2 )
  {
    if ( a1 && CInputDest::GetUserWindow(a1) )
      return *((_QWORD *)CInputDest::GetUserWindow(v4) + 2);
  }
  else
  {
    if ( a1 )
      Queue = CInputDest::GetQueue(a1, 0);
    else
      Queue = *(_QWORD *)(W32GetUserSessionState(0LL, a2) + 18888);
    if ( Queue )
    {
      if ( v3 )
      {
        if ( v3 != 1 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 169LL);
          return v2;
        }
        v6 = *(_QWORD *)(Queue + 112);
        if ( v6 )
          return *(_QWORD *)(v6 + 16);
      }
      return *(_QWORD *)(Queue + 96);
    }
  }
  return v2;
}
