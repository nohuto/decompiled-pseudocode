/*
 * XREFs of _SetWinEventHook @ 0x1400C9E4C
 * Callers:
 *     NtUserSetWinEventHook @ 0x1402A0680 (NtUserSetWinEventHook.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetHmodTableIndex @ 0x1400C8B54 (GetHmodTableIndex.c)
 *     AddHmodDependency @ 0x1400C8D80 (AddHmodDependency.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400C8FCC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??$vInitAndLock@$$V@?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAAXXZ @ 0x1400C9768 (--$vInitAndLock@$$V@-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainShar.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1400C9B8C (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     CategoryMaskFromEventRange @ 0x1400CA0CC (CategoryMaskFromEventRange.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall SetWinEventHook(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        char a8)
{
  unsigned int v10; // r13d
  unsigned int v11; // esi
  __int64 UserSessionState; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rdi
  int HmodTableIndex; // ebx
  __int64 v17; // r8
  __int64 v18; // rdi
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v31; // rax
  int v32; // ecx
  unsigned int v33; // [rsp+20h] [rbp-68h]
  _BYTE v34[48]; // [rsp+28h] [rbp-60h] BYREF

  v33 = a1;
  v10 = a2;
  v11 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42320)) != 1 )
    __int2c();
  v15 = PtiCurrent(v14, v13);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v15 + 132, 0, 0) & 1) != 0 )
    return 0LL;
  if ( !a5 )
  {
    v32 = 1427;
    goto LABEL_16;
  }
  if ( v11 > v10 )
  {
    v32 = 1426;
    goto LABEL_16;
  }
  if ( (a8 & 4) != 0 )
  {
    if ( !a3 )
    {
      v32 = 1428;
      goto LABEL_16;
    }
    if ( !a4 )
    {
      v32 = 1157;
      goto LABEL_16;
    }
    HmodTableIndex = GetHmodTableIndex(a4);
    if ( HmodTableIndex == -1 )
    {
      v32 = 126;
      goto LABEL_16;
    }
  }
  else
  {
    HmodTableIndex = -1;
    a3 = 0LL;
  }
  if ( a7 )
  {
    v31 = PtiFromThreadId(a7);
    if ( !v31 || (_InterlockedCompareExchange((volatile signed __int32 *)(v31 + 528), 0, 0) & 0x1000000) == 0 )
    {
      v32 = 1444;
LABEL_16:
      UserSetLastError(v32);
      return 0LL;
    }
  }
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>((__int64)v34);
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::vInitAndLock<>((__int64)v34);
  LOBYTE(v17) = 15;
  v18 = HMAllocObject(v15, 0LL, v17, 80LL);
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>((__int64)v34);
  if ( !v18 )
    return 0LL;
  v19 = *(_DWORD *)(v18 + 40);
  *(_DWORD *)(v18 + 32) = v33;
  v20 = v19 & 0xFFFFFFFD;
  *(_DWORD *)(v18 + 36) = v10;
  *(_DWORD *)(v18 + 56) = a7;
  *(_DWORD *)(v18 + 72) = HmodTableIndex;
  *(_QWORD *)(v18 + 48) = a6;
  v21 = (2 * (a8 & 0xA)) | ((a8 & 4) != 0 ? 8 : 0) | ((unsigned int)v20 ^ (2 * (a8 & 1))) & 0xFFFFFFE2;
  *(_DWORD *)(v18 + 40) = v21;
  if ( HmodTableIndex >= 0 )
    AddHmodDependency(HmodTableIndex);
  *(_QWORD *)(v18 + 64) = a5 - a3;
  v22 = *(_QWORD *)(W32GetUserSessionState(v20, v21) + 70592);
  *(_QWORD *)(v18 + 24) = v22;
  *(_QWORD *)(W32GetUserSessionState(v22, v23) + 70592) = v18;
  W32GetUserSessionState(v25, v24);
  v26 = CategoryMaskFromEventRange(v33, v10);
  v29 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 19872);
  *(_DWORD *)(v29 + 1892) |= v26;
  *(_DWORD *)(v18 + 76) = W32GetCurrentThreadDpiAwarenessContext(v29);
  return v18;
}
