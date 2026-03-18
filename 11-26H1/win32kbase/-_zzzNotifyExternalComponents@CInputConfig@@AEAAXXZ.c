/*
 * XREFs of ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x14008E334
 * Callers:
 *     ?zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x14008055C (-zzzOnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?zzzCleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x140212244 (-zzzCleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x140212358 (-zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     RIMOnDisplayStateChange @ 0x14007C1C0 (RIMOnDisplayStateChange.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x14008D1D8 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ResetAccelerationCurves @ 0x14008E3D0 (ResetAccelerationCurves.c)
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x14008E5A0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x14008F210 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetzzzUpdateCursorSizes @ 0x1401C3D64 (ApiSetzzzUpdateCursorSizes.c)
 */

void __fastcall CInputConfig::_zzzNotifyExternalComponents(CInputConfig *this)
{
  int v2; // edx
  __int64 v3; // rcx
  int v4; // r8d
  unsigned int v5; // edi
  _BOOL8 v6; // rbx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d

  v5 = 0;
  if ( CInputConfig::LockExclusivelyHeld() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 767LL);
  RIMOnDisplayStateChange(v3, v2, v4);
  v6 = *((_BYTE *)this + 1505) != 0;
  UserSessionState = W32GetUserSessionState(v8, v7, v9);
  CCursorClip::OnDisplayStateChange(*(_QWORD *)(UserSessionState + 36272), v6);
  do
    ResetAccelerationCurves(v5++);
  while ( v5 < 2 );
  ApiSetzzzUpdateCursorSizes();
  InputConfig::Broadcast(v12, v11, v13);
}
