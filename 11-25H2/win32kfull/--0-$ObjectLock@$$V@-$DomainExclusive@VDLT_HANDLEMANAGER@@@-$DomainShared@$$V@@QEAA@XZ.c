/*
 * XREFs of ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C9740
 * Callers:
 *     ?zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x14024116C (-zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z.c)
 *     ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x14028694C (-DelayHookFree@@YAXPEAUtagHOOK@@@Z.c)
 * Callees:
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x1400C9768 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainShar.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1400C9B8C (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 */

__int64 __fastcall DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>(__int64 a1)
{
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(a1);
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>(a1);
  return a1;
}
