/*
 * XREFs of _UnhookWinEvent @ 0x1400CA498
 * Callers:
 *     NtUserUnhookWinEvent @ 0x1400CA120 (NtUserUnhookWinEvent.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1400C7D64 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C8FCC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     DestroyEventHook @ 0x1400C9C20 (DestroyEventHook.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall UnhookWinEvent(struct _HEAD *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _BYTE v8[48]; // [rsp+20h] [rbp-48h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42320)) != 1 )
    __int2c();
  DomainShared<DLT_HANDLEMANAGER>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v8);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 || *((struct tagTHREADINFO **)a1 + 2) != PtiCurrent(v5, v4) )
  {
    UserSetLastError(6);
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v8);
    return 0LL;
  }
  else
  {
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v8);
    DestroyEventHook(a1, v6);
    return 1LL;
  }
}
