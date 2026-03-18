/*
 * XREFs of IsPTPIVEnabled @ 0x14008A078
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     RIMInitialize @ 0x14010F990 (RIMInitialize.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x140213C90 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x14010FD9C (UseVelocityToEnableIV.c)
 */

char IsPTPIVEnabled()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  char v3; // bl
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  v3 = 0;
  if ( (unsigned __int8)UseVelocityToEnableIV()
    || (unsigned __int8)isChildPartition(v1, v0, v2) && *(_BYTE *)(W32GetUserSessionState(v6, v5, v7) + 19396) )
  {
    return 1;
  }
  return v3;
}
