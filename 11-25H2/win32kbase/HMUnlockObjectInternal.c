/*
 * XREFs of HMUnlockObjectInternal @ 0x1400396C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400395B0 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140040DDC (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400BAE08 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x140161960 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1401A5878 (LockIntoSharedUserCritDeferredUnlockList.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

int *__fastcall HMUnlockObjectInternal(int *a1, __int64 a2)
{
  int v2; // edi
  __int64 UserSessionState; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  char v8; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PERESOURCE *v15; // [rsp+20h] [rbp-48h] BYREF
  char v16; // [rsp+48h] [rbp-20h]

  v2 = *a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v7 = *(_QWORD *)(UserSessionState + 19888)
     + *(_DWORD *)(W32GetUserSessionState(v6, v5) + 19896) * (unsigned int)(unsigned __int16)v2;
  v8 = *(_BYTE *)(v7 + 25);
  if ( (v8 & 1) == 0 || (v8 & 2) != 0 )
    return a1;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::ObjectLock<>(&v15);
    LockIntoSharedUserCritDeferredUnlockList(a1);
    if ( v16 && v15 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*v15);
      return 0LL;
    }
    return 0LL;
  }
  v12 = W32GetUserSessionState(v11, v10);
  v14 = *(_QWORD *)(v12 + 19768);
  if ( !v14 || v7 == v14 || *(_DWORD *)(v12 + 19764) )
  {
    HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)v7, v13);
    return 0LL;
  }
  ++*(_DWORD *)(v12 + 19776);
  LockIntoExclusiveUserCritDeferredUnlockList(a1);
  return 0LL;
}
