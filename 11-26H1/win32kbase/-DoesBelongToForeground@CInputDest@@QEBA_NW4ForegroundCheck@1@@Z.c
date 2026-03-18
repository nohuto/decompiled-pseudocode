/*
 * XREFs of ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1400CE174
 * Callers:
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x14009C758 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x1400CC07C (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1401B4908 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 * Callees:
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1400CE260 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ApiSetEditionGetCompositionInputWindowUIOwner @ 0x1401C025C (ApiSetEditionGetCompositionInputWindowUIOwner.c)
 */

bool __fastcall CInputDest::DoesBelongToForeground(__int64 a1, int a2, int a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rbx
  char v9; // si
  __int64 v10; // rax
  __int64 v11; // rax
  struct tagWND *UserWindow; // rax
  int v14; // edx
  int v15; // ecx
  __int64 CompositionInputWindowUIOwner; // rdi
  int v17; // r8d

  v8 = 0LL;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18928) )
    return 0;
  v9 = 1;
  if ( a2 == 1 && CInputDest::IsIndependentInputWindow((CInputDest *)a1) )
  {
    UserWindow = CInputDest::GetUserWindow((CInputDest *)a1);
    CompositionInputWindowUIOwner = ApiSetEditionGetCompositionInputWindowUIOwner(UserWindow);
    if ( !CompositionInputWindowUIOwner
      || *(_QWORD *)(W32GetUserSessionState(v15, v14, v17) + 18928) != *(_QWORD *)(*(_QWORD *)(CompositionInputWindowUIOwner
                                                                                             + 16)
                                                                                 + 464LL) )
    {
      return 0;
    }
    return v9;
  }
  else
  {
    if ( *(_DWORD *)a1 && *(_DWORD *)(a1 + 92) )
    {
      v10 = *(_QWORD *)(a1 + 80);
      if ( v10 )
        v11 = *(_QWORD *)(v10 + 16);
      else
        v11 = 0LL;
      if ( v11 )
        v8 = *(_QWORD *)(v11 + 464);
    }
    return v8 == *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 18928);
  }
}
