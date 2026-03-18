/*
 * XREFs of IsPenIVEnabled @ 0x14021B7A4
 * Callers:
 *     RIMInitialize @ 0x14005E170 (RIMInitialize.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401FB1F0 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1400C8E98 (UseVelocityToEnableIV.c)
 */

char __fastcall IsPenIVEnabled(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx

  v4 = 0;
  if ( UseVelocityToEnableIV(a1, a2) || isChildPartition(v3, v2) && *(_BYTE *)(W32GetUserSessionState(v6, v5) + 19363) )
    return 1;
  return v4;
}
