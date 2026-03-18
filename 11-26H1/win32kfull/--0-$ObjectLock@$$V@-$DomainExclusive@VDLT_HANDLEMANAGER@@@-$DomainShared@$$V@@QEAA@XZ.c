/*
 * XREFs of ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1401E6C4C
 * Callers:
 *     ?zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x1401E6C74 (-zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z.c)
 *     ?zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x1402A3124 (-zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH.c)
 * Callees:
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x14003AB48 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x14003AD08 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainShar.c)
 */

__int64 __fastcall DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>(__int64 a1)
{
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>(a1);
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>(a1);
  return a1;
}
