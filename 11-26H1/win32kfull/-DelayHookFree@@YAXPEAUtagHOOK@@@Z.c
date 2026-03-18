/*
 * XREFs of ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x1402890FC
 * Callers:
 *     FreeHook @ 0x1400267F0 (FreeHook.c)
 * Callees:
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400272EC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14003A7F0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x14003AB48 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x14003AD08 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainShar.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall DelayHookFree(struct tagHOOK *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  _BYTE v13[48]; // [rsp+28h] [rbp-40h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(UserSessionState + 42336)) )
    __int2c();
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>((__int64)v13);
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>((__int64)v13);
  if ( !*(_DWORD *)(W32GetUserSessionState(v5, v4) + 19792) && !IS_USERCRIT_OWNED_SHAREDONLY(v7, v6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3482LL);
  if ( !PtiCurrent(v7) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3483LL);
  if ( (*((_DWORD *)a1 + 16) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3484LL);
  v8 = *((_DWORD *)a1 + 16);
  if ( (v8 & 0x1000) == 0 )
  {
    *((_DWORD *)a1 + 16) = v8 | 0x1000;
    _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    v9 = _HMPheFromObjectWorker(a1);
    *(_BYTE *)(v9 + 25) &= ~2u;
    v11 = PtiCurrent(v10);
    v12 = *((_QWORD *)v11 + 135);
    if ( v12 )
      *((_QWORD *)a1 + 11) = v12;
    *((_QWORD *)v11 + 135) = a1;
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v13);
}
