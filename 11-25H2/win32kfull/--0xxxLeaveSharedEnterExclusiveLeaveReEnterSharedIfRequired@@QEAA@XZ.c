/*
 * XREFs of ??0xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ @ 0x1402B2E74
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired *__fastcall xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired::xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired(
        xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired *this)
{
  bool v2; // al
  __int64 v3; // rcx

  v2 = IS_USERCRIT_OWNED_SHAREDONLY();
  *(_BYTE *)this = v2;
  if ( !v2 && !IS_USERCRIT_OWNED_EXCLUSIVE() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 145);
  if ( *(_BYTE *)this )
  {
    UserSessionSwitchLeaveCrit(v3);
    EnterCrit(1LL, 0LL);
  }
  return this;
}
