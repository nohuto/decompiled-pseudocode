/*
 * XREFs of _anonymous_namespace_::InMouseRawInputMode @ 0x14006CD8C
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     IsSpatialDelegationEnabledForThread @ 0x14006CF30 (IsSpatialDelegationEnabledForThread.c)
 *     HasHidTable @ 0x14006CFAC (HasHidTable.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall anonymous_namespace_::InMouseRawInputMode(__int64 a1, int a2, int a3)
{
  char v3; // bl
  InputDelegation *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  bool v10; // zf
  __int64 v12; // rdi
  CInputDest *v13; // rcx

  v3 = 0;
  if ( a2 == 2 )
  {
    if ( a1 && CInputDest::GetUserWindow((CInputDest *)a1) )
      v6 = (InputDelegation *)*((_QWORD *)CInputDest::GetUserWindow(v13) + 2);
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
    if ( a1 )
    {
      v7 = 0LL;
      if ( *(_DWORD *)a1 && *(_DWORD *)(a1 + 92) == 2 )
      {
        v8 = *(_QWORD *)(a1 + 80);
        if ( v8 )
          v9 = *(_QWORD *)(v8 + 16);
        else
          v9 = 0LL;
        if ( v9 )
          v7 = *(_QWORD *)(v9 + 464);
      }
    }
    else
    {
      v7 = *(_QWORD *)(W32GetUserSessionState(0, a2, a3) + 18928);
    }
    if ( v7 )
    {
      if ( !a2 )
        goto LABEL_22;
      if ( a2 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 169LL);
        goto LABEL_10;
      }
      v12 = *(_QWORD *)(v7 + 112);
      if ( v12 )
        v6 = *(InputDelegation **)(v12 + 16);
      else
LABEL_22:
        v6 = *(InputDelegation **)(v7 + 96);
    }
  }
LABEL_10:
  if ( v6 && !(unsigned __int8)IsSpatialDelegationEnabledForThread(v6) )
  {
    if ( !a3 )
    {
      if ( (unsigned int)HasHidTable(v6) )
      {
        v10 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 57) + 824LL) + 100LL) & 0x100) == 0;
LABEL_16:
        if ( !v10 )
          return 1;
      }
      return v3;
    }
    if ( a3 == 1 )
    {
      if ( (unsigned int)HasHidTable(v6) )
      {
        v10 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 57) + 824LL) + 100LL) & 2) == 0;
        goto LABEL_16;
      }
      return v3;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 363LL);
  }
  return 0;
}
