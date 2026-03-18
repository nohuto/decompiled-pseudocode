/*
 * XREFs of ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14003A7F0
 * Callers:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_DESKTOP@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x14005A3F8 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_DESKTOP@@@-$DomainShared@$$V@SharedUserCritOnly@@QEAA.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x14014FB64 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     _FreeGestureInfo @ 0x1401EDD90 (_FreeGestureInfo.c)
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1401EE3F4 (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     _FreeTouchInputInfo @ 0x1401EE500 (_FreeTouchInputInfo.c)
 *     ??0xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ @ 0x1401F7948 (--0xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x1401FF96C (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x14022F0A4 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x1402890FC (-DelayHookFree@@YAXPEAUtagHOOK@@@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

bool __fastcall IS_USERCRIT_OWNED_SHAREDONLY(__int64 a1, __int64 a2)
{
  return (unsigned int)GET_USERCRIT_DISPOSITION(a1, a2) == 1;
}
