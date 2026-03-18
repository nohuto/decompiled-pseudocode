/*
 * XREFs of ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1401F88D8
 * Callers:
 *     ?zzzCleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1401F89B4 (-zzzCleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1401F8AC8 (-zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 *     ?zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1401F8B7C (-zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 * Callees:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1400CF310 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     ResetAccelerationCurves @ 0x14012B760 (ResetAccelerationCurves.c)
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x1401479E0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     RIMOnDisplayStateChange @ 0x14017F184 (RIMOnDisplayStateChange.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1401F74B4 (-Broadcast@InputConfig@@SAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CInputConfig::_zzzNotifyExternalComponents(CInputConfig *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  unsigned int i; // ebx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int (*v14)(void); // rax
  void (*v15)(void); // rax

  if ( CInputConfig::LockExclusivelyHeld((__int64)this, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 767);
  RIMOnDisplayStateChange(v4, v3);
  v5 = *((_BYTE *)this + 1505);
  UserSessionState = W32GetUserSessionState(v7, v6);
  CCursorClip::OnDisplayStateChange(*(_QWORD *)(UserSessionState + 36240), v5 != 0);
  for ( i = 0; i < 2; ++i )
    ResetAccelerationCurves(i, v9);
  v13 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v11, v9) + 48);
  v14 = *(int (**)(void))(v13 + 2720);
  if ( v14 )
  {
    if ( v14() >= 0 )
    {
      v13 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v13, v12) + 48);
      v15 = *(void (**)(void))(v13 + 2728);
      if ( v15 )
        v15();
    }
  }
  InputConfig::Broadcast(v13, v12);
}
