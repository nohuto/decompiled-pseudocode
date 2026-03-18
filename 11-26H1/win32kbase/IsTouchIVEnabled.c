/*
 * XREFs of IsTouchIVEnabled @ 0x1401C3E68
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     RIMInitialize @ 0x14010F990 (RIMInitialize.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x140213C90 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x14010FD9C (UseVelocityToEnableIV.c)
 */

char __fastcall IsTouchIVEnabled(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  char v6; // bl
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  v6 = 0;
  if ( UseVelocityToEnableIV(a1, a2, a3)
    || isChildPartition(v4, v3, v5) && *(_BYTE *)(W32GetUserSessionState(v8, v7, v9) + 19394) )
  {
    return 1;
  }
  return v6;
}
