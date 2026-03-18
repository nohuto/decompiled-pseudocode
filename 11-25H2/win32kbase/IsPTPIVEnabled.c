/*
 * XREFs of IsPTPIVEnabled @ 0x14005E094
 * Callers:
 *     RIMInitialize @ 0x14005E170 (RIMInitialize.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401FB1F0 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1400C8E98 (UseVelocityToEnableIV.c)
 */

char IsPTPIVEnabled()
{
  char v0; // bl
  __int64 v1; // rdx
  __int64 v2; // rcx

  v0 = 0;
  if ( (unsigned __int8)UseVelocityToEnableIV()
    || (unsigned __int8)isChildPartition() && *(_BYTE *)(W32GetUserSessionState(v2, v1) + 19364) )
  {
    return 1;
  }
  return v0;
}
