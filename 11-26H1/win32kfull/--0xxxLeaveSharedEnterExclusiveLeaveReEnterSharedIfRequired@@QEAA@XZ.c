/*
 * XREFs of ??0xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ @ 0x1401F7948
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14003A7F0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired *__fastcall xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired::xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired(
        xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired *this,
        __int64 a2)
{
  bool v3; // al
  __int64 v4; // rdx
  __int64 v5; // rcx

  v3 = IS_USERCRIT_OWNED_SHAREDONLY((__int64)this, a2);
  *(_BYTE *)this = v3;
  if ( !v3 && !IS_USERCRIT_OWNED_EXCLUSIVE(v5, v4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 145LL);
  if ( *(_BYTE *)this )
  {
    UserSessionSwitchLeaveCrit(v5);
    EnterCrit(1LL, 0LL);
  }
  return this;
}
