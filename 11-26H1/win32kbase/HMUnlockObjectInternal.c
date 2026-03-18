/*
 * XREFs of HMUnlockObjectInternal @ 0x1400D04F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x140093494 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1400935C0 (LockIntoSharedUserCritDeferredUnlockList.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1400D096C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EAF04 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

_DWORD *__fastcall HMUnlockObjectInternal(_DWORD *a1, int a2, int a3)
{
  int v4; // esi
  __int64 UserSessionState; // rdi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  char v12; // al
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // edx
  int v20; // r8d
  PERESOURCE *v21; // [rsp+20h] [rbp-48h] BYREF
  char v22; // [rsp+48h] [rbp-20h]

  v4 = (unsigned __int16)*a1;
  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  v10 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v7, v6, v8) + 19928) * v4);
  v11 = v10 + *(_QWORD *)(UserSessionState + 19920);
  v12 = *(_BYTE *)(v11 + 25);
  if ( (v12 & 1) == 0 || (v12 & 2) != 0 )
    return a1;
  if ( (unsigned int)GET_USERCRIT_DISPOSITION(v10, v9) == 1 )
  {
    DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::ObjectLock<>(&v21);
    LockIntoSharedUserCritDeferredUnlockList((__int64)a1, v19, v20);
    if ( v22 && v21 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*v21);
      return 0LL;
    }
    return 0LL;
  }
  v17 = W32GetUserSessionState(v15, v14, v16);
  v18 = *(_QWORD *)(v17 + 19800);
  if ( !v18 || v11 == v18 || *(_DWORD *)(v17 + 19796) )
  {
    HMDestroyUnlockedObjectWorker((struct _HANDLEENTRY *)v11);
    return 0LL;
  }
  ++*(_DWORD *)(v17 + 19808);
  LockIntoExclusiveUserCritDeferredUnlockList((__int64)a1);
  return 0LL;
}
