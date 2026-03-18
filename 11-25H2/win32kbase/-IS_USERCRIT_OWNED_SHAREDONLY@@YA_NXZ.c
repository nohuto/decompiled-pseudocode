/*
 * XREFs of ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140040DDC
 * Callers:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     HMUnlockObjectInternal @ 0x1400396C0 (HMUnlockObjectInternal.c)
 *     xxxEnumDisplayMonitors @ 0x14003FE60 (xxxEnumDisplayMonitors.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x14009CAF4 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     DeleteStringPropertyAtoms @ 0x14009CB60 (DeleteStringPropertyAtoms.c)
 *     DeleteProperties @ 0x14009CCD0 (DeleteProperties.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400BAD54 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x140124D70 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 *     UserIsUserCritSecInShared @ 0x140158660 (UserIsUserCritSecInShared.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1401A5878 (LockIntoSharedUserCritDeferredUnlockList.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x1401A5130 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

bool IS_USERCRIT_OWNED_SHAREDONLY(void)
{
  return (unsigned int)GET_USERCRIT_DISPOSITION() == 1;
}
