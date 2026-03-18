/*
 * XREFs of ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x14028694C
 * Callers:
 *     FreeHook @ 0x1400C8710 (FreeHook.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400C8A34 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C8FCC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C9740 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall DelayHookFree(struct tagHOOK *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  PERESOURCE v13; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v14[48]; // [rsp+30h] [rbp-48h] BYREF

  v13 = *(PERESOURCE *)(W32GetUserSessionState(a1, a2) + 42312);
  if ( !tagDomLock::IsLockedShared(&v13) )
    __int2c();
  DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)v14);
  if ( !*(_DWORD *)(W32GetUserSessionState(v4, v3) + 19760) && !IS_USERCRIT_OWNED_SHAREDONLY() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3222);
  if ( !PtiCurrent(v6, v5) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3223);
  if ( (*((_DWORD *)a1 + 16) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3224);
  v7 = *((_DWORD *)a1 + 16);
  if ( (v7 & 0x1000) == 0 )
  {
    *((_DWORD *)a1 + 16) = v7 | 0x1000;
    _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    v8 = _HMPheFromObjectWorker(a1);
    *(_BYTE *)(v8 + 25) &= ~2u;
    v11 = PtiCurrent(v10, v9);
    v12 = *((_QWORD *)v11 + 136);
    if ( v12 )
      *((_QWORD *)a1 + 11) = v12;
    *((_QWORD *)v11 + 136) = a1;
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v14);
}
