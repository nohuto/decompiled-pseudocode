/*
 * XREFs of ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1400B9628
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1400380D4 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1400B988C (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1401928F0 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x140207FFC (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1400B96E8 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1400B9B10 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1400B9D78 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ApiSetEditionGetCompositionInputWindowUIOwner @ 0x1400B9EE4 (ApiSetEditionGetCompositionInputWindowUIOwner.c)
 */

bool __fastcall CInputDest::DoesBelongToForeground(CInputDest *a1, __int64 a2)
{
  int v2; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // bl
  __int64 v7; // rbx
  struct tagWND *UserWindow; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 CompositionInputWindowUIOwner; // rdi

  v2 = a2;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888) )
    return 0;
  v6 = 1;
  if ( v2 == 1 && CInputDest::IsIndependentInputWindow(a1) )
  {
    UserWindow = CInputDest::GetUserWindow(a1);
    CompositionInputWindowUIOwner = ApiSetEditionGetCompositionInputWindowUIOwner(UserWindow);
    if ( !CompositionInputWindowUIOwner
      || *(_QWORD *)(W32GetUserSessionState(v11, v10) + 18888) != *(_QWORD *)(*(_QWORD *)(CompositionInputWindowUIOwner
                                                                                        + 16)
                                                                            + 472LL) )
    {
      return 0;
    }
    return v6;
  }
  else
  {
    v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18888);
    return CInputDest::GetQueue(a1, 2LL) == v7;
  }
}
