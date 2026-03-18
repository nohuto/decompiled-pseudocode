/*
 * XREFs of ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1400BAC6C
 * Callers:
 *     ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1400BABC0 (-DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x140040C50 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1400BAD30 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BAED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 */

__int64 __fastcall DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::ObjectLockRecursive<>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rbx
  int v7; // esi
  tagDomLock *v8; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = GetDomainLockRef(9LL, a2);
  *(_BYTE *)(a1 + 8) = 1;
  UserSessionState = W32GetUserSessionState(v4, v3);
  *(_BYTE *)(a1 + 24) = 0;
  v6 = a1;
  *(_QWORD *)(a1 + 16) = UserSessionState + 42360;
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = 0;
  *(_BYTE *)(a1 + 40) = 0;
  do
  {
    v8 = *(tagDomLock **)v6;
    if ( !*(_QWORD *)v6 )
      goto LABEL_6;
    if ( *(_BYTE *)(v6 + 8) )
    {
      if ( !tagDomLock::IsLockedExclusive(v8) )
      {
        tagDomLock::LockExclusive(*(tagDomLock **)v6);
        goto LABEL_6;
      }
LABEL_8:
      *(_QWORD *)v6 = 0LL;
      goto LABEL_6;
    }
    if ( tagDomLock::IsLockedExclusive(v8) || tagDomLock::IsLockedShared(*(tagDomLock **)v6) )
      goto LABEL_8;
    ExEnterCriticalRegionAndAcquireResourceShared(**(PERESOURCE **)v6);
LABEL_6:
    ++v7;
    v6 += 16LL;
  }
  while ( !v7 );
  result = a1;
  *(_BYTE *)(a1 + 40) = 1;
  return result;
}
