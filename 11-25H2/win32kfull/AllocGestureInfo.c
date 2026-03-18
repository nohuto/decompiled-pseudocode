/*
 * XREFs of AllocGestureInfo @ 0x140269ACC
 * Callers:
 *     SendGestureMessage @ 0x14021FF48 (SendGestureMessage.c)
 *     NtUserInjectGesture @ 0x14029A330 (NtUserInjectGesture.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400C9B3C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400CA9C4 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall AllocGestureInfo(__int64 a1, int a2, __int64 a3, const void *a4)
{
  __int64 v6; // r14
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rbx
  _BYTE v13[56]; // [rsp+48h] [rbp-60h] BYREF

  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_DWORD *)(a3 + 48);
  v8 = v7 + 96;
  if ( v7 + 96 < v7 )
  {
    UserSetLastError(534);
    return 0LL;
  }
  if ( v7 == -96 )
    return 0LL;
  SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>((__int64)v13);
  LOBYTE(v9) = 21;
  v10 = HMAllocObject(v6, 0LL, v9, v8);
  SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v13);
  if ( !v10 )
    return 0LL;
  *(_DWORD *)(v10 + 24) = a2;
  *(_OWORD *)(v10 + 32) = *(_OWORD *)a3;
  *(_OWORD *)(v10 + 48) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(v10 + 64) = *(_OWORD *)(a3 + 32);
  *(_QWORD *)(v10 + 80) = *(_QWORD *)(a3 + 48);
  if ( a4 )
    memmove((void *)(v10 + 88), a4, *(unsigned int *)(a3 + 48));
  return *(_QWORD *)v10;
}
